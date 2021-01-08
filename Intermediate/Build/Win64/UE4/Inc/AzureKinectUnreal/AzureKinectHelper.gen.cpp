// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AzureKinectUnreal/Public/AzureKinectHelper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAzureKinectHelper() {}
// Cross Module References
	AZUREKINECTUNREAL_API UEnum* Z_Construct_UEnum_AzureKinectUnreal_EKinectBodyJointId();
	UPackage* Z_Construct_UPackage__Script_AzureKinectUnreal();
	AZUREKINECTUNREAL_API UEnum* Z_Construct_UEnum_AzureKinectUnreal_EKinectDepthMode();
// End Cross Module References
	static UEnum* EKinectBodyJointId_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AzureKinectUnreal_EKinectBodyJointId, Z_Construct_UPackage__Script_AzureKinectUnreal(), TEXT("EKinectBodyJointId"));
		}
		return Singleton;
	}
	template<> AZUREKINECTUNREAL_API UEnum* StaticEnum<EKinectBodyJointId>()
	{
		return EKinectBodyJointId_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EKinectBodyJointId(EKinectBodyJointId_StaticEnum, TEXT("/Script/AzureKinectUnreal"), TEXT("EKinectBodyJointId"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AzureKinectUnreal_EKinectBodyJointId_Hash() { return 3137884849U; }
	UEnum* Z_Construct_UEnum_AzureKinectUnreal_EKinectBodyJointId()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AzureKinectUnreal();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EKinectBodyJointId"), 0, Get_Z_Construct_UEnum_AzureKinectUnreal_EKinectBodyJointId_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EKinectBodyJointId::PELVIS", (int64)EKinectBodyJointId::PELVIS },
				{ "EKinectBodyJointId::SPINE_NAVEL", (int64)EKinectBodyJointId::SPINE_NAVEL },
				{ "EKinectBodyJointId::SPINE_CHEST", (int64)EKinectBodyJointId::SPINE_CHEST },
				{ "EKinectBodyJointId::NECK", (int64)EKinectBodyJointId::NECK },
				{ "EKinectBodyJointId::CLAVICLE_LEFT", (int64)EKinectBodyJointId::CLAVICLE_LEFT },
				{ "EKinectBodyJointId::SHOULDER_LEFT", (int64)EKinectBodyJointId::SHOULDER_LEFT },
				{ "EKinectBodyJointId::ELBOW_LEFT", (int64)EKinectBodyJointId::ELBOW_LEFT },
				{ "EKinectBodyJointId::WRIST_LEFT", (int64)EKinectBodyJointId::WRIST_LEFT },
				{ "EKinectBodyJointId::HAND_LEFT", (int64)EKinectBodyJointId::HAND_LEFT },
				{ "EKinectBodyJointId::HANDTIP_LEFT", (int64)EKinectBodyJointId::HANDTIP_LEFT },
				{ "EKinectBodyJointId::THUMB_LEFT", (int64)EKinectBodyJointId::THUMB_LEFT },
				{ "EKinectBodyJointId::CLAVICLE_RIGHT", (int64)EKinectBodyJointId::CLAVICLE_RIGHT },
				{ "EKinectBodyJointId::SHOULDER_RIGHT", (int64)EKinectBodyJointId::SHOULDER_RIGHT },
				{ "EKinectBodyJointId::ELBOW_RIGHT", (int64)EKinectBodyJointId::ELBOW_RIGHT },
				{ "EKinectBodyJointId::WRIST_RIGHT", (int64)EKinectBodyJointId::WRIST_RIGHT },
				{ "EKinectBodyJointId::HAND_RIGHT", (int64)EKinectBodyJointId::HAND_RIGHT },
				{ "EKinectBodyJointId::HANDTIP_RIGHT", (int64)EKinectBodyJointId::HANDTIP_RIGHT },
				{ "EKinectBodyJointId::THUMB_RIGHT", (int64)EKinectBodyJointId::THUMB_RIGHT },
				{ "EKinectBodyJointId::HIP_LEFT", (int64)EKinectBodyJointId::HIP_LEFT },
				{ "EKinectBodyJointId::KNEE_LEFT", (int64)EKinectBodyJointId::KNEE_LEFT },
				{ "EKinectBodyJointId::ANKLE_LEFT", (int64)EKinectBodyJointId::ANKLE_LEFT },
				{ "EKinectBodyJointId::FOOT_LEFT", (int64)EKinectBodyJointId::FOOT_LEFT },
				{ "EKinectBodyJointId::HIP_RIGHT", (int64)EKinectBodyJointId::HIP_RIGHT },
				{ "EKinectBodyJointId::KNEE_RIGHT", (int64)EKinectBodyJointId::KNEE_RIGHT },
				{ "EKinectBodyJointId::ANKLE_RIGHT", (int64)EKinectBodyJointId::ANKLE_RIGHT },
				{ "EKinectBodyJointId::FOOT_RIGHT", (int64)EKinectBodyJointId::FOOT_RIGHT },
				{ "EKinectBodyJointId::HEAD", (int64)EKinectBodyJointId::HEAD },
				{ "EKinectBodyJointId::NOSE", (int64)EKinectBodyJointId::NOSE },
				{ "EKinectBodyJointId::EYE_LEFT", (int64)EKinectBodyJointId::EYE_LEFT },
				{ "EKinectBodyJointId::EAR_LEFT", (int64)EKinectBodyJointId::EAR_LEFT },
				{ "EKinectBodyJointId::EYE_RIGHT", (int64)EKinectBodyJointId::EYE_RIGHT },
				{ "EKinectBodyJointId::EAR_RIGHT", (int64)EKinectBodyJointId::EAR_RIGHT },
				{ "EKinectBodyJointId::COUNT", (int64)EKinectBodyJointId::COUNT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ANKLE_LEFT.DisplayName", "Ankle Left" },
				{ "ANKLE_LEFT.Name", "EKinectBodyJointId::ANKLE_LEFT" },
				{ "ANKLE_RIGHT.DisplayName", "Ankle Right" },
				{ "ANKLE_RIGHT.Name", "EKinectBodyJointId::ANKLE_RIGHT" },
				{ "BlueprintType", "true" },
				{ "Category", "Azure Kinect|Enums" },
				{ "CLAVICLE_LEFT.DisplayName", "Clavicle Left" },
				{ "CLAVICLE_LEFT.Name", "EKinectBodyJointId::CLAVICLE_LEFT" },
				{ "CLAVICLE_RIGHT.DisplayName", "Clavicle Right" },
				{ "CLAVICLE_RIGHT.Name", "EKinectBodyJointId::CLAVICLE_RIGHT" },
				{ "Comment", "/**\n * Blueprintable enum defined based on k4abt_joint_id_t from k4abttypes.h\n *\n * @note This should always have the same enum values as k4abt_joint_id_t\n */" },
				{ "COUNT.DisplayName", "COUNT" },
				{ "COUNT.Hidden", "" },
				{ "COUNT.Name", "EKinectBodyJointId::COUNT" },
				{ "EAR_LEFT.DisplayName", "Ear Left" },
				{ "EAR_LEFT.Name", "EKinectBodyJointId::EAR_LEFT" },
				{ "EAR_RIGHT.DisplayName", "Ear Right" },
				{ "EAR_RIGHT.Name", "EKinectBodyJointId::EAR_RIGHT" },
				{ "ELBOW_LEFT.DisplayName", "Elbow Left" },
				{ "ELBOW_LEFT.Name", "EKinectBodyJointId::ELBOW_LEFT" },
				{ "ELBOW_RIGHT.DisplayName", "Elbow Right" },
				{ "ELBOW_RIGHT.Name", "EKinectBodyJointId::ELBOW_RIGHT" },
				{ "EYE_LEFT.DisplayName", "Eye Left" },
				{ "EYE_LEFT.Name", "EKinectBodyJointId::EYE_LEFT" },
				{ "EYE_RIGHT.DisplayName", "Eye Right" },
				{ "EYE_RIGHT.Name", "EKinectBodyJointId::EYE_RIGHT" },
				{ "FOOT_LEFT.DisplayName", "Foot Left" },
				{ "FOOT_LEFT.Name", "EKinectBodyJointId::FOOT_LEFT" },
				{ "FOOT_RIGHT.DisplayName", "Foot Right" },
				{ "FOOT_RIGHT.Name", "EKinectBodyJointId::FOOT_RIGHT" },
				{ "HAND_LEFT.DisplayName", "Hand Left" },
				{ "HAND_LEFT.Name", "EKinectBodyJointId::HAND_LEFT" },
				{ "HAND_RIGHT.DisplayName", "Hand Right" },
				{ "HAND_RIGHT.Name", "EKinectBodyJointId::HAND_RIGHT" },
				{ "HANDTIP_LEFT.DisplayName", "Hand Tip Left" },
				{ "HANDTIP_LEFT.Name", "EKinectBodyJointId::HANDTIP_LEFT" },
				{ "HANDTIP_RIGHT.DisplayName", "Hand Tip Right" },
				{ "HANDTIP_RIGHT.Name", "EKinectBodyJointId::HANDTIP_RIGHT" },
				{ "HEAD.DisplayName", "Head" },
				{ "HEAD.Name", "EKinectBodyJointId::HEAD" },
				{ "HIP_LEFT.DisplayName", "Hip Left" },
				{ "HIP_LEFT.Name", "EKinectBodyJointId::HIP_LEFT" },
				{ "HIP_RIGHT.DisplayName", "Hip Right" },
				{ "HIP_RIGHT.Name", "EKinectBodyJointId::HIP_RIGHT" },
				{ "KNEE_LEFT.DisplayName", "Knee Left" },
				{ "KNEE_LEFT.Name", "EKinectBodyJointId::KNEE_LEFT" },
				{ "KNEE_RIGHT.DisplayName", "Knee Right" },
				{ "KNEE_RIGHT.Name", "EKinectBodyJointId::KNEE_RIGHT" },
				{ "ModuleRelativePath", "Public/AzureKinectHelper.h" },
				{ "NECK.DisplayName", "Neck" },
				{ "NECK.Name", "EKinectBodyJointId::NECK" },
				{ "NOSE.DisplayName", "Nose" },
				{ "NOSE.Name", "EKinectBodyJointId::NOSE" },
				{ "PELVIS.DisplayName", "Pelvis" },
				{ "PELVIS.Name", "EKinectBodyJointId::PELVIS" },
				{ "SHOULDER_LEFT.DisplayName", "Shoulder Left" },
				{ "SHOULDER_LEFT.Name", "EKinectBodyJointId::SHOULDER_LEFT" },
				{ "SHOULDER_RIGHT.DisplayName", "Shoulder Right" },
				{ "SHOULDER_RIGHT.Name", "EKinectBodyJointId::SHOULDER_RIGHT" },
				{ "SPINE_CHEST.DisplayName", "Spine Chest" },
				{ "SPINE_CHEST.Name", "EKinectBodyJointId::SPINE_CHEST" },
				{ "SPINE_NAVEL.DisplayName", "Spine Navel" },
				{ "SPINE_NAVEL.Name", "EKinectBodyJointId::SPINE_NAVEL" },
				{ "THUMB_LEFT.DisplayName", "Thumb Left" },
				{ "THUMB_LEFT.Name", "EKinectBodyJointId::THUMB_LEFT" },
				{ "THUMB_RIGHT.DisplayName", "Thumb Right" },
				{ "THUMB_RIGHT.Name", "EKinectBodyJointId::THUMB_RIGHT" },
				{ "ToolTip", "Blueprintable enum defined based on k4abt_joint_id_t from k4abttypes.h\n\n@note This should always have the same enum values as k4abt_joint_id_t" },
				{ "WRIST_LEFT.DisplayName", "Wrist Left" },
				{ "WRIST_LEFT.Name", "EKinectBodyJointId::WRIST_LEFT" },
				{ "WRIST_RIGHT.DisplayName", "Wrist Right" },
				{ "WRIST_RIGHT.Name", "EKinectBodyJointId::WRIST_RIGHT" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AzureKinectUnreal,
				nullptr,
				"EKinectBodyJointId",
				"EKinectBodyJointId",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EKinectDepthMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AzureKinectUnreal_EKinectDepthMode, Z_Construct_UPackage__Script_AzureKinectUnreal(), TEXT("EKinectDepthMode"));
		}
		return Singleton;
	}
	template<> AZUREKINECTUNREAL_API UEnum* StaticEnum<EKinectDepthMode>()
	{
		return EKinectDepthMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EKinectDepthMode(EKinectDepthMode_StaticEnum, TEXT("/Script/AzureKinectUnreal"), TEXT("EKinectDepthMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AzureKinectUnreal_EKinectDepthMode_Hash() { return 1816111052U; }
	UEnum* Z_Construct_UEnum_AzureKinectUnreal_EKinectDepthMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AzureKinectUnreal();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EKinectDepthMode"), 0, Get_Z_Construct_UEnum_AzureKinectUnreal_EKinectDepthMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EKinectDepthMode::OFF", (int64)EKinectDepthMode::OFF },
				{ "EKinectDepthMode::NFOV_2X2BINNED", (int64)EKinectDepthMode::NFOV_2X2BINNED },
				{ "EKinectDepthMode::NFOV_UNBINNED", (int64)EKinectDepthMode::NFOV_UNBINNED },
				{ "EKinectDepthMode::WFOV_2X2BINNED", (int64)EKinectDepthMode::WFOV_2X2BINNED },
				{ "EKinectDepthMode::WFOV_UNBINNED", (int64)EKinectDepthMode::WFOV_UNBINNED },
				{ "EKinectDepthMode::PASSIVE_IR", (int64)EKinectDepthMode::PASSIVE_IR },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "Azure Kinect|Enums" },
				{ "Comment", "/**\n * Blueprintable enum defined based on k4a_depth_mode_t from k4atypes.h\n *\n * @note This should always have the same enum values as k4a_depth_mode_t\n */" },
				{ "ModuleRelativePath", "Public/AzureKinectHelper.h" },
				{ "NFOV_2X2BINNED.Comment", "/**< Depth sensor will be turned off with this setting. */" },
				{ "NFOV_2X2BINNED.DisplayName", "NFOV 2x2 Binned (320x288)" },
				{ "NFOV_2X2BINNED.Name", "EKinectDepthMode::NFOV_2X2BINNED" },
				{ "NFOV_2X2BINNED.ToolTip", "< Depth sensor will be turned off with this setting." },
				{ "NFOV_UNBINNED.Comment", "/**< Depth captured at 320x288. Passive IR is also captured at 320x288. */" },
				{ "NFOV_UNBINNED.DisplayName", "NFOV Unbinned (640x576)" },
				{ "NFOV_UNBINNED.Name", "EKinectDepthMode::NFOV_UNBINNED" },
				{ "NFOV_UNBINNED.ToolTip", "< Depth captured at 320x288. Passive IR is also captured at 320x288." },
				{ "OFF.DisplayName", "Depth Mode Off" },
				{ "OFF.Name", "EKinectDepthMode::OFF" },
				{ "PASSIVE_IR.Comment", "/**< Depth captured at 1024x1024. Passive IR is also captured at 1024x1024. */" },
				{ "PASSIVE_IR.DisplayName", "Passive IR (1024x1024)" },
				{ "PASSIVE_IR.Name", "EKinectDepthMode::PASSIVE_IR" },
				{ "PASSIVE_IR.ToolTip", "< Depth captured at 1024x1024. Passive IR is also captured at 1024x1024." },
				{ "ToolTip", "Blueprintable enum defined based on k4a_depth_mode_t from k4atypes.h\n\n@note This should always have the same enum values as k4a_depth_mode_t" },
				{ "WFOV_2X2BINNED.Comment", "/**< Depth captured at 640x576. Passive IR is also captured at 640x576. */" },
				{ "WFOV_2X2BINNED.DisplayName", "WFOV 2x2 Binned (512x512)" },
				{ "WFOV_2X2BINNED.Name", "EKinectDepthMode::WFOV_2X2BINNED" },
				{ "WFOV_2X2BINNED.ToolTip", "< Depth captured at 640x576. Passive IR is also captured at 640x576." },
				{ "WFOV_UNBINNED.Comment", "/**< Depth captured at 512x512. Passive IR is also captured at 512x512. */" },
				{ "WFOV_UNBINNED.DisplayName", "WFOV Unbinned (1024x1024)" },
				{ "WFOV_UNBINNED.Name", "EKinectDepthMode::WFOV_UNBINNED" },
				{ "WFOV_UNBINNED.ToolTip", "< Depth captured at 512x512. Passive IR is also captured at 512x512." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AzureKinectUnreal,
				nullptr,
				"EKinectDepthMode",
				"EKinectDepthMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
