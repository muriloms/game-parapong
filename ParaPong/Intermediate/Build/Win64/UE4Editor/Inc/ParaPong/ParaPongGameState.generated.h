// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AParaPongCharacter;
class ABall;
class ACameraActor;
#ifdef PARAPONG_ParaPongGameState_generated_h
#error "ParaPongGameState.generated.h already included, missing '#pragma once' in ParaPongGameState.h"
#endif
#define PARAPONG_ParaPongGameState_generated_h

#define ParaPong_Source_ParaPong_ParaPongGameState_h_15_SPARSE_DATA
#define ParaPong_Source_ParaPong_ParaPongGameState_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnStartMatchCountdown); \
	DECLARE_FUNCTION(execSetupGame);


#define ParaPong_Source_ParaPong_ParaPongGameState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnStartMatchCountdown); \
	DECLARE_FUNCTION(execSetupGame);


#define ParaPong_Source_ParaPong_ParaPongGameState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAParaPongGameState(); \
	friend struct Z_Construct_UClass_AParaPongGameState_Statics; \
public: \
	DECLARE_CLASS(AParaPongGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ParaPong"), NO_API) \
	DECLARE_SERIALIZER(AParaPongGameState)


#define ParaPong_Source_ParaPong_ParaPongGameState_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAParaPongGameState(); \
	friend struct Z_Construct_UClass_AParaPongGameState_Statics; \
public: \
	DECLARE_CLASS(AParaPongGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ParaPong"), NO_API) \
	DECLARE_SERIALIZER(AParaPongGameState)


#define ParaPong_Source_ParaPong_ParaPongGameState_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AParaPongGameState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AParaPongGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParaPongGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParaPongGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AParaPongGameState(AParaPongGameState&&); \
	NO_API AParaPongGameState(const AParaPongGameState&); \
public:


#define ParaPong_Source_ParaPong_ParaPongGameState_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AParaPongGameState(AParaPongGameState&&); \
	NO_API AParaPongGameState(const AParaPongGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParaPongGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParaPongGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AParaPongGameState)


#define ParaPong_Source_ParaPong_ParaPongGameState_h_15_PRIVATE_PROPERTY_OFFSET
#define ParaPong_Source_ParaPong_ParaPongGameState_h_12_PROLOG
#define ParaPong_Source_ParaPong_ParaPongGameState_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ParaPong_Source_ParaPong_ParaPongGameState_h_15_PRIVATE_PROPERTY_OFFSET \
	ParaPong_Source_ParaPong_ParaPongGameState_h_15_SPARSE_DATA \
	ParaPong_Source_ParaPong_ParaPongGameState_h_15_RPC_WRAPPERS \
	ParaPong_Source_ParaPong_ParaPongGameState_h_15_INCLASS \
	ParaPong_Source_ParaPong_ParaPongGameState_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ParaPong_Source_ParaPong_ParaPongGameState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ParaPong_Source_ParaPong_ParaPongGameState_h_15_PRIVATE_PROPERTY_OFFSET \
	ParaPong_Source_ParaPong_ParaPongGameState_h_15_SPARSE_DATA \
	ParaPong_Source_ParaPong_ParaPongGameState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ParaPong_Source_ParaPong_ParaPongGameState_h_15_INCLASS_NO_PURE_DECLS \
	ParaPong_Source_ParaPong_ParaPongGameState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARAPONG_API UClass* StaticClass<class AParaPongGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ParaPong_Source_ParaPong_ParaPongGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
