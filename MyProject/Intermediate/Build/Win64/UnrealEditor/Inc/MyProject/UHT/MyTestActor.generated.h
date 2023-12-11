// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyTestActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_MyTestActor_generated_h
#error "MyTestActor.generated.h already included, missing '#pragma once' in MyTestActor.h"
#endif
#define MYPROJECT_MyTestActor_generated_h

#define FID_MyProject_Source_MyProject_MyTestActor_h_12_SPARSE_DATA
#define FID_MyProject_Source_MyProject_MyTestActor_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyProject_Source_MyProject_MyTestActor_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyProject_Source_MyProject_MyTestActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCalculateValue);


#define FID_MyProject_Source_MyProject_MyTestActor_h_12_ACCESSORS
#define FID_MyProject_Source_MyProject_MyTestActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyTestActor(); \
	friend struct Z_Construct_UClass_AMyTestActor_Statics; \
public: \
	DECLARE_CLASS(AMyTestActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyTestActor)


#define FID_MyProject_Source_MyProject_MyTestActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyTestActor(AMyTestActor&&); \
	NO_API AMyTestActor(const AMyTestActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyTestActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyTestActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyTestActor) \
	NO_API virtual ~AMyTestActor();


#define FID_MyProject_Source_MyProject_MyTestActor_h_9_PROLOG
#define FID_MyProject_Source_MyProject_MyTestActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Source_MyProject_MyTestActor_h_12_SPARSE_DATA \
	FID_MyProject_Source_MyProject_MyTestActor_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyProject_Source_MyProject_MyTestActor_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyProject_Source_MyProject_MyTestActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject_Source_MyProject_MyTestActor_h_12_ACCESSORS \
	FID_MyProject_Source_MyProject_MyTestActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_MyProject_Source_MyProject_MyTestActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AMyTestActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject_Source_MyProject_MyTestActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
