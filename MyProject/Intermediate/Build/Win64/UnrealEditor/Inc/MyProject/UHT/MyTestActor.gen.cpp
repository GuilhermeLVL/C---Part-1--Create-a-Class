// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/MyTestActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTestActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyTestActor();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyTestActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void AMyTestActor::StaticRegisterNativesAMyTestActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyTestActor);
	UClass* Z_Construct_UClass_AMyTestActor_NoRegister()
	{
		return AMyTestActor::StaticClass();
	}
	struct Z_Construct_UClass_AMyTestActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyTestActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTestActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyTestActor.h" },
		{ "ModuleRelativePath", "MyTestActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTestActor_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "TesteValues" },
		{ "ModuleRelativePath", "MyTestActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyTestActor_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyTestActor, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestActor_Statics::NewProp_Value_MetaData), Z_Construct_UClass_AMyTestActor_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyTestActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyTestActor_Statics::NewProp_Value,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyTestActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyTestActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyTestActor_Statics::ClassParams = {
		&AMyTestActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyTestActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyTestActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMyTestActor()
	{
		if (!Z_Registration_Info_UClass_AMyTestActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyTestActor.OuterSingleton, Z_Construct_UClass_AMyTestActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyTestActor.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<AMyTestActor>()
	{
		return AMyTestActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyTestActor);
	AMyTestActor::~AMyTestActor() {}
	struct Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_MyTestActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_MyTestActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyTestActor, AMyTestActor::StaticClass, TEXT("AMyTestActor"), &Z_Registration_Info_UClass_AMyTestActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyTestActor), 1140525153U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_MyTestActor_h_2632486766(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_MyTestActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_MyTestActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
