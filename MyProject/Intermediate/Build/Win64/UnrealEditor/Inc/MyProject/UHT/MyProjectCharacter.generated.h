// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyProjectCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_MyProjectCharacter_generated_h
#error "MyProjectCharacter.generated.h already included, missing '#pragma once' in MyProjectCharacter.h"
#endif
#define MYPROJECT_MyProjectCharacter_generated_h

#define FID_MyProject_Source_MyProject_MyProjectCharacter_h_22_SPARSE_DATA
#define FID_MyProject_Source_MyProject_MyProjectCharacter_h_22_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyProject_Source_MyProject_MyProjectCharacter_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyProject_Source_MyProject_MyProjectCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHasRifle); \
	DECLARE_FUNCTION(execSetHasRifle);


#define FID_MyProject_Source_MyProject_MyProjectCharacter_h_22_ACCESSORS
#define FID_MyProject_Source_MyProject_MyProjectCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProjectCharacter(); \
	friend struct Z_Construct_UClass_AMyProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyProjectCharacter)


#define FID_MyProject_Source_MyProject_MyProjectCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProjectCharacter(AMyProjectCharacter&&); \
	NO_API AMyProjectCharacter(const AMyProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProjectCharacter) \
	NO_API virtual ~AMyProjectCharacter();


#define FID_MyProject_Source_MyProject_MyProjectCharacter_h_19_PROLOG
#define FID_MyProject_Source_MyProject_MyProjectCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Source_MyProject_MyProjectCharacter_h_22_SPARSE_DATA \
	FID_MyProject_Source_MyProject_MyProjectCharacter_h_22_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyProject_Source_MyProject_MyProjectCharacter_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyProject_Source_MyProject_MyProjectCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject_Source_MyProject_MyProjectCharacter_h_22_ACCESSORS \
	FID_MyProject_Source_MyProject_MyProjectCharacter_h_22_INCLASS_NO_PURE_DECLS \
	FID_MyProject_Source_MyProject_MyProjectCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AMyProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject_Source_MyProject_MyProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
