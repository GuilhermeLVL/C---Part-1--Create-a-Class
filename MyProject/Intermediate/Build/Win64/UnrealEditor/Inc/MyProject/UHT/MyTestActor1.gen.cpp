// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/MyTestActor1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTestActor1() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyTestActor1();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyTestActor1_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	DEFINE_FUNCTION(AMyTestActor1::execCalculateValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CalculateValue();
		P_NATIVE_END;
	}
	static FName NAME_AMyTestActor1_OnValueCalculate = FName(TEXT("OnValueCalculate"));
	void AMyTestActor1::OnValueCalculate()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMyTestActor1_OnValueCalculate),NULL);
	}
	void AMyTestActor1::StaticRegisterNativesAMyTestActor1()
	{
		UClass* Class = AMyTestActor1::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateValue", &AMyTestActor1::execCalculateValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyTestActor1_CalculateValue_Statics
	{
		struct MyTestActor1_eventCalculateValue_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyTestActor1_CalculateValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyTestActor1_eventCalculateValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyTestActor1_CalculateValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyTestActor1_CalculateValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyTestActor1_CalculateValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "TestFunctions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Declarando funcao que calcula os valores das variaveis acima\n" },
#endif
		{ "ModuleRelativePath", "MyTestActor1.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declarando funcao que calcula os valores das variaveis acima" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyTestActor1_CalculateValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyTestActor1, nullptr, "CalculateValue", nullptr, nullptr, Z_Construct_UFunction_AMyTestActor1_CalculateValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyTestActor1_CalculateValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyTestActor1_CalculateValue_Statics::MyTestActor1_eventCalculateValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyTestActor1_CalculateValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyTestActor1_CalculateValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyTestActor1_CalculateValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyTestActor1_CalculateValue_Statics::MyTestActor1_eventCalculateValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyTestActor1_CalculateValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyTestActor1_CalculateValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyTestActor1_OnValueCalculate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyTestActor1_OnValueCalculate_Statics::Function_MetaDataParams[] = {
		{ "Category", "TestFunctions" },
		{ "ModuleRelativePath", "MyTestActor1.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyTestActor1_OnValueCalculate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyTestActor1, nullptr, "OnValueCalculate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyTestActor1_OnValueCalculate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyTestActor1_OnValueCalculate_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMyTestActor1_OnValueCalculate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyTestActor1_OnValueCalculate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyTestActor1);
	UClass* Z_Construct_UClass_AMyTestActor1_NoRegister()
	{
		return AMyTestActor1::StaticClass();
	}
	struct Z_Construct_UClass_AMyTestActor1_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueA_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ValueA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueB_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ValueB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyTestActor1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestActor1_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyTestActor1_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyTestActor1_CalculateValue, "CalculateValue" }, // 2785339523
		{ &Z_Construct_UFunction_AMyTestActor1_OnValueCalculate, "OnValueCalculate" }, // 987202888
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestActor1_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTestActor1_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyTestActor1.h" },
		{ "ModuleRelativePath", "MyTestActor1.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTestActor1_Statics::NewProp_ValueA_MetaData[] = {
		{ "Category", "TesteValues" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Definindo variaveis que podem ser visualizadas e manipuladas pelo BluePrint \"BlueprintReadWrite\"\n" },
#endif
		{ "ModuleRelativePath", "MyTestActor1.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Definindo variaveis que podem ser visualizadas e manipuladas pelo BluePrint \"BlueprintReadWrite\"" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyTestActor1_Statics::NewProp_ValueA = { "ValueA", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyTestActor1, ValueA), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestActor1_Statics::NewProp_ValueA_MetaData), Z_Construct_UClass_AMyTestActor1_Statics::NewProp_ValueA_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTestActor1_Statics::NewProp_ValueB_MetaData[] = {
		{ "Category", "TesteValues" },
		{ "ModuleRelativePath", "MyTestActor1.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyTestActor1_Statics::NewProp_ValueB = { "ValueB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyTestActor1, ValueB), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestActor1_Statics::NewProp_ValueB_MetaData), Z_Construct_UClass_AMyTestActor1_Statics::NewProp_ValueB_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyTestActor1_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyTestActor1_Statics::NewProp_ValueA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyTestActor1_Statics::NewProp_ValueB,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyTestActor1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyTestActor1>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyTestActor1_Statics::ClassParams = {
		&AMyTestActor1::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyTestActor1_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestActor1_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestActor1_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyTestActor1_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestActor1_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMyTestActor1()
	{
		if (!Z_Registration_Info_UClass_AMyTestActor1.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyTestActor1.OuterSingleton, Z_Construct_UClass_AMyTestActor1_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyTestActor1.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<AMyTestActor1>()
	{
		return AMyTestActor1::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyTestActor1);
	AMyTestActor1::~AMyTestActor1() {}
	struct Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_MyTestActor1_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_MyTestActor1_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyTestActor1, AMyTestActor1::StaticClass, TEXT("AMyTestActor1"), &Z_Registration_Info_UClass_AMyTestActor1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyTestActor1), 4131403132U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_MyTestActor1_h_2517662208(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_MyTestActor1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_MyTestActor1_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
