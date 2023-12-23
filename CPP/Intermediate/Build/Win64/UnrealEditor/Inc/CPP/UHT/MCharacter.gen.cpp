// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP/Core/Characters/MCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMCharacter() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CPP_API UClass* Z_Construct_UClass_AMCharacter();
	CPP_API UClass* Z_Construct_UClass_AMCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_CPP();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_intTypeVariable_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_intTypeVariable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floatTypeVariable_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_floatTypeVariable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_booltypeVariable_MetaData[];
#endif
		static void NewProp_booltypeVariable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_booltypeVariable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stringTypeVariable_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_stringTypeVariable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vectorTypeVariable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_vectorTypeVariable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoatatoTypeVariable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RoatatoTypeVariable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_transformTypeVariable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_transformTypeVariable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_a_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_a;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_b_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_b;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_c_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_c;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Core/Characters/MCharacter.h" },
		{ "ModuleRelativePath", "Core/Characters/MCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_intTypeVariable_MetaData[] = {
		{ "Category", "MCharacter" },
		{ "ModuleRelativePath", "Core/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_intTypeVariable = { "intTypeVariable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, intTypeVariable), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_intTypeVariable_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_intTypeVariable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_floatTypeVariable_MetaData[] = {
		{ "Category", "MCharacter" },
		{ "ModuleRelativePath", "Core/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_floatTypeVariable = { "floatTypeVariable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, floatTypeVariable), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_floatTypeVariable_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_floatTypeVariable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_booltypeVariable_MetaData[] = {
		{ "Category", "MCharacter" },
		{ "ModuleRelativePath", "Core/Characters/MCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMCharacter_Statics::NewProp_booltypeVariable_SetBit(void* Obj)
	{
		((AMCharacter*)Obj)->booltypeVariable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_booltypeVariable = { "booltypeVariable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMCharacter), &Z_Construct_UClass_AMCharacter_Statics::NewProp_booltypeVariable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_booltypeVariable_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_booltypeVariable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_stringTypeVariable_MetaData[] = {
		{ "Category", "MCharacter" },
		{ "ModuleRelativePath", "Core/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_stringTypeVariable = { "stringTypeVariable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, stringTypeVariable), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_stringTypeVariable_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_stringTypeVariable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_vectorTypeVariable_MetaData[] = {
		{ "Category", "MCharacter" },
		{ "ModuleRelativePath", "Core/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_vectorTypeVariable = { "vectorTypeVariable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, vectorTypeVariable), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_vectorTypeVariable_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_vectorTypeVariable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_RoatatoTypeVariable_MetaData[] = {
		{ "Category", "MCharacter" },
		{ "ModuleRelativePath", "Core/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_RoatatoTypeVariable = { "RoatatoTypeVariable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, RoatatoTypeVariable), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_RoatatoTypeVariable_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_RoatatoTypeVariable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_transformTypeVariable_MetaData[] = {
		{ "Category", "MCharacter" },
		{ "ModuleRelativePath", "Core/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_transformTypeVariable = { "transformTypeVariable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, transformTypeVariable), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_transformTypeVariable_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_transformTypeVariable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_a_MetaData[] = {
		{ "Category", "MCharacter" },
		{ "ModuleRelativePath", "Core/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, a), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_a_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_a_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_b_MetaData[] = {
		{ "Category", "MCharacter" },
		{ "ModuleRelativePath", "Core/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_b = { "b", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, b), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_b_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_b_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMCharacter_Statics::NewProp_c_MetaData[] = {
		{ "Category", "MCharacter" },
		{ "ModuleRelativePath", "Core/Characters/MCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMCharacter_Statics::NewProp_c = { "c", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMCharacter, c), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::NewProp_c_MetaData), Z_Construct_UClass_AMCharacter_Statics::NewProp_c_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_intTypeVariable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_floatTypeVariable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_booltypeVariable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_stringTypeVariable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_vectorTypeVariable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_RoatatoTypeVariable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_transformTypeVariable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_a,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_b,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMCharacter_Statics::NewProp_c,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMCharacter_Statics::ClassParams = {
		&AMCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMCharacter()
	{
		if (!Z_Registration_Info_UClass_AMCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMCharacter.OuterSingleton, Z_Construct_UClass_AMCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMCharacter.OuterSingleton;
	}
	template<> CPP_API UClass* StaticClass<AMCharacter>()
	{
		return AMCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMCharacter);
	AMCharacter::~AMCharacter() {}
	struct Z_CompiledInDeferFile_FID_CPP_Source_CPP_Core_Characters_MCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPP_Source_CPP_Core_Characters_MCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMCharacter, AMCharacter::StaticClass, TEXT("AMCharacter"), &Z_Registration_Info_UClass_AMCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMCharacter), 3804271352U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPP_Source_CPP_Core_Characters_MCharacter_h_219453081(TEXT("/Script/CPP"),
		Z_CompiledInDeferFile_FID_CPP_Source_CPP_Core_Characters_MCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPP_Source_CPP_Core_Characters_MCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
