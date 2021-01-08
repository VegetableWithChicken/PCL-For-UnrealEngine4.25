// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AZUREKINECTUNREAL_AzureKinectHelper_generated_h
#error "AzureKinectHelper.generated.h already included, missing '#pragma once' in AzureKinectHelper.h"
#endif
#define AZUREKINECTUNREAL_AzureKinectHelper_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AureKinectAndPCL_Plugins_AzureKinectUnreal_Source_AzureKinectUnreal_Public_AzureKinectHelper_h


#define FOREACH_ENUM_EKINECTBODYJOINTID(op) \
	op(EKinectBodyJointId::PELVIS) \
	op(EKinectBodyJointId::SPINE_NAVEL) \
	op(EKinectBodyJointId::SPINE_CHEST) \
	op(EKinectBodyJointId::NECK) \
	op(EKinectBodyJointId::CLAVICLE_LEFT) \
	op(EKinectBodyJointId::SHOULDER_LEFT) \
	op(EKinectBodyJointId::ELBOW_LEFT) \
	op(EKinectBodyJointId::WRIST_LEFT) \
	op(EKinectBodyJointId::HAND_LEFT) \
	op(EKinectBodyJointId::HANDTIP_LEFT) \
	op(EKinectBodyJointId::THUMB_LEFT) \
	op(EKinectBodyJointId::CLAVICLE_RIGHT) \
	op(EKinectBodyJointId::SHOULDER_RIGHT) \
	op(EKinectBodyJointId::ELBOW_RIGHT) \
	op(EKinectBodyJointId::WRIST_RIGHT) \
	op(EKinectBodyJointId::HAND_RIGHT) \
	op(EKinectBodyJointId::HANDTIP_RIGHT) \
	op(EKinectBodyJointId::THUMB_RIGHT) \
	op(EKinectBodyJointId::HIP_LEFT) \
	op(EKinectBodyJointId::KNEE_LEFT) \
	op(EKinectBodyJointId::ANKLE_LEFT) \
	op(EKinectBodyJointId::FOOT_LEFT) \
	op(EKinectBodyJointId::HIP_RIGHT) \
	op(EKinectBodyJointId::KNEE_RIGHT) \
	op(EKinectBodyJointId::ANKLE_RIGHT) \
	op(EKinectBodyJointId::FOOT_RIGHT) \
	op(EKinectBodyJointId::HEAD) \
	op(EKinectBodyJointId::NOSE) \
	op(EKinectBodyJointId::EYE_LEFT) \
	op(EKinectBodyJointId::EAR_LEFT) \
	op(EKinectBodyJointId::EYE_RIGHT) \
	op(EKinectBodyJointId::EAR_RIGHT) \
	op(EKinectBodyJointId::COUNT) 

enum class EKinectBodyJointId : uint8;
template<> AZUREKINECTUNREAL_API UEnum* StaticEnum<EKinectBodyJointId>();

#define FOREACH_ENUM_EKINECTDEPTHMODE(op) \
	op(EKinectDepthMode::OFF) \
	op(EKinectDepthMode::NFOV_2X2BINNED) \
	op(EKinectDepthMode::NFOV_UNBINNED) \
	op(EKinectDepthMode::WFOV_2X2BINNED) \
	op(EKinectDepthMode::WFOV_UNBINNED) \
	op(EKinectDepthMode::PASSIVE_IR) 

enum class EKinectDepthMode : uint8;
template<> AZUREKINECTUNREAL_API UEnum* StaticEnum<EKinectDepthMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
