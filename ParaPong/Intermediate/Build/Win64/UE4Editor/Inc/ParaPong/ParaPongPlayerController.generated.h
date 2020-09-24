// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PARAPONG_ParaPongPlayerController_generated_h
#error "ParaPongPlayerController.generated.h already included, missing '#pragma once' in ParaPongPlayerController.h"
#endif
#define PARAPONG_ParaPongPlayerController_generated_h

#define ParaPong_Source_ParaPong_ParaPongPlayerController_h_15_SPARSE_DATA
#define ParaPong_Source_ParaPong_ParaPongPlayerController_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execSomeAction);


#define ParaPong_Source_ParaPong_ParaPongPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execSomeAction);


#define ParaPong_Source_ParaPong_ParaPongPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAParaPongPlayerController(); \
	friend struct Z_Construct_UClass_AParaPongPlayerController_Statics; \
public: \
	DECLARE_CLASS(AParaPongPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ParaPong"), NO_API) \
	DECLARE_SERIALIZER(AParaPongPlayerController)


#define ParaPong_Source_ParaPong_ParaPongPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAParaPongPlayerController(); \
	friend struct Z_Construct_UClass_AParaPongPlayerController_Statics; \
public: \
	DECLARE_CLASS(AParaPongPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ParaPong"), NO_API) \
	DECLARE_SERIALIZER(AParaPongPlayerController)


#define ParaPong_Source_ParaPong_ParaPongPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AParaPongPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AParaPongPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParaPongPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParaPongPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AParaPongPlayerController(AParaPongPlayerController&&); \
	NO_API AParaPongPlayerController(const AParaPongPlayerController&); \
public:


#define ParaPong_Source_ParaPong_ParaPongPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AParaPongPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AParaPongPlayerController(AParaPongPlayerController&&); \
	NO_API AParaPongPlayerController(const AParaPongPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParaPongPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParaPongPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AParaPongPlayerController)


#define ParaPong_Source_ParaPong_ParaPongPlayerController_h_15_PRIVATE_PROPERTY_OFFSET
#define ParaPong_Source_ParaPong_ParaPongPlayerController_h_12_PROLOG
#define ParaPong_Source_ParaPong_ParaPongPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ParaPong_Source_ParaPong_ParaPongPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	ParaPong_Source_ParaPong_ParaPongPlayerController_h_15_SPARSE_DATA \
	ParaPong_Source_ParaPong_ParaPongPlayerController_h_15_RPC_WRAPPERS \
	ParaPong_Source_ParaPong_ParaPongPlayerController_h_15_INCLASS \
	ParaPong_Source_ParaPong_ParaPongPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ParaPong_Source_ParaPong_ParaPongPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ParaPong_Source_ParaPong_ParaPongPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	ParaPong_Source_ParaPong_ParaPongPlayerController_h_15_SPARSE_DATA \
	ParaPong_Source_ParaPong_ParaPongPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ParaPong_Source_ParaPong_ParaPongPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	ParaPong_Source_ParaPong_ParaPongPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARAPONG_API UClass* StaticClass<class AParaPongPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ParaPong_Source_ParaPong_ParaPongPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
