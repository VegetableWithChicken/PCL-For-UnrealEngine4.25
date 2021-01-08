// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AzureKinectUnreal/Public/AzureKinectBody.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAzureKinectBody() {}
// Cross Module References
	AZUREKINECTUNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FAzureKinectJoint();
	UPackage* Z_Construct_UPackage__Script_AzureKinectUnreal();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AZUREKINECTUNREAL_API UClass* Z_Construct_UClass_UAzureKinectBody_NoRegister();
	AZUREKINECTUNREAL_API UClass* Z_Construct_UClass_UAzureKinectBody();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FAzureKinectJoint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AZUREKINECTUNREAL_API uint32 Get_Z_Construct_UScriptStruct_FAzureKinectJoint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAzureKinectJoint, Z_Construct_UPackage__Script_AzureKinectUnreal(), TEXT("AzureKinectJoint"), sizeof(FAzureKinectJoint), Get_Z_Construct_UScriptStruct_FAzureKinectJoint_Hash());
	}
	return Singleton;
}
template<> AZUREKINECTUNREAL_API UScriptStruct* StaticStruct<FAzureKinectJoint>()
{
	return FAzureKinectJoint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAzureKinectJoint(FAzureKinectJoint::StaticStruct, TEXT("/Script/AzureKinectUnreal"), TEXT("AzureKinectJoint"), false, nullptr, nullptr);
static struct FScriptStruct_AzureKinectUnreal_StaticRegisterNativesFAzureKinectJoint
{
	FScriptStruct_AzureKinectUnreal_StaticRegisterNativesFAzureKinectJoint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AzureKinectJoint")),new UScriptStruct::TCppStructOps<FAzureKinectJoint>);
	}
} ScriptStruct_AzureKinectUnreal_StaticRegisterNativesFAzureKinectJoint;
	struct Z_Construct_UScriptStruct_FAzureKinectJoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PositionMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureKinectJoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Azure Kinect|Body|Joints" },
		{ "Comment", "/**\n * A representation of the Native Azure Kinect Body Skeleton joint.\n * This stores the kinect skeleton joint position and orientation \n * data by converting them from Kinect camera co-ordinate system to\n * Unreal co-ordinate system and maps them to the Unreal mannequin.\n */" },
		{ "ModuleRelativePath", "Public/AzureKinectBody.h" },
		{ "ToolTip", "A representation of the Native Azure Kinect Body Skeleton joint.\nThis stores the kinect skeleton joint position and orientation\ndata by converting them from Kinect camera co-ordinate system to\nUnreal co-ordinate system and maps them to the Unreal mannequin." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAzureKinectJoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAzureKinectJoint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureKinectJoint_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "Azure Kinect|Body|Joints" },
		{ "Comment", "/** The index of the joint that corresponds to the integral value of the joint enum. */" },
		{ "ModuleRelativePath", "Public/AzureKinectBody.h" },
		{ "ToolTip", "The index of the joint that corresponds to the integral value of the joint enum." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAzureKinectJoint_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAzureKinectJoint, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureKinectJoint_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureKinectJoint_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureKinectJoint_Statics::NewProp_PositionMultiplier_MetaData[] = {
		{ "Category", "Azure Kinect|Body|Joints" },
		{ "ModuleRelativePath", "Public/AzureKinectBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAzureKinectJoint_Statics::NewProp_PositionMultiplier = { "PositionMultiplier", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAzureKinectJoint, PositionMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureKinectJoint_Statics::NewProp_PositionMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureKinectJoint_Statics::NewProp_PositionMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureKinectJoint_Statics::NewProp_Orientation_MetaData[] = {
		{ "Category", "Azure Kinect|Body|Joints" },
		{ "Comment", "/** The rotation of the joint to be mapped to Unreal mannequin. */" },
		{ "ModuleRelativePath", "Public/AzureKinectBody.h" },
		{ "ToolTip", "The rotation of the joint to be mapped to Unreal mannequin." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAzureKinectJoint_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAzureKinectJoint, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureKinectJoint_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureKinectJoint_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureKinectJoint_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Azure Kinect|Body|Joints" },
		{ "Comment", "/** The position of the joint to be mapped to Unreal mannequin. */" },
		{ "ModuleRelativePath", "Public/AzureKinectBody.h" },
		{ "ToolTip", "The position of the joint to be mapped to Unreal mannequin." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAzureKinectJoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAzureKinectJoint, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureKinectJoint_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureKinectJoint_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAzureKinectJoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureKinectJoint_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureKinectJoint_Statics::NewProp_PositionMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureKinectJoint_Statics::NewProp_Orientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureKinectJoint_Statics::NewProp_Position,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAzureKinectJoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AzureKinectUnreal,
		nullptr,
		&NewStructOps,
		"AzureKinectJoint",
		sizeof(FAzureKinectJoint),
		alignof(FAzureKinectJoint),
		Z_Construct_UScriptStruct_FAzureKinectJoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureKinectJoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureKinectJoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureKinectJoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAzureKinectJoint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAzureKinectJoint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AzureKinectUnreal();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AzureKinectJoint"), sizeof(FAzureKinectJoint), Get_Z_Construct_UScriptStruct_FAzureKinectJoint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAzureKinectJoint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAzureKinectJoint_Hash() { return 1211054057U; }
	DEFINE_FUNCTION(UAzureKinectBody::execGetJoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAzureKinectJoint*)Z_Param__Result=P_THIS->GetJoint(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzureKinectBody::execGetJoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FAzureKinectJoint>*)Z_Param__Result=P_THIS->GetJoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzureKinectBody::execGetId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetId();
		P_NATIVE_END;
	}
	void UAzureKinectBody::StaticRegisterNativesUAzureKinectBody()
	{
		UClass* Class = UAzureKinectBody::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetId", &UAzureKinectBody::execGetId },
			{ "GetJoint", &UAzureKinectBody::execGetJoint },
			{ "GetJoints", &UAzureKinectBody::execGetJoints },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAzureKinectBody_GetId_Statics
	{
		struct AzureKinectBody_eventGetId_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAzureKinectBody_GetId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AzureKinectBody_eventGetId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureKinectBody_GetId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureKinectBody_GetId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureKinectBody_GetId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Azure Kinect|Body" },
		{ "Comment", "/** Returns the Id of the Body. */" },
		{ "ModuleRelativePath", "Public/AzureKinectBody.h" },
		{ "ToolTip", "Returns the Id of the Body." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureKinectBody_GetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureKinectBody, nullptr, "GetId", nullptr, nullptr, sizeof(AzureKinectBody_eventGetId_Parms), Z_Construct_UFunction_UAzureKinectBody_GetId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureKinectBody_GetId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzureKinectBody_GetId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureKinectBody_GetId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzureKinectBody_GetId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAzureKinectBody_GetId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzureKinectBody_GetJoint_Statics
	{
		struct AzureKinectBody_eventGetJoint_Parms
		{
			int32 index;
			FAzureKinectJoint ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAzureKinectBody_GetJoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AzureKinectBody_eventGetJoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FAzureKinectJoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAzureKinectBody_GetJoint_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AzureKinectBody_eventGetJoint_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureKinectBody_GetJoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureKinectBody_GetJoint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureKinectBody_GetJoint_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureKinectBody_GetJoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Azure Kinect|Body|Joints" },
		{ "Comment", "/** Returns a joint with the specified index. */" },
		{ "ModuleRelativePath", "Public/AzureKinectBody.h" },
		{ "ToolTip", "Returns a joint with the specified index." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureKinectBody_GetJoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureKinectBody, nullptr, "GetJoint", nullptr, nullptr, sizeof(AzureKinectBody_eventGetJoint_Parms), Z_Construct_UFunction_UAzureKinectBody_GetJoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureKinectBody_GetJoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzureKinectBody_GetJoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureKinectBody_GetJoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzureKinectBody_GetJoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAzureKinectBody_GetJoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzureKinectBody_GetJoints_Statics
	{
		struct AzureKinectBody_eventGetJoints_Parms
		{
			TArray<FAzureKinectJoint> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAzureKinectBody_GetJoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AzureKinectBody_eventGetJoints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAzureKinectBody_GetJoints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAzureKinectJoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureKinectBody_GetJoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureKinectBody_GetJoints_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureKinectBody_GetJoints_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureKinectBody_GetJoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Azure Kinect|Body|Joints" },
		{ "Comment", "/** Returns an array of Joints. */" },
		{ "ModuleRelativePath", "Public/AzureKinectBody.h" },
		{ "ToolTip", "Returns an array of Joints." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureKinectBody_GetJoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureKinectBody, nullptr, "GetJoints", nullptr, nullptr, sizeof(AzureKinectBody_eventGetJoints_Parms), Z_Construct_UFunction_UAzureKinectBody_GetJoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureKinectBody_GetJoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzureKinectBody_GetJoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureKinectBody_GetJoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzureKinectBody_GetJoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAzureKinectBody_GetJoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAzureKinectBody_NoRegister()
	{
		return UAzureKinectBody::StaticClass();
	}
	struct Z_Construct_UClass_UAzureKinectBody_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Joints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Joints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Joints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTracked_MetaData[];
#endif
		static void NewProp_bIsTracked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTracked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMirrored_MetaData[];
#endif
		static void NewProp_bIsMirrored_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMirrored;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAzureKinectBody_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AzureKinectUnreal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAzureKinectBody_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzureKinectBody_GetId, "GetId" }, // 3952962396
		{ &Z_Construct_UFunction_UAzureKinectBody_GetJoint, "GetJoint" }, // 3057326528
		{ &Z_Construct_UFunction_UAzureKinectBody_GetJoints, "GetJoints" }, // 3250773608
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzureKinectBody_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Azure Kinect|Body" },
		{ "Comment", "/**\n * A representation of the Native Azure Kinect Body that contains Joints.\n */" },
		{ "IncludePath", "AzureKinectBody.h" },
		{ "ModuleRelativePath", "Public/AzureKinectBody.h" },
		{ "ToolTip", "A representation of the Native Azure Kinect Body that contains Joints." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzureKinectBody_Statics::NewProp_Joints_MetaData[] = {
		{ "Comment", "/** Array of joints contained in this body. */" },
		{ "ModuleRelativePath", "Public/AzureKinectBody.h" },
		{ "ToolTip", "Array of joints contained in this body." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAzureKinectBody_Statics::NewProp_Joints = { "Joints", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAzureKinectBody, Joints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAzureKinectBody_Statics::NewProp_Joints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAzureKinectBody_Statics::NewProp_Joints_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAzureKinectBody_Statics::NewProp_Joints_Inner = { "Joints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAzureKinectJoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzureKinectBody_Statics::NewProp_bIsTracked_MetaData[] = {
		{ "Category", "Azure Kinect|Body" },
		{ "Comment", "/** Whether this body is tracked or not. */" },
		{ "ModuleRelativePath", "Public/AzureKinectBody.h" },
		{ "ToolTip", "Whether this body is tracked or not." },
	};
#endif
	void Z_Construct_UClass_UAzureKinectBody_Statics::NewProp_bIsTracked_SetBit(void* Obj)
	{
		((UAzureKinectBody*)Obj)->bIsTracked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAzureKinectBody_Statics::NewProp_bIsTracked = { "bIsTracked", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAzureKinectBody), &Z_Construct_UClass_UAzureKinectBody_Statics::NewProp_bIsTracked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAzureKinectBody_Statics::NewProp_bIsTracked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAzureKinectBody_Statics::NewProp_bIsTracked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzureKinectBody_Statics::NewProp_bIsMirrored_MetaData[] = {
		{ "Category", "Azure Kinect|Body" },
		{ "Comment", "/** Whether to mirror the joints. */" },
		{ "ModuleRelativePath", "Public/AzureKinectBody.h" },
		{ "ToolTip", "Whether to mirror the joints." },
	};
#endif
	void Z_Construct_UClass_UAzureKinectBody_Statics::NewProp_bIsMirrored_SetBit(void* Obj)
	{
		((UAzureKinectBody*)Obj)->bIsMirrored = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAzureKinectBody_Statics::NewProp_bIsMirrored = { "bIsMirrored", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAzureKinectBody), &Z_Construct_UClass_UAzureKinectBody_Statics::NewProp_bIsMirrored_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAzureKinectBody_Statics::NewProp_bIsMirrored_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAzureKinectBody_Statics::NewProp_bIsMirrored_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAzureKinectBody_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzureKinectBody_Statics::NewProp_Joints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzureKinectBody_Statics::NewProp_Joints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzureKinectBody_Statics::NewProp_bIsTracked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzureKinectBody_Statics::NewProp_bIsMirrored,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAzureKinectBody_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzureKinectBody>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAzureKinectBody_Statics::ClassParams = {
		&UAzureKinectBody::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAzureKinectBody_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAzureKinectBody_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAzureKinectBody_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAzureKinectBody_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAzureKinectBody()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAzureKinectBody_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAzureKinectBody, 2910868214);
	template<> AZUREKINECTUNREAL_API UClass* StaticClass<UAzureKinectBody>()
	{
		return UAzureKinectBody::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAzureKinectBody(Z_Construct_UClass_UAzureKinectBody, &UAzureKinectBody::StaticClass, TEXT("/Script/AzureKinectUnreal"), TEXT("UAzureKinectBody"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAzureKinectBody);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
