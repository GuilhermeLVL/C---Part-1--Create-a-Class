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
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VideoProject();
	VIDEOPROJECT_API UClass* Z_Construct_UClass_ACuboGiratorio();
	VIDEOPROJECT_API UClass* Z_Construct_UClass_ACuboGiratorio_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACuboGiratorio::execFuncaoExemplo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Parametro1);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Parametro2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FuncaoExemplo(Z_Param_Parametro1,Z_Param_Parametro2);
		P_NATIVE_END;
	}
	void ACuboGiratorio::StaticRegisterNativesACuboGiratorio()
	{
		UClass* Class = ACuboGiratorio::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FuncaoExemplo", &ACuboGiratorio::execFuncaoExemplo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACuboGiratorio_FuncaoExemplo_Statics
	{
		struct CuboGiratorio_eventFuncaoExemplo_Parms
		{
			int32 Parametro1;
			float Parametro2;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Parametro1;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Parametro2;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACuboGiratorio_FuncaoExemplo_Statics::NewProp_Parametro1 = { "Parametro1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CuboGiratorio_eventFuncaoExemplo_Parms, Parametro1), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACuboGiratorio_FuncaoExemplo_Statics::NewProp_Parametro2 = { "Parametro2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CuboGiratorio_eventFuncaoExemplo_Parms, Parametro2), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ACuboGiratorio_FuncaoExemplo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CuboGiratorio_eventFuncaoExemplo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACuboGiratorio_FuncaoExemplo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CuboGiratorio_eventFuncaoExemplo_Parms), &Z_Construct_UFunction_ACuboGiratorio_FuncaoExemplo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACuboGiratorio_FuncaoExemplo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACuboGiratorio_FuncaoExemplo_Statics::NewProp_Parametro1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACuboGiratorio_FuncaoExemplo_Statics::NewProp_Parametro2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACuboGiratorio_FuncaoExemplo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACuboGiratorio_FuncaoExemplo_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Funcao boolean com parametros\n" },
#endif
		{ "CPP_Default_Parametro1", "0" },
		{ "CPP_Default_Parametro2", "0.000000" },
		{ "ModuleRelativePath", "CuboGiratorio.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Funcao boolean com parametros" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACuboGiratorio_FuncaoExemplo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACuboGiratorio, nullptr, "FuncaoExemplo", nullptr, nullptr, Z_Construct_UFunction_ACuboGiratorio_FuncaoExemplo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACuboGiratorio_FuncaoExemplo_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACuboGiratorio_FuncaoExemplo_Statics::CuboGiratorio_eventFuncaoExemplo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACuboGiratorio_FuncaoExemplo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACuboGiratorio_FuncaoExemplo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACuboGiratorio_FuncaoExemplo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACuboGiratorio_FuncaoExemplo_Statics::CuboGiratorio_eventFuncaoExemplo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACuboGiratorio_FuncaoExemplo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACuboGiratorio_FuncaoExemplo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACuboGiratorio);
	UClass* Z_Construct_UClass_ACuboGiratorio_NoRegister()
	{
		return ACuboGiratorio::StaticClass();
	}
	struct Z_Construct_UClass_ACuboGiratorio_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CuboMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CuboMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariavelFloat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VariavelFloat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariavelInt32_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VariavelInt32;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVariavelBool_MetaData[];
#endif
		static void NewProp_bVariavelBool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVariavelBool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACuboGiratorio_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VideoProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACuboGiratorio_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACuboGiratorio_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACuboGiratorio_FuncaoExemplo, "FuncaoExemplo" }, // 1785505331
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACuboGiratorio_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACuboGiratorio_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CuboGiratorio.h" },
		{ "ModuleRelativePath", "CuboGiratorio.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACuboGiratorio_Statics::NewProp_CuboMesh_MetaData[] = {
		{ "Category", "CuboGiratorio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Criando um cubo \n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CuboGiratorio.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Criando um cubo" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACuboGiratorio_Statics::NewProp_CuboMesh = { "CuboMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACuboGiratorio, CuboMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACuboGiratorio_Statics::NewProp_CuboMesh_MetaData), Z_Construct_UClass_ACuboGiratorio_Statics::NewProp_CuboMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACuboGiratorio_Statics::NewProp_VariavelFloat_MetaData[] = {
		{ "Category", "CuboGiratorio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Criando tipos de variaveis\n" },
#endif
		{ "ModuleRelativePath", "CuboGiratorio.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Criando tipos de variaveis" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACuboGiratorio_Statics::NewProp_VariavelFloat = { "VariavelFloat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACuboGiratorio, VariavelFloat), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACuboGiratorio_Statics::NewProp_VariavelFloat_MetaData), Z_Construct_UClass_ACuboGiratorio_Statics::NewProp_VariavelFloat_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACuboGiratorio_Statics::NewProp_VariavelInt32_MetaData[] = {
		{ "Category", "CuboGiratorio" },
		{ "ModuleRelativePath", "CuboGiratorio.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACuboGiratorio_Statics::NewProp_VariavelInt32 = { "VariavelInt32", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACuboGiratorio, VariavelInt32), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACuboGiratorio_Statics::NewProp_VariavelInt32_MetaData), Z_Construct_UClass_ACuboGiratorio_Statics::NewProp_VariavelInt32_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACuboGiratorio_Statics::NewProp_bVariavelBool_MetaData[] = {
		{ "Category", "CuboGiratorio" },
		{ "ModuleRelativePath", "CuboGiratorio.h" },
	};
#endif
	void Z_Construct_UClass_ACuboGiratorio_Statics::NewProp_bVariavelBool_SetBit(void* Obj)
	{
		((ACuboGiratorio*)Obj)->bVariavelBool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACuboGiratorio_Statics::NewProp_bVariavelBool = { "bVariavelBool", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACuboGiratorio), &Z_Construct_UClass_ACuboGiratorio_Statics::NewProp_bVariavelBool_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACuboGiratorio_Statics::NewProp_bVariavelBool_MetaData), Z_Construct_UClass_ACuboGiratorio_Statics::NewProp_bVariavelBool_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACuboGiratorio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACuboGiratorio_Statics::NewProp_CuboMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACuboGiratorio_Statics::NewProp_VariavelFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACuboGiratorio_Statics::NewProp_VariavelInt32,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACuboGiratorio_Statics::NewProp_bVariavelBool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACuboGiratorio_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACuboGiratorio>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACuboGiratorio_Statics::ClassParams = {
		&ACuboGiratorio::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACuboGiratorio_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACuboGiratorio_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACuboGiratorio_Statics::Class_MetaDataParams), Z_Construct_UClass_ACuboGiratorio_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACuboGiratorio_Statics::PropPointers) < 2048);
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
		{ Z_Construct_UClass_ACuboGiratorio, ACuboGiratorio::StaticClass, TEXT("ACuboGiratorio"), &Z_Registration_Info_UClass_ACuboGiratorio, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACuboGiratorio), 3518094754U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VideoProject_Source_VideoProject_CuboGiratorio_h_2277713585(TEXT("/Script/VideoProject"),
		Z_CompiledInDeferFile_FID_VideoProject_Source_VideoProject_CuboGiratorio_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VideoProject_Source_VideoProject_CuboGiratorio_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
