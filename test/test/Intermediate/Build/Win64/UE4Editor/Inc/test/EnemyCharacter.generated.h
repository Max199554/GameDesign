// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST_EnemyCharacter_generated_h
#error "EnemyCharacter.generated.h already included, missing '#pragma once' in EnemyCharacter.h"
#endif
#define TEST_EnemyCharacter_generated_h

#define test_Source_test_EnemyCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTakeDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TakeDamage(Z_Param_Damage); \
		P_NATIVE_END; \
	}


#define test_Source_test_EnemyCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTakeDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TakeDamage(Z_Param_Damage); \
		P_NATIVE_END; \
	}


#define test_Source_test_EnemyCharacter_h_12_EVENT_PARMS
#define test_Source_test_EnemyCharacter_h_12_CALLBACK_WRAPPERS
#define test_Source_test_EnemyCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyCharacter(); \
	friend struct Z_Construct_UClass_AEnemyCharacter_Statics; \
public: \
	DECLARE_CLASS(AEnemyCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/test"), NO_API) \
	DECLARE_SERIALIZER(AEnemyCharacter)


#define test_Source_test_EnemyCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyCharacter(); \
	friend struct Z_Construct_UClass_AEnemyCharacter_Statics; \
public: \
	DECLARE_CLASS(AEnemyCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/test"), NO_API) \
	DECLARE_SERIALIZER(AEnemyCharacter)


#define test_Source_test_EnemyCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyCharacter(AEnemyCharacter&&); \
	NO_API AEnemyCharacter(const AEnemyCharacter&); \
public:


#define test_Source_test_EnemyCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyCharacter(AEnemyCharacter&&); \
	NO_API AEnemyCharacter(const AEnemyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyCharacter)


#define test_Source_test_EnemyCharacter_h_12_PRIVATE_PROPERTY_OFFSET
#define test_Source_test_EnemyCharacter_h_9_PROLOG \
	test_Source_test_EnemyCharacter_h_12_EVENT_PARMS


#define test_Source_test_EnemyCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	test_Source_test_EnemyCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	test_Source_test_EnemyCharacter_h_12_RPC_WRAPPERS \
	test_Source_test_EnemyCharacter_h_12_CALLBACK_WRAPPERS \
	test_Source_test_EnemyCharacter_h_12_INCLASS \
	test_Source_test_EnemyCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define test_Source_test_EnemyCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	test_Source_test_EnemyCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	test_Source_test_EnemyCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	test_Source_test_EnemyCharacter_h_12_CALLBACK_WRAPPERS \
	test_Source_test_EnemyCharacter_h_12_INCLASS_NO_PURE_DECLS \
	test_Source_test_EnemyCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID test_Source_test_EnemyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
