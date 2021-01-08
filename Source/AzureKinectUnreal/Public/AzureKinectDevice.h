// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AzureKinectThread.h"
#include "OpenCVCore.h"
#include "PC_tools.h"
#include "PCL_Library.h"
#include "ShowImageActor.h"
#include "AzureKinectBody.h"
#include "Delegates/IDelegateInstance.h"

class AShowImageActor;

DECLARE_LOG_CATEGORY_EXTERN(AzureKinectDeviceLog, Log, All);

/**
 * A representation of the Native Azure Kinect Device that is used to call the
 * connected device's (K4A & K4ABT) API for starting & stopping camera sensors,
 * creating & destroying the body tracker, capturing the body frame etc.
 */
class AZUREKINECTUNREAL_API AzureKinectDevice
{
public:
	/** Ctor */
	AzureKinectDevice();
	/** Ctor that initializes this azure kinect device with the id and timeout params. */
	AzureKinectDevice(int32 DeviceId, int32 TimeOut);
	/** Destructor */
	~AzureKinectDevice();

	/** Initalizes the Azure kinect device with the given Depth Mode. */
	bool Initialize(k4a_depth_mode_t DepthMode);
	/** Shuts down this device */
	void Shutdown();

	/**
	 * Captures the device body tracking frame, enqueues the capture, pops the tracker body frame result
	 * and releases the body frame. 
	 * 
	 * @note This is run on a different thread to improve performance.
	 */
	void CaptureBodyTrackingFrame();

	/** The timeout for the API calls in milliseconds. */
	int32 GetTimeOutInMilliSecs() const;

	/** Returns an array of the tracked bodies by this device. */
	TArray<UAzureKinectBody*> GetBodies() const;

	/** Whether this device is initialized or not. */
	bool IsInitialized() const;

	void ToggleShowLogsAndOnScreenMsgs(bool ShouldShowLogs, bool ShouldShowOnScreenMsgs);

	cv::Mat k4a2Mat_RGB(k4a::image &inImg);
	void Mat2Utexture2D_RGB(cv::Mat inMat);
	cv::Mat k4a2Mat_Depth(k4a::image indepth);
	//void Mat2Texture2D_RGB(cv::Mat inMat);
	void Mat2Texture2D_Depth(cv::Mat inMat);

	//Point Cloud
	void DrawPointCloud(pcl::PointCloud<pcl::PointXYZ>& inCloud);

	void StoryPointCloud();

private:
	/** A handle to the native k4a device that is used in starting and stopping camera sensors. */
	k4a::device NativeKinectDevice;
	/** The Id of this device. Default is 0. */
	int32 DeviceId;
	/** A handle to the native k4abt body tracker that is used to get the body frame and the skeleton joints data. */
	k4abt::tracker NativeBodyTracker;
	/** The timeout for the API calls. Default is 0, which means it is non-blocking. */
	int32 TimeOutInMilliSecs;
	/** TimeOutInMilliSecs converted to std::chrono::milliseconds */
	std::chrono::milliseconds TimeOutInMilliSecsConverted;

	/** A pointer to the thread that does the body capturing. */
	FAzureKinectThread *Thread;

	/** Whether this device is initialized or not. */
	bool bIsInitialized;

	/** 
	 * An array of bodies that are tracked by this device. 
	 * The bodies in the array are automatically updated with new kinect body joint data.
	 */
	TArray<UAzureKinectBody*> Bodies;
	TArray<UAzureKinectBody*> TrackedBodies;

	/** The frequency with which the ticker delegate is called. Set to 16 ms = 60 fps. */
	const float TickInterval = 0.016666666f;

	/** A delegate handle to start and stop polling. */
	FDelegateHandle TickHandle;

	/** Initializes the Bodies TArray with correct length/size and default values. */
	void InitializeBodies();

	/** Initializes the kinect thread. */
	void StartKinectThread();

	/**
	 * The polling function that is called by the ticker delegate.
	 * This updates the UAzureKinectBody in Bodies array with the data
	 * from the Kinect Body.
	 */
	bool OnTick(float DeltaTime);

	/** For debugging only */
	bool bShowAllLogs;
	bool bShowOnScreenMsgs;
	k4a::image AzureColorImage;
	k4a::image AzureDepthImgae;
	cv::Mat Color_Image;
	k4a::image transformationImage;

	/*custom*/
	TArray<FColor> ColorData;
public:
	UTexture2D* OutTexture;
	AShowImageActor* ShowImage;
	k4a::calibration cali;
	k4a::transformation trans;
	UTexture2D* outDepthTexture;
	UTexture2D* outColorTexture;
	// Point Cloud Var
	pcl::PointCloud<pcl::PointXYZ> AzurePoint_Cloud;
	k4a::image PCL_Depth_Image;
	k4a::calibration sensorCalibration;

};
