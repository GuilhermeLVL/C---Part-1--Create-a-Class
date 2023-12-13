// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyTestProject01/MyTestProject01PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTestProject01PlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	MYTESTPROJECT01_API UClass* Z_Construct_UClass_AMyTestProject01PlayerController();
	MYTESTPROJECT01_API UClass* Z_Construct_UClass_AMyTestProject01PlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyTestProject01();
// End Cross Module References
	void AMyTestProject01PlayerController::StaticRegisterNativesAMyTestProject01PlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyTestProject01PlayerController);
	UClass* Z_Construct_UClass_AMyTestProject01PlayerController_NoRegister()
	{
		return AMyTestProject01PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMyTestProject01PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyTestProject01PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_MyTestProject01,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestProject01PlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTestProject01PlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MyTestProject01PlayerController.h" },
		{ "ModuleRelativePath", "MyTestProject01PlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTestProject01PlayerController_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "MyTestProject01PlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyTestProject01PlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyTestProject01PlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestProject01PlayerController_Statics::NewProp_InputMappingContext_MetaData), Z_Construct_UClass_AMyTestProject01PlayerController_Statics::NewProp_InputMappingContext_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyTestProject01PlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyTestProject01PlayerController_Statics::NewProp_InputMappingContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyTestProject01PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyTestProject01PlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyTestProject01PlayerController_Statics::ClassParams = {
		&AMyTestProject01PlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyTestProject01PlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestProject01PlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestProject01PlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyTestProject01PlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestProject01PlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMyTestProject01PlayerController()
	{
		if (!Z_Registration_Info_UClass_AMyTestProject01PlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyTestProject01PlayerController.OuterSingleton, Z_Construct_UClass_AMyTestProject01PlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyTestProject01PlayerController.OuterSingleton;
	}
	template<> MYTESTPROJECT01_API UClass* StaticClass<AMyTestProject01PlayerController>()
	{
		return AMyTestProject01PlayerController::StaticClass();
	}
	AMyTestProject01PlayerController::AMyTestProject01PlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyTestProject01PlayerController);
	AMyTestProject01PlayerController::~AMyTestProject01PlayerController() {}
	struct Z_CompiledInDeferFile_FID_MyTestProject01_Source_MyTestProject01_MyTestProject01PlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyTestProject01_Source_MyTestProject01_MyTestProject01PlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyTestProject01PlayerController, AMyTestProject01PlayerController::StaticClass, TEXT("AMyTestProject01PlayerController"), &Z_Registration_Info_UClass_AMyTestProject01PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyTestProject01PlayerController), 4194157138U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyTestProject01_Source_MyTestProject01_MyTestProject01PlayerController_h_2565295932(TEXT("/Script/MyTestProject01"),
		Z_CompiledInDeferFile_FID_MyTestProject01_Source_MyTestProject01_MyTestProject01PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyTestProject01_Source_MyTestProject01_MyTestProject01PlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
