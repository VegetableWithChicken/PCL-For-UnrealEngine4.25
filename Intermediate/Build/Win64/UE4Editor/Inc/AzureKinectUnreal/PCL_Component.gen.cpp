// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AzureKinectUnreal/Public/PCL_Component.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCL_Component() {}
// Cross Module References
	AZUREKINECTUNREAL_API UClass* Z_Construct_UClass_UPCL_Component_NoRegister();
	AZUREKINECTUNREAL_API UClass* Z_Construct_UClass_UPCL_Component();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AzureKinectUnreal();
// End Cross Module References
	DEFINE_FUNCTION(UPCL_Component::execLoadPCL)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadPCL();
		P_NATIVE_END;
	}
	void UPCL_Component::StaticRegisterNativesUPCL_Component()
	{
		UClass* Class = UPCL_Component::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadPCL", &UPCL_Component::execLoadPCL },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPCL_Component_LoadPCL_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCL_Component_LoadPCL_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PCL_Component.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCL_Component_LoadPCL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCL_Component, nullptr, "LoadPCL", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCL_Component_LoadPCL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCL_Component_LoadPCL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCL_Component_LoadPCL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPCL_Component_LoadPCL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPCL_Component_NoRegister()
	{
		return UPCL_Component::StaticClass();
	}
	struct Z_Construct_UClass_UPCL_Component_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_size;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCL_Component_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AzureKinectUnreal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPCL_Component_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCL_Component_LoadPCL, "LoadPCL" }, // 757481284
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCL_Component_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PCL_Component.h" },
		{ "ModuleRelativePath", "Public/PCL_Component.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCL_Component_Statics::NewProp_scale_MetaData[] = {
		{ "Category", "PCL_Component" },
		{ "ModuleRelativePath", "Public/PCL_Component.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCL_Component_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPCL_Component, scale), METADATA_PARAMS(Z_Construct_UClass_UPCL_Component_Statics::NewProp_scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCL_Component_Statics::NewProp_scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCL_Component_Statics::NewProp_size_MetaData[] = {
		{ "Category", "PCL_Component" },
		{ "ModuleRelativePath", "Public/PCL_Component.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCL_Component_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPCL_Component, size), METADATA_PARAMS(Z_Construct_UClass_UPCL_Component_Statics::NewProp_size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCL_Component_Statics::NewProp_size_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCL_Component_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCL_Component_Statics::NewProp_scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCL_Component_Statics::NewProp_size,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCL_Component_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCL_Component>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPCL_Component_Statics::ClassParams = {
		&UPCL_Component::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPCL_Component_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCL_Component_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPCL_Component_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCL_Component_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCL_Component()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPCL_Component_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPCL_Component, 295033007);
	template<> AZUREKINECTUNREAL_API UClass* StaticClass<UPCL_Component>()
	{
		return UPCL_Component::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPCL_Component(Z_Construct_UClass_UPCL_Component, &UPCL_Component::StaticClass, TEXT("/Script/AzureKinectUnreal"), TEXT("UPCL_Component"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCL_Component);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
