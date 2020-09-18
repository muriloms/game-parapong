// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
struct FHitResult;
#ifdef PARAPONG_Ball_generated_h
#error "Ball.generated.h already included, missing '#pragma once' in Ball.h"
#endif
#define PARAPONG_Ball_generated_h

#define ParaPong_Source_ParaPong_Ball_h_12_SPARSE_DATA
#define ParaPong_Source_ParaPong_Ball_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetMovement); \
	DECLARE_FUNCTION(execStopMovement); \
	DECLARE_FUNCTION(execStartMovement); \
	DECLARE_FUNCTION(execOnBallHit);


#define ParaPong_Source_ParaPong_Ball_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetMovement); \
	DECLARE_FUNCTION(execStopMovement); \
	DECLARE_FUNCTION(execStartMovement); \
	DECLARE_FUNCTION(execOnBallHit);


#define ParaPong_Source_ParaPong_Ball_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABall(); \
	friend struct Z_Construct_UClass_ABall_Statics; \
public: \
	DECLARE_CLASS(ABall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ParaPong"), NO_API) \
	DECLARE_SERIALIZER(ABall)


#define ParaPong_Source_ParaPong_Ball_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABall(); \
	friend struct Z_Construct_UClass_ABall_Statics; \
public: \
	DECLARE_CLASS(ABall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ParaPong"), NO_API) \
	DECLARE_SERIALIZER(ABall)


#define ParaPong_Source_ParaPong_Ball_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABall(ABall&&); \
	NO_API ABall(const ABall&); \
public:


#define ParaPong_Source_ParaPong_Ball_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABall(ABall&&); \
	NO_API ABall(const ABall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABall)


#define ParaPong_Source_ParaPong_Ball_h_12_PRIVATE_PROPERTY_OFFSET
#define ParaPong_Source_ParaPong_Ball_h_9_PROLOG
#define ParaPong_Source_ParaPong_Ball_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ParaPong_Source_ParaPong_Ball_h_12_PRIVATE_PROPERTY_OFFSET \
	ParaPong_Source_ParaPong_Ball_h_12_SPARSE_DATA \
	ParaPong_Source_ParaPong_Ball_h_12_RPC_WRAPPERS \
	ParaPong_Source_ParaPong_Ball_h_12_INCLASS \
	ParaPong_Source_ParaPong_Ball_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ParaPong_Source_ParaPong_Ball_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ParaPong_Source_ParaPong_Ball_h_12_PRIVATE_PROPERTY_OFFSET \
	ParaPong_Source_ParaPong_Ball_h_12_SPARSE_DATA \
	ParaPong_Source_ParaPong_Ball_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ParaPong_Source_ParaPong_Ball_h_12_INCLASS_NO_PURE_DECLS \
	ParaPong_Source_ParaPong_Ball_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARAPONG_API UClass* StaticClass<class ABall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ParaPong_Source_ParaPong_Ball_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
