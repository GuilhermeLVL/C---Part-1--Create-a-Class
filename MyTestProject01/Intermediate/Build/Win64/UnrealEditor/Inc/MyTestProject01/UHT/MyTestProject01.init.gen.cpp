// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTestProject01_init() {}
	MYTESTPROJECT01_API UFunction* Z_Construct_UDelegateFunction_MyTestProject01_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MyTestProject01;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MyTestProject01()
	{
		if (!Z_Registration_Info_UPackage__Script_MyTestProject01.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MyTestProject01_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MyTestProject01",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x75C8BB33,
				0xA8BFF918,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MyTestProject01.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MyTestProject01.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MyTestProject01(Z_Construct_UPackage__Script_MyTestProject01, TEXT("/Script/MyTestProject01"), Z_Registration_Info_UPackage__Script_MyTestProject01, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x75C8BB33, 0xA8BFF918));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
