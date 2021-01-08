// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AzureKinectUnreal/Public/ShowImageActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShowImageActor() {}
// Cross Module References
	AZUREKINECTUNREAL_API UClass* Z_Construct_UClass_AShowImageActor_NoRegister();
	AZUREKINECTUNREAL_API UClass* Z_Construct_UClass_AShowImageActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AzureKinectUnreal();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	static FName NAME_AShowImageActor_GetColor_Image = FName(TEXT("GetColor_Image"));
	void AShowImageActor::GetColor_Image(UTexture2D* outImage)
	{
		ShowImageActor_eventGetColor_Image_Parms Parms;
		Parms.outImage=outImage;
		ProcessEvent(FindFunctionChecked(NAME_AShowImageActor_GetColor_Image),&Parms);
	}
	static FName NAME_AShowImageActor_GetDepth_Image = FName(TEXT("GetDepth_Image"));
	void AShowImageActor::GetDepth_Image(UTexture2D* outImage)
	{
		ShowImageActor_eventGetDepth_Image_Parms Parms;
		Parms.outImage=outImage;
		ProcessEvent(FindFunctionChecked(NAME_AShowImageActor_GetDepth_Image),&Parms);
	}
	void AShowImageActor::StaticRegisterNativesAShowImageActor()
	{
	}
	struct Z_Construct_UFunction_AShowImageActor_GetColor_Image_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_outImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShowImageActor_GetColor_Image_Statics::NewProp_outImage = { "outImage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShowImageActor_eventGetColor_Image_Parms, outImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShowImageActor_GetColor_Image_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShowImageActor_GetColor_Image_Statics::NewProp_outImage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShowImageActor_GetColor_Image_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShowImageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShowImageActor_GetColor_Image_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShowImageActor, nullptr, "GetColor_Image", nullptr, nullptr, sizeof(ShowImageActor_eventGetColor_Image_Parms), Z_Construct_UFunction_AShowImageActor_GetColor_Image_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShowImageActor_GetColor_Image_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShowImageActor_GetColor_Image_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShowImageActor_GetColor_Image_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShowImageActor_GetColor_Image()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShowImageActor_GetColor_Image_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShowImageActor_GetDepth_Image_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_outImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShowImageActor_GetDepth_Image_Statics::NewProp_outImage = { "outImage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShowImageActor_eventGetDepth_Image_Parms, outImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShowImageActor_GetDepth_Image_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShowImageActor_GetDepth_Image_Statics::NewProp_outImage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShowImageActor_GetDepth_Image_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShowImageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShowImageActor_GetDepth_Image_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShowImageActor, nullptr, "GetDepth_Image", nullptr, nullptr, sizeof(ShowImageActor_eventGetDepth_Image_Parms), Z_Construct_UFunction_AShowImageActor_GetDepth_Image_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShowImageActor_GetDepth_Image_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShowImageActor_GetDepth_Image_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShowImageActor_GetDepth_Image_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShowImageActor_GetDepth_Image()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShowImageActor_GetDepth_Image_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AShowImageActor_NoRegister()
	{
		return AShowImageActor::StaticClass();
	}
	struct Z_Construct_UClass_AShowImageActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShowImageActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AzureKinectUnreal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AShowImageActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShowImageActor_GetColor_Image, "GetColor_Image" }, // 1929134077
		{ &Z_Construct_UFunction_AShowImageActor_GetDepth_Image, "GetDepth_Image" }, // 2711108898
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShowImageActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ShowImageActor.h" },
		{ "ModuleRelativePath", "Public/ShowImageActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShowImageActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShowImageActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShowImageActor_Statics::ClassParams = {
		&AShowImageActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShowImageActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShowImageActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShowImageActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShowImageActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShowImageActor, 1121362329);
	template<> AZUREKINECTUNREAL_API UClass* StaticClass<AShowImageActor>()
	{
		return AShowImageActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShowImageActor(Z_Construct_UClass_AShowImageActor, &AShowImageActor::StaticClass, TEXT("/Script/AzureKinectUnreal"), TEXT("AShowImageActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShowImageActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
