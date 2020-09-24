// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ParaPong/ParaPongPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParaPongPlayerController() {}
// Cross Module References
	PARAPONG_API UClass* Z_Construct_UClass_AParaPongPlayerController_NoRegister();
	PARAPONG_API UClass* Z_Construct_UClass_AParaPongPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_ParaPong();
// End Cross Module References
	DEFINE_FUNCTION(AParaPongPlayerController::execMoveRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AParaPongPlayerController::execSomeAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SomeAction();
		P_NATIVE_END;
	}
	void AParaPongPlayerController::StaticRegisterNativesAParaPongPlayerController()
	{
		UClass* Class = AParaPongPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveRight", &AParaPongPlayerController::execMoveRight },
			{ "SomeAction", &AParaPongPlayerController::execSomeAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AParaPongPlayerController_MoveRight_Statics
	{
		struct ParaPongPlayerController_eventMoveRight_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AParaPongPlayerController_MoveRight_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ParaPongPlayerController_eventMoveRight_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParaPongPlayerController_MoveRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParaPongPlayerController_MoveRight_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParaPongPlayerController_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ParaPongPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParaPongPlayerController_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParaPongPlayerController, nullptr, "MoveRight", nullptr, nullptr, sizeof(ParaPongPlayerController_eventMoveRight_Parms), Z_Construct_UFunction_AParaPongPlayerController_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParaPongPlayerController_MoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParaPongPlayerController_MoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AParaPongPlayerController_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParaPongPlayerController_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParaPongPlayerController_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParaPongPlayerController_SomeAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParaPongPlayerController_SomeAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ParaPongPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParaPongPlayerController_SomeAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParaPongPlayerController, nullptr, "SomeAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParaPongPlayerController_SomeAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AParaPongPlayerController_SomeAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParaPongPlayerController_SomeAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParaPongPlayerController_SomeAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AParaPongPlayerController_NoRegister()
	{
		return AParaPongPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AParaPongPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AParaPongPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ParaPong,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AParaPongPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AParaPongPlayerController_MoveRight, "MoveRight" }, // 3643484002
		{ &Z_Construct_UFunction_AParaPongPlayerController_SomeAction, "SomeAction" }, // 1110517713
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParaPongPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ParaPongPlayerController.h" },
		{ "ModuleRelativePath", "ParaPongPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AParaPongPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParaPongPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AParaPongPlayerController_Statics::ClassParams = {
		&AParaPongPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AParaPongPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AParaPongPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AParaPongPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AParaPongPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AParaPongPlayerController, 944720757);
	template<> PARAPONG_API UClass* StaticClass<AParaPongPlayerController>()
	{
		return AParaPongPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AParaPongPlayerController(Z_Construct_UClass_AParaPongPlayerController, &AParaPongPlayerController::StaticClass, TEXT("/Script/ParaPong"), TEXT("AParaPongPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AParaPongPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
