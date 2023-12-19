// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VideoProject/CuboGiratorio.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCuboGiratorio() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_VideoProject();
	VIDEOPROJECT_API UClass* Z_Construct_UClass_ACuboGiratorio();
	VIDEOPROJECT_API UClass* Z_Construct_UClass_ACuboGiratorio_NoRegister();
// End Cross Module References
	void ACuboGiratorio::StaticRegisterNativesACuboGiratorio()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACuboGiratorio);
	UClass* Z_Construct_UClass_ACuboGiratorio_NoRegister()
	{
		return ACuboGiratorio::StaticClass();
	}
	struct Z_Construct_UClass_ACuboGiratorio_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACuboGiratorio_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VideoProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACuboGiratorio_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACuboGiratorio_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CuboGiratorio.h" },
		{ "ModuleRelativePath", "CuboGiratorio.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACuboGiratorio_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACuboGiratorio>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACuboGiratorio_Statics::ClassParams = {
		&ACuboGiratorio::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACuboGiratorio_Statics::Class_MetaDataParams), Z_Construct_UClass_ACuboGiratorio_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACuboGiratorio()
	{
		if (!Z_Registration_Info_UClass_ACuboGiratorio.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACuboGiratorio.OuterSingleton, Z_Construct_UClass_ACuboGiratorio_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACuboGiratorio.OuterSingleton;
	}
	template<> VIDEOPROJECT_API UClass* StaticClass<ACuboGiratorio>()
	{
		return ACuboGiratorio::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACuboGiratorio);
	ACuboGiratorio::~ACuboGiratorio() {}
	struct Z_CompiledInDeferFile_FID_VideoProject_Source_VideoProject_CuboGiratorio_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VideoProject_Source_VideoProject_CuboGiratorio_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACuboGiratorio, ACuboGiratorio::StaticClass, TEXT("ACuboGiratorio"), &Z_Registration_Info_UClass_ACuboGiratorio, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACuboGiratorio), 2936731123U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VideoProject_Source_VideoProject_CuboGiratorio_h_1033759531(TEXT("/Script/VideoProject"),
		Z_CompiledInDeferFile_FID_VideoProject_Source_VideoProject_CuboGiratorio_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VideoProject_Source_VideoProject_CuboGiratorio_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
