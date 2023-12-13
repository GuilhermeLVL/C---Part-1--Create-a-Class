// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyTestProject01/MyTestProject01GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTestProject01GameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	MYTESTPROJECT01_API UClass* Z_Construct_UClass_AMyTestProject01GameMode();
	MYTESTPROJECT01_API UClass* Z_Construct_UClass_AMyTestProject01GameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyTestProject01();
// End Cross Module References
	void AMyTestProject01GameMode::StaticRegisterNativesAMyTestProject01GameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyTestProject01GameMode);
	UClass* Z_Construct_UClass_AMyTestProject01GameMode_NoRegister()
	{
		return AMyTestProject01GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMyTestProject01GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyTestProject01GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyTestProject01,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestProject01GameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTestProject01GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyTestProject01GameMode.h" },
		{ "ModuleRelativePath", "MyTestProject01GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyTestProject01GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyTestProject01GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyTestProject01GameMode_Statics::ClassParams = {
		&AMyTestProject01GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestProject01GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyTestProject01GameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMyTestProject01GameMode()
	{
		if (!Z_Registration_Info_UClass_AMyTestProject01GameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyTestProject01GameMode.OuterSingleton, Z_Construct_UClass_AMyTestProject01GameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyTestProject01GameMode.OuterSingleton;
	}
	template<> MYTESTPROJECT01_API UClass* StaticClass<AMyTestProject01GameMode>()
	{
		return AMyTestProject01GameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyTestProject01GameMode);
	AMyTestProject01GameMode::~AMyTestProject01GameMode() {}
	struct Z_CompiledInDeferFile_FID_MyTestProject01_Source_MyTestProject01_MyTestProject01GameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyTestProject01_Source_MyTestProject01_MyTestProject01GameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyTestProject01GameMode, AMyTestProject01GameMode::StaticClass, TEXT("AMyTestProject01GameMode"), &Z_Registration_Info_UClass_AMyTestProject01GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyTestProject01GameMode), 1262442773U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyTestProject01_Source_MyTestProject01_MyTestProject01GameMode_h_2496276471(TEXT("/Script/MyTestProject01"),
		Z_CompiledInDeferFile_FID_MyTestProject01_Source_MyTestProject01_MyTestProject01GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyTestProject01_Source_MyTestProject01_MyTestProject01GameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
