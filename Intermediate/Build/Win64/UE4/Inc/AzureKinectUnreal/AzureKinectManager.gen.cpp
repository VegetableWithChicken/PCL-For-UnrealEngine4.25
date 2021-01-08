// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AzureKinectUnreal/Public/AzureKinectManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAzureKinectManager() {}
// Cross Module References
	AZUREKINECTUNREAL_API UClass* Z_Construct_UClass_UAzureKinectManager_NoRegister();
	AZUREKINECTUNREAL_API UClass* Z_Construct_UClass_UAzureKinectManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AzureKinectUnreal();
	AZUREKINECTUNREAL_API UClass* Z_Construct_UClass_UAzureKinectBody_NoRegister();
	AZUREKINECTUNREAL_API UEnum* Z_Construct_UEnum_AzureKinectUnreal_EKinectDepthMode();
// End Cross Module References
	DEFINE_FUNCTION(UAzureKinectManager::execToggleDeviceLogging)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DeviceId);
		P_GET_UBOOL(Z_Param_ShouldShowLogs);
		P_GET_UBOOL(Z_Param_ShouldShowOnScreenMsgs);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAzureKinectManager::ToggleDeviceLogging(Z_Param_DeviceId,Z_Param_ShouldShowLogs,Z_Param_ShouldShowOnScreenMsgs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzureKinectManager::execGetJointCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UAzureKinectManager::GetJointCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzureKinectManager::execGetBodies)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DeviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UAzureKinectBody*>*)Z_Param__Result=UAzureKinectManager::GetBodies(Z_Param_DeviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzureKinectManager::execIsDeviceInitialized)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DeviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAzureKinectManager::IsDeviceInitialized(Z_Param_DeviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzureKinectManager::execShutdownDevice)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DeviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAzureKinectManager::ShutdownDevice(Z_Param_DeviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzureKinectManager::execInitDevice)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DeviceId);
		P_GET_ENUM(EKinectDepthMode,Z_Param_DepthMode);
		P_GET_PROPERTY(FIntProperty,Z_Param_TimeOutInMilliSecs);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAzureKinectManager::InitDevice(Z_Param_DeviceId,EKinectDepthMode(Z_Param_DepthMode),Z_Param_TimeOutInMilliSecs);
		P_NATIVE_END;
	}
	void UAzureKinectManager::StaticRegisterNativesUAzureKinectManager()
	{
		UClass* Class = UAzureKinectManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBodies", &UAzureKinectManager::execGetBodies },
			{ "GetJointCount", &UAzureKinectManager::execGetJointCount },
			{ "InitDevice", &UAzureKinectManager::execInitDevice },
			{ "IsDeviceInitialized", &UAzureKinectManager::execIsDeviceInitialized },
			{ "ShutdownDevice", &UAzureKinectManager::execShutdownDevice },
			{ "ToggleDeviceLogging", &UAzureKinectManager::execToggleDeviceLogging },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAzureKinectManager_GetBodies_Statics
	{
		struct AzureKinectManager_eventGetBodies_Parms
		{
			int32 DeviceId;
			TArray<UAzureKinectBody*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeviceId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAzureKinectManager_GetBodies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AzureKinectManager_eventGetBodies_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzureKinectManager_GetBodies_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAzureKinectBody_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAzureKinectManager_GetBodies_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AzureKinectManager_eventGetBodies_Parms, DeviceId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureKinectManager_GetBodies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureKinectManager_GetBodies_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureKinectManager_GetBodies_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureKinectManager_GetBodies_Statics::NewProp_DeviceId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureKinectManager_GetBodies_Statics::Function_MetaDataParams[] = {
		{ "Category", "Azure Kinect" },
		{ "Comment", "/** Retrieves the bodies tracked and non-tracked by the azure kinect device with the given device id. */" },
		{ "CPP_Default_DeviceId", "0" },
		{ "DisplayName", "Get Bodies for Device" },
		{ "ModuleRelativePath", "Public/AzureKinectManager.h" },
		{ "ToolTip", "Retrieves the bodies tracked and non-tracked by the azure kinect device with the given device id." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureKinectManager_GetBodies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureKinectManager, nullptr, "GetBodies", nullptr, nullptr, sizeof(AzureKinectManager_eventGetBodies_Parms), Z_Construct_UFunction_UAzureKinectManager_GetBodies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureKinectManager_GetBodies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzureKinectManager_GetBodies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureKinectManager_GetBodies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzureKinectManager_GetBodies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAzureKinectManager_GetBodies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzureKinectManager_GetJointCount_Statics
	{
		struct AzureKinectManager_eventGetJointCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAzureKinectManager_GetJointCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AzureKinectManager_eventGetJointCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureKinectManager_GetJointCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureKinectManager_GetJointCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureKinectManager_GetJointCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Azure Kinect" },
		{ "Comment", "/** Retrieves the azure kinect body joint count. */" },
		{ "DisplayName", "Get Kinect Body Joint Count" },
		{ "ModuleRelativePath", "Public/AzureKinectManager.h" },
		{ "ToolTip", "Retrieves the azure kinect body joint count." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureKinectManager_GetJointCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureKinectManager, nullptr, "GetJointCount", nullptr, nullptr, sizeof(AzureKinectManager_eventGetJointCount_Parms), Z_Construct_UFunction_UAzureKinectManager_GetJointCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureKinectManager_GetJointCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzureKinectManager_GetJointCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureKinectManager_GetJointCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzureKinectManager_GetJointCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAzureKinectManager_GetJointCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzureKinectManager_InitDevice_Statics
	{
		struct AzureKinectManager_eventInitDevice_Parms
		{
			int32 DeviceId;
			EKinectDepthMode DepthMode;
			int32 TimeOutInMilliSecs;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimeOutInMilliSecs;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DepthMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DepthMode_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeviceId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAzureKinectManager_InitDevice_Statics::NewProp_TimeOutInMilliSecs = { "TimeOutInMilliSecs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AzureKinectManager_eventInitDevice_Parms, TimeOutInMilliSecs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAzureKinectManager_InitDevice_Statics::NewProp_DepthMode = { "DepthMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AzureKinectManager_eventInitDevice_Parms, DepthMode), Z_Construct_UEnum_AzureKinectUnreal_EKinectDepthMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAzureKinectManager_InitDevice_Statics::NewProp_DepthMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAzureKinectManager_InitDevice_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AzureKinectManager_eventInitDevice_Parms, DeviceId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureKinectManager_InitDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureKinectManager_InitDevice_Statics::NewProp_TimeOutInMilliSecs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureKinectManager_InitDevice_Statics::NewProp_DepthMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureKinectManager_InitDevice_Statics::NewProp_DepthMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureKinectManager_InitDevice_Statics::NewProp_DeviceId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureKinectManager_InitDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Azure Kinect" },
		{ "Comment", "/**\n\x09 * Initializes the azure kinect device with the given details and if the initialization is \n\x09 * successful, then adds it to the TMap.\n\x09 *\n\x09 * @param DeviceId The device id of the Azure Kinect Device to initialize.\n\x09 * @param DepthMode The default is set to NFOV_UNBINNED. For body tracking it should be NFOV_UNBINNED or WFOV_BINNED.\n\x09 * @param TimeOutInMilliSecs Default is Zero (Non-blocking). Set it to -1 (K4A_WAIT_INFINITE) for Blocking call.\n\x09 */" },
		{ "CPP_Default_DepthMode", "NFOV_UNBINNED" },
		{ "CPP_Default_DeviceId", "0" },
		{ "CPP_Default_TimeOutInMilliSecs", "0" },
		{ "DisplayName", "Init Azure Kinect" },
		{ "ModuleRelativePath", "Public/AzureKinectManager.h" },
		{ "ToolTip", "Initializes the azure kinect device with the given details and if the initialization is\nsuccessful, then adds it to the TMap.\n\n@param DeviceId The device id of the Azure Kinect Device to initialize.\n@param DepthMode The default is set to NFOV_UNBINNED. For body tracking it should be NFOV_UNBINNED or WFOV_BINNED.\n@param TimeOutInMilliSecs Default is Zero (Non-blocking). Set it to -1 (K4A_WAIT_INFINITE) for Blocking call." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureKinectManager_InitDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureKinectManager, nullptr, "InitDevice", nullptr, nullptr, sizeof(AzureKinectManager_eventInitDevice_Parms), Z_Construct_UFunction_UAzureKinectManager_InitDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureKinectManager_InitDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzureKinectManager_InitDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureKinectManager_InitDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzureKinectManager_InitDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAzureKinectManager_InitDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzureKinectManager_IsDeviceInitialized_Statics
	{
		struct AzureKinectManager_eventIsDeviceInitialized_Parms
		{
			int32 DeviceId;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeviceId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAzureKinectManager_IsDeviceInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AzureKinectManager_eventIsDeviceInitialized_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAzureKinectManager_IsDeviceInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AzureKinectManager_eventIsDeviceInitialized_Parms), &Z_Construct_UFunction_UAzureKinectManager_IsDeviceInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAzureKinectManager_IsDeviceInitialized_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AzureKinectManager_eventIsDeviceInitialized_Parms, DeviceId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureKinectManager_IsDeviceInitialized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureKinectManager_IsDeviceInitialized_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureKinectManager_IsDeviceInitialized_Statics::NewProp_DeviceId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureKinectManager_IsDeviceInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "Azure Kinect" },
		{ "Comment", "/** Check to see if the azure kinect device with the given device id is initialized. */" },
		{ "CPP_Default_DeviceId", "0" },
		{ "DisplayName", "Is Azure Kinect Device Initialized" },
		{ "ModuleRelativePath", "Public/AzureKinectManager.h" },
		{ "ToolTip", "Check to see if the azure kinect device with the given device id is initialized." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureKinectManager_IsDeviceInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureKinectManager, nullptr, "IsDeviceInitialized", nullptr, nullptr, sizeof(AzureKinectManager_eventIsDeviceInitialized_Parms), Z_Construct_UFunction_UAzureKinectManager_IsDeviceInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureKinectManager_IsDeviceInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzureKinectManager_IsDeviceInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureKinectManager_IsDeviceInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzureKinectManager_IsDeviceInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAzureKinectManager_IsDeviceInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzureKinectManager_ShutdownDevice_Statics
	{
		struct AzureKinectManager_eventShutdownDevice_Parms
		{
			int32 DeviceId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeviceId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAzureKinectManager_ShutdownDevice_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AzureKinectManager_eventShutdownDevice_Parms, DeviceId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureKinectManager_ShutdownDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureKinectManager_ShutdownDevice_Statics::NewProp_DeviceId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureKinectManager_ShutdownDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Azure Kinect" },
		{ "Comment", "/** Shuts down the azure kinect device with the given device id. */" },
		{ "CPP_Default_DeviceId", "0" },
		{ "DisplayName", "Shutdown Azure Kinect" },
		{ "ModuleRelativePath", "Public/AzureKinectManager.h" },
		{ "ToolTip", "Shuts down the azure kinect device with the given device id." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureKinectManager_ShutdownDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureKinectManager, nullptr, "ShutdownDevice", nullptr, nullptr, sizeof(AzureKinectManager_eventShutdownDevice_Parms), Z_Construct_UFunction_UAzureKinectManager_ShutdownDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureKinectManager_ShutdownDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzureKinectManager_ShutdownDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureKinectManager_ShutdownDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzureKinectManager_ShutdownDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAzureKinectManager_ShutdownDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzureKinectManager_ToggleDeviceLogging_Statics
	{
		struct AzureKinectManager_eventToggleDeviceLogging_Parms
		{
			int32 DeviceId;
			bool ShouldShowLogs;
			bool ShouldShowOnScreenMsgs;
		};
		static void NewProp_ShouldShowOnScreenMsgs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldShowOnScreenMsgs;
		static void NewProp_ShouldShowLogs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldShowLogs;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeviceId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAzureKinectManager_ToggleDeviceLogging_Statics::NewProp_ShouldShowOnScreenMsgs_SetBit(void* Obj)
	{
		((AzureKinectManager_eventToggleDeviceLogging_Parms*)Obj)->ShouldShowOnScreenMsgs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAzureKinectManager_ToggleDeviceLogging_Statics::NewProp_ShouldShowOnScreenMsgs = { "ShouldShowOnScreenMsgs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AzureKinectManager_eventToggleDeviceLogging_Parms), &Z_Construct_UFunction_UAzureKinectManager_ToggleDeviceLogging_Statics::NewProp_ShouldShowOnScreenMsgs_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAzureKinectManager_ToggleDeviceLogging_Statics::NewProp_ShouldShowLogs_SetBit(void* Obj)
	{
		((AzureKinectManager_eventToggleDeviceLogging_Parms*)Obj)->ShouldShowLogs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAzureKinectManager_ToggleDeviceLogging_Statics::NewProp_ShouldShowLogs = { "ShouldShowLogs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AzureKinectManager_eventToggleDeviceLogging_Parms), &Z_Construct_UFunction_UAzureKinectManager_ToggleDeviceLogging_Statics::NewProp_ShouldShowLogs_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAzureKinectManager_ToggleDeviceLogging_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AzureKinectManager_eventToggleDeviceLogging_Parms, DeviceId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureKinectManager_ToggleDeviceLogging_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureKinectManager_ToggleDeviceLogging_Statics::NewProp_ShouldShowOnScreenMsgs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureKinectManager_ToggleDeviceLogging_Statics::NewProp_ShouldShowLogs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureKinectManager_ToggleDeviceLogging_Statics::NewProp_DeviceId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureKinectManager_ToggleDeviceLogging_Statics::Function_MetaDataParams[] = {
		{ "Category", "Azure Kinect" },
		{ "DisplayName", "Toggle Kinect Device Logging" },
		{ "ModuleRelativePath", "Public/AzureKinectManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureKinectManager_ToggleDeviceLogging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureKinectManager, nullptr, "ToggleDeviceLogging", nullptr, nullptr, sizeof(AzureKinectManager_eventToggleDeviceLogging_Parms), Z_Construct_UFunction_UAzureKinectManager_ToggleDeviceLogging_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureKinectManager_ToggleDeviceLogging_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzureKinectManager_ToggleDeviceLogging_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureKinectManager_ToggleDeviceLogging_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzureKinectManager_ToggleDeviceLogging()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAzureKinectManager_ToggleDeviceLogging_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAzureKinectManager_NoRegister()
	{
		return UAzureKinectManager::StaticClass();
	}
	struct Z_Construct_UClass_UAzureKinectManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAzureKinectManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AzureKinectUnreal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAzureKinectManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzureKinectManager_GetBodies, "GetBodies" }, // 3094022962
		{ &Z_Construct_UFunction_UAzureKinectManager_GetJointCount, "GetJointCount" }, // 787835674
		{ &Z_Construct_UFunction_UAzureKinectManager_InitDevice, "InitDevice" }, // 364586605
		{ &Z_Construct_UFunction_UAzureKinectManager_IsDeviceInitialized, "IsDeviceInitialized" }, // 2470178707
		{ &Z_Construct_UFunction_UAzureKinectManager_ShutdownDevice, "ShutdownDevice" }, // 2532935482
		{ &Z_Construct_UFunction_UAzureKinectManager_ToggleDeviceLogging, "ToggleDeviceLogging" }, // 3851775787
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzureKinectManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Azure Kinect" },
		{ "Comment", "/**\n * A singleton class used in Blueprints to control and get info from the connected \n * azure kinect device(s).\n */" },
		{ "IncludePath", "AzureKinectManager.h" },
		{ "ModuleRelativePath", "Public/AzureKinectManager.h" },
		{ "ToolTip", "A singleton class used in Blueprints to control and get info from the connected\nazure kinect device(s)." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAzureKinectManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzureKinectManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAzureKinectManager_Statics::ClassParams = {
		&UAzureKinectManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAzureKinectManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAzureKinectManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAzureKinectManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAzureKinectManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAzureKinectManager, 2594976115);
	template<> AZUREKINECTUNREAL_API UClass* StaticClass<UAzureKinectManager>()
	{
		return UAzureKinectManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAzureKinectManager(Z_Construct_UClass_UAzureKinectManager, &UAzureKinectManager::StaticClass, TEXT("/Script/AzureKinectUnreal"), TEXT("UAzureKinectManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAzureKinectManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
