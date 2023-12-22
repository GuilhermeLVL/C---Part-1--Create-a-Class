// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VideoProject/Core/Characters/MCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_VideoProject();
	VIDEOPROJECT_API UClass* Z_Construct_UClass_AMCharacter();
	VIDEOPROJECT_API UClass* Z_Construct_UClass_AMCharacter_NoRegister();
// End Cross Module References
	void AMCharacter::StaticRegisterNativesAMCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMCharacter);
	UClass* Z_Construct_UClass_AMCharacter_NoRegister()
	{
		return AMCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_VideoProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Core/Characters/MCharacter.h" },
		{ "ModuleRelativePath", "Core/Characters/MCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMCharacter_Statics::ClassParams = {
		&AMCharacter::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMCharacter_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMCharacter()
	{
		if (!Z_Registration_Info_UClass_AMCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMCharacter.OuterSingleton, Z_Construct_UClass_AMCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMCharacter.OuterSingleton;
	}
	template<> VIDEOPROJECT_API UClass* StaticClass<AMCharacter>()
	{
		return AMCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMCharacter);
	AMCharacter::~AMCharacter() {}
	struct Z_CompiledInDeferFile_FID_VideoProject_Source_VideoProject_Core_Characters_MCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VideoProject_Source_VideoProject_Core_Characters_MCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMCharacter, AMCharacter::StaticClass, TEXT("AMCharacter"), &Z_Registration_Info_UClass_AMCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMCharacter), 284414806U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VideoProject_Source_VideoProject_Core_Characters_MCharacter_h_290916543(TEXT("/Script/VideoProject"),
		Z_CompiledInDeferFile_FID_VideoProject_Source_VideoProject_Core_Characters_MCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VideoProject_Source_VideoProject_Core_Characters_MCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
