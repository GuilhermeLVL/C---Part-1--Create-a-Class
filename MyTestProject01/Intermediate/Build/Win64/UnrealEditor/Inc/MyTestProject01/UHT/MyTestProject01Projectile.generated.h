// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyTestProject01Projectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef MYTESTPROJECT01_MyTestProject01Projectile_generated_h
#error "MyTestProject01Projectile.generated.h already included, missing '#pragma once' in MyTestProject01Projectile.h"
#endif
#define MYTESTPROJECT01_MyTestProject01Projectile_generated_h

#define FID_MyTestProject01_Source_MyTestProject01_MyTestProject01Projectile_h_15_SPARSE_DATA
#define FID_MyTestProject01_Source_MyTestProject01_MyTestProject01Projectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyTestProject01_Source_MyTestProject01_MyTestProject01Projectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyTestProject01_Source_MyTestProject01_MyTestProject01Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_MyTestProject01_Source_MyTestProject01_MyTestProject01Projectile_h_15_ACCESSORS
#define FID_MyTestProject01_Source_MyTestProject01_MyTestProject01Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyTestProject01Projectile(); \
	friend struct Z_Construct_UClass_AMyTestProject01Projectile_Statics; \
public: \
	DECLARE_CLASS(AMyTestProject01Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyTestProject01"), NO_API) \
	DECLARE_SERIALIZER(AMyTestProject01Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_MyTestProject01_Source_MyTestProject01_MyTestProject01Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyTestProject01Projectile(AMyTestProject01Projectile&&); \
	NO_API AMyTestProject01Projectile(const AMyTestProject01Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyTestProject01Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyTestProject01Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyTestProject01Projectile) \
	NO_API virtual ~AMyTestProject01Projectile();


#define FID_MyTestProject01_Source_MyTestProject01_MyTestProject01Projectile_h_12_PROLOG
#define FID_MyTestProject01_Source_MyTestProject01_MyTestProject01Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyTestProject01_Source_MyTestProject01_MyTestProject01Projectile_h_15_SPARSE_DATA \
	FID_MyTestProject01_Source_MyTestProject01_MyTestProject01Projectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyTestProject01_Source_MyTestProject01_MyTestProject01Projectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyTestProject01_Source_MyTestProject01_MyTestProject01Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyTestProject01_Source_MyTestProject01_MyTestProject01Projectile_h_15_ACCESSORS \
	FID_MyTestProject01_Source_MyTestProject01_MyTestProject01Projectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_MyTestProject01_Source_MyTestProject01_MyTestProject01Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYTESTPROJECT01_API UClass* StaticClass<class AMyTestProject01Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyTestProject01_Source_MyTestProject01_MyTestProject01Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
