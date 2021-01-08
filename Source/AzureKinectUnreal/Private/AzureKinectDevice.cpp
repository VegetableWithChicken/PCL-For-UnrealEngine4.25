// Fill out your copyright notice in the Description page of Project Settings.


#include "AzureKinectDevice.h"
#include "Containers/Ticker.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Core/Public/Async/Async.h"
#include "Engine/Engine.h"

DEFINE_LOG_CATEGORY(AzureKinectDeviceLog);

AzureKinectDevice::AzureKinectDevice() :
	AzureKinectDevice(0, 0)
{
}

AzureKinectDevice::AzureKinectDevice(int32 Id, int32 TimeOut) :
	NativeKinectDevice(nullptr),
	DeviceId(Id),
	NativeBodyTracker(nullptr),
	TimeOutInMilliSecs(TimeOut),
	Thread(nullptr),
	bIsInitialized(false),
	bShowAllLogs(false),
	bShowOnScreenMsgs(false)
{
	TimeOutInMilliSecsConverted = std::chrono::milliseconds(TimeOutInMilliSecs);
}

AzureKinectDevice::~AzureKinectDevice()
{
	Shutdown();
}

bool AzureKinectDevice::Initialize(k4a_depth_mode_t DepthMode)
{
	try
	{
		TArray<AActor*> out;
		UGameplayStatics::GetAllActorsOfClass(GWorld, AShowImageActor::StaticClass(), out);
		if (out.IsValidIndex(0))
		{
		ShowImage = Cast<AShowImageActor>(out[0]);
		}
		else
		{
			ShowImage = NewObject<AShowImageActor>();
		}
		// Open the Azure Kinect Device
		NativeKinectDevice = k4a::device::open(DeviceId);

		// Start the Camera and make sure the Depth Camera is Enabled
		k4a_device_configuration_t deviceConfig = K4A_DEVICE_CONFIG_INIT_DISABLE_ALL;
		deviceConfig.depth_mode = DepthMode;
		deviceConfig.color_resolution = K4A_COLOR_RESOLUTION_1080P;
		deviceConfig.color_format = K4A_IMAGE_FORMAT_COLOR_BGRA32;
		deviceConfig.wired_sync_mode = k4a_wired_sync_mode_t::K4A_WIRED_SYNC_MODE_STANDALONE;
		deviceConfig.synchronized_images_only = true;
		cali = NativeKinectDevice.get_calibration(deviceConfig.depth_mode, deviceConfig.color_resolution);
		trans = k4a::transformation(cali);
		NativeKinectDevice.start_cameras(&deviceConfig);
		/*pengchong*/
		OutTexture = UTexture2D::CreateTransient((int32)1920, (int32)1080);
		OutTexture->SRGB = 0;

		outDepthTexture = UTexture2D::CreateTransient((int32)1920, (int32)1080);
		outColorTexture= UTexture2D::CreateTransient((int32)1920, (int32)1080);

		// Get the device calibration
		sensorCalibration = NativeKinectDevice.get_calibration(deviceConfig.depth_mode, deviceConfig.color_resolution);

		// Create the Body tracker using the calibration
		NativeBodyTracker = k4abt::tracker::create(sensorCalibration);
	}
	catch (k4a::error initError)
	{
		FString initErrorStr(initError.what());
		UE_LOG(AzureKinectDeviceLog, Error, TEXT("Kinect device (id : %d) - Initialization Failed with error : %s"), DeviceId, *initErrorStr);
		return false;
	}

	bIsInitialized = true;

	InitializeBodies();
	StartKinectThread();

	TickHandle = FTicker::GetCoreTicker().AddTicker(FTickerDelegate::CreateRaw(this, &AzureKinectDevice::OnTick), TickInterval);

	return true;
}

void AzureKinectDevice::Shutdown()
{
	bIsInitialized = false;

	if (Thread)
	{
		Thread->Shutdown();
		Thread = nullptr;
	}

	FTicker::GetCoreTicker().RemoveTicker(TickHandle);

	for (UAzureKinectBody *body : Bodies)
	{
		body->RemoveFromRoot();
	}
	Bodies.Empty();

	if (NativeBodyTracker)
	{
		NativeBodyTracker.shutdown();
		NativeBodyTracker.destroy();
		NativeBodyTracker = nullptr;
		UE_LOG(AzureKinectDeviceLog, Warning, TEXT("BodyTracker Shutdown and Destroyed"));
	}

	if (NativeKinectDevice)
	{
		NativeKinectDevice.stop_cameras();
		NativeKinectDevice.close();
		NativeKinectDevice = nullptr;
		UE_LOG(AzureKinectDeviceLog, Warning, TEXT("KinectDevice Camera is Stopped and Closed"));
	}
}

void AzureKinectDevice::CaptureBodyTrackingFrame()
{
	if (!bIsInitialized)
	{
		UE_LOG(AzureKinectDeviceLog, Error, TEXT("Kinect device for capturing body tracking frame is Not Initialized!"));
		return;
	}

	if (!NativeKinectDevice)
	{
		UE_LOG(AzureKinectDeviceLog, Error, TEXT("Kinect device for capturing body tracking frame is Invalid!"));
		return;
	}

	if (!NativeBodyTracker)
	{
		UE_LOG(AzureKinectDeviceLog, Error, TEXT("Body Tracker for capturing body tracking frame is Invalid!"));
		return;
	}

	uint32_t i = 0;
	try
	{
		// Capture a depth frame
		k4a::capture sensorCapture = nullptr;
		if (!NativeKinectDevice.get_capture(&sensorCapture, TimeOutInMilliSecsConverted))
		{
			UE_CLOG(bShowAllLogs, AzureKinectDeviceLog, Error, TEXT("Kinect device get capture Timed Out!"));
			return;
		}

		// Enqueue the capture
		if (!NativeBodyTracker.enqueue_capture(sensorCapture, TimeOutInMilliSecsConverted))
		{
			UE_CLOG(bShowAllLogs, AzureKinectDeviceLog, Error, TEXT("Adding capture to the Tracker process queue Timed Out!"));
			return;
		}

		k4abt::frame bodyFrame = nullptr;
		if (!NativeBodyTracker.pop_result(&bodyFrame, TimeOutInMilliSecsConverted))
		{
			UE_CLOG(bShowAllLogs, AzureKinectDeviceLog, Error, TEXT("Tracker pop body frame result Timed Out!"));
			return;
		}

		// Successfully popped the body tracking result
		uint32_t numBodies = bodyFrame.get_num_bodies();
		if (GEngine && bShowOnScreenMsgs)
		{
			GEngine->AddOnScreenDebugMessage(0, 5.0f, (numBodies > 0 ? FColor::Cyan : FColor::Red), FString::Printf(TEXT("%zu bodies are detected"), numBodies));
		}

		// Get the skeleton data for the tracked bodies
		for (; i < FMath::Min(numBodies, MaxBodies); i++)
		{
			k4abt_body_t body;
			try
			{
				body = bodyFrame.get_body(i);
				//bodyFrame.get_body_skeleton(i, body.skeleton);
			}
			catch (k4a::error skeletonError)
			{
				UE_CLOG(bShowAllLogs, AzureKinectDeviceLog, Error, TEXT("Get Body Skeleton Failed!"));
				Bodies[i]->bIsTracked = false;
				Bodies[i]->Id = 0;
				continue;
			}
			bool isNewBody = true;
			uint32_t NewBodyIndex = 0;
			for (uint32_t j = 0; j < FMath::Min(numBodies, MaxBodies); j++)
			{
				if (Bodies[j]->Id == 0 || body.id == Bodies[j]->Id)
				{
					Bodies[j]->NativeBody = body;
					Bodies[j]->Id = body.id;
					Bodies[j]->bIsTracked = true;
					isNewBody = false;
					break;
				}
				NewBodyIndex = j;
			}
			if (isNewBody)
			{
				Bodies[NewBodyIndex]->NativeBody = body;
				Bodies[NewBodyIndex]->Id = body.id;
				Bodies[NewBodyIndex]->bIsTracked = true;
			}
			//body.id = bodyFrame.get_body_id(i);


			if (GEngine && bShowOnScreenMsgs)
			{
				GEngine->AddOnScreenDebugMessage(1, 5.0f, FColor::Cyan, FString::Printf(TEXT("  Body Id : %d"), body.id));
			}


		}
		for (uint32 h = 0; h < MaxBodies; h++)
		{

			bool isDisable = true;
			for (uint32_t k = 0; k < FMath::Min(numBodies, MaxBodies); k++)
			{
				k4abt_body_t body = bodyFrame.get_body(k);
				if (Bodies[h]->Id == body.id)
				{
					TrackedBodies.AddUnique(Bodies[h]);
					isDisable = false;
				}
			}
			if (isDisable)
			{
				Bodies[h]->bIsTracked = false;
				Bodies[h]->Id = 0;
				TrackedBodies.Remove(Bodies[h]);
			}
		}

		//Color
		AzureColorImage = sensorCapture.get_color_image();
		cv::Mat transColorMat = k4a2Mat_RGB(AzureColorImage);
		//Depth
		AzureDepthImgae = sensorCapture.get_depth_image();
		transformationImage = trans.depth_image_to_color_camera(AzureDepthImgae);
		cv::Mat transDepthMat=k4a2Mat_Depth(transformationImage);
		
		
		AsyncTask(ENamedThreads::GameThread,[=]()
		{
			Mat2Texture2D_Depth(transDepthMat);
			//Mat2Texture2D_Depth(transColorMat);
			Mat2Utexture2D_RGB(transColorMat);
		   ShowImage->GetColor_Image(outColorTexture);
		   ShowImage->GetDepth_Image(outDepthTexture);
		});
	}
		catch (k4a::error captureError)
		{
			FString captureErrorStr(captureError.what());
			UE_CLOG(bShowAllLogs, AzureKinectDeviceLog, Error, TEXT("Kinect device body tracking capture Failed with error : %s"), *captureErrorStr);
		}

		// Set all the remaining Bodies to be Not tracked
		for (uint32 j = i; j < MaxBodies; j++)
		{
			Bodies[j]->bIsTracked = false;
		}
	}

int32 AzureKinectDevice::GetTimeOutInMilliSecs() const
{
	return TimeOutInMilliSecs;
}

TArray<UAzureKinectBody*> AzureKinectDevice::GetBodies() const
{
	return Bodies;
}

bool AzureKinectDevice::IsInitialized() const
{
	return bIsInitialized;
}

void AzureKinectDevice::InitializeBodies()
{
	// reset any allocated memory
	Bodies.Empty(MaxBodies);
	Bodies.SetNum(MaxBodies);
	Bodies.Shrink();

	for (uint32 i = 0; i < MaxBodies; i++)
	{
		Bodies[i] = NewObject<UAzureKinectBody>();
		Bodies[i]->AddToRoot();
	}
}

void AzureKinectDevice::StartKinectThread()
{
	Thread = FAzureKinectThread::InitPolling(this);
}

bool AzureKinectDevice::OnTick(float DeltaTime)
{
	if (bIsInitialized)
	{
		for (UAzureKinectBody *Body : Bodies)
		{
			Body->UpdateBodyWithKinectInfo();
		}
	}

	return true;
}

void AzureKinectDevice::ToggleShowLogsAndOnScreenMsgs(bool ShouldShowLogs, bool ShouldShowOnScreenMsgs)
{
	bShowAllLogs = ShouldShowLogs;
	bShowOnScreenMsgs = ShouldShowOnScreenMsgs;
}

cv::Mat  AzureKinectDevice::k4a2Mat_RGB(k4a::image &inImg)
{
	int hight = k4a_image_get_height_pixels(inImg.handle());
	int width = k4a_image_get_width_pixels(inImg.handle());
	return cv::Mat(hight, width, CV_8UC4, k4a_image_get_buffer(inImg.handle()));
}

void AzureKinectDevice::Mat2Utexture2D_RGB(cv::Mat inMat)
{
	/*
	UTexture2D* NewTexture = UTexture2D::CreateTransient((int32)inMat.cols, (int32)inMat.rows);

	int32 DataSize = inMat.cols * inMat.rows;
	ColorData.Init(FColor(0, 0, 0, 255), DataSize);

	for (int y = 0; y < inMat.rows; ++y)
	{
		for (int x = 0; x < inMat.cols; ++x)
		{
			int i = x + (y *inMat.cols);
			ColorData[i] = FColor(inMat.data[i * 4 + 2], inMat.data[i * 4 + 1], inMat.data[i * 4 + 0], 255);
		}
	}
	void* Datas = NewTexture->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
	FMemory::Memmove(Datas, ColorData.GetData(), ColorData.Num() * sizeof(FColor));
	NewTexture->PlatformData->Mips[0].BulkData.Unlock();
	NewTexture->UpdateResource();
	*/

	if (inMat.empty()) return;
	int32 width = inMat.cols;
	int32 height = inMat.rows;
	outColorTexture->CompressionSettings = TextureCompressionSettings::TC_VectorDisplacementmap;
	outColorTexture->SRGB = 0;
	int32 Datasize = width * height * 4;
	void* Datas = outColorTexture->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
	FMemory::Memmove(Datas, inMat.data, Datasize);
	outColorTexture->PlatformData->Mips[0].BulkData.Unlock();
	//outColorTexture->UpdateResource();
}

cv::Mat AzureKinectDevice::k4a2Mat_Depth(k4a::image indepth)
{
	int32 hight = indepth.get_width_pixels();
	int32 width = indepth.get_height_pixels();
	cv::Mat Depth_frame = cv::Mat(hight, width, CV_16UC1, reinterpret_cast<uint16_t*>(k4a_image_get_buffer(indepth.handle())));
	Depth_frame.convertTo(Depth_frame, CV_8UC1, 255.0 / 5000.0, 0.0);
	cv::Mat outDepth;
	cv::cvtColor(Depth_frame, outDepth, CV_GRAY2RGBA);
	return outDepth;
}



void AzureKinectDevice::Mat2Texture2D_Depth(cv::Mat inMat)
{
	if (inMat.empty()) return;
	int32 width = inMat.cols;
	int32 height = inMat.rows;
	outDepthTexture->CompressionSettings = TextureCompressionSettings::TC_VectorDisplacementmap;
	outDepthTexture->SRGB = 0;
	int32 Datasize = width * height * 4;
	void* Datas = outDepthTexture->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
	FMemory::Memmove(Datas, inMat.data, Datasize);
	outDepthTexture->PlatformData->Mips[0].BulkData.Unlock();
	//outDepthTexture->UpdateResource();
	
}

//Point Cloud Implement
void AzureKinectDevice::DrawPointCloud(pcl::PointCloud<pcl::PointXYZ>& inCloud)
{

}

void AzureKinectDevice::StoryPointCloud()
{
	/*
	if (PCL_Depth_Image)
	{
		k4a::image pointimage=trans.depth_image_to_point_cloud(PCL_Depth_Image, K4A_CALIBRATION_TYPE_DEPTH);
		if (pointimage)
		{
			k4a_float3_t* data=(k4a_float3_t*)(void*)pointimage.get_buffer();
			int32 width = pointimage.get_width_pixels();
			int32 height = pointimage.get_height_pixels();

		
			
		}
		else
		{
			PC_LOG("Point_image_bad");
		}
	}
	else
	{
		PC_LOG("PCL_Depth_Image_bad");
	}
	*/
}
