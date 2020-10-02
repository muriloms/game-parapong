// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ParaPong/ParaPongGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParaPongGameState() {}
// Cross Module References
	PARAPONG_API UClass* Z_Construct_UClass_AParaPongGameState_NoRegister();
	PARAPONG_API UClass* Z_Construct_UClass_AParaPongGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_ParaPong();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
	PARAPONG_API UClass* Z_Construct_UClass_ABall_NoRegister();
	PARAPONG_API UClass* Z_Construct_UClass_AParaPongCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AParaPongGameState::execOnStartMatchCountdown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartMatchCountdown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AParaPongGameState::execSetupGame)
	{
		P_GET_OBJECT(AParaPongCharacter,Z_Param_Player1);
		P_GET_OBJECT(AParaPongCharacter,Z_Param_Player2);
		P_GET_OBJECT(ABall,Z_Param_Ball);
		P_GET_OBJECT(ACameraActor,Z_Param_Camera);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupGame(Z_Param_Player1,Z_Param_Player2,Z_Param_Ball,Z_Param_Camera);
		P_NATIVE_END;
	}
	void AParaPongGameState::StaticRegisterNativesAParaPongGameState()
	{
		UClass* Class = AParaPongGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnStartMatchCountdown", &AParaPongGameState::execOnStartMatchCountdown },
			{ "SetupGame", &AParaPongGameState::execSetupGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AParaPongGameState_OnStartMatchCountdown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParaPongGameState_OnStartMatchCountdown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ParaPongGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParaPongGameState_OnStartMatchCountdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParaPongGameState, nullptr, "OnStartMatchCountdown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParaPongGameState_OnStartMatchCountdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AParaPongGameState_OnStartMatchCountdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParaPongGameState_OnStartMatchCountdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParaPongGameState_OnStartMatchCountdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParaPongGameState_SetupGame_Statics
	{
		struct ParaPongGameState_eventSetupGame_Parms
		{
			AParaPongCharacter* Player1;
			AParaPongCharacter* Player2;
			ABall* Ball;
			ACameraActor* Camera;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Ball;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player2;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AParaPongGameState_SetupGame_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ParaPongGameState_eventSetupGame_Parms, Camera), Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AParaPongGameState_SetupGame_Statics::NewProp_Ball = { "Ball", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ParaPongGameState_eventSetupGame_Parms, Ball), Z_Construct_UClass_ABall_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AParaPongGameState_SetupGame_Statics::NewProp_Player2 = { "Player2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ParaPongGameState_eventSetupGame_Parms, Player2), Z_Construct_UClass_AParaPongCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AParaPongGameState_SetupGame_Statics::NewProp_Player1 = { "Player1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ParaPongGameState_eventSetupGame_Parms, Player1), Z_Construct_UClass_AParaPongCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParaPongGameState_SetupGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParaPongGameState_SetupGame_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParaPongGameState_SetupGame_Statics::NewProp_Ball,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParaPongGameState_SetupGame_Statics::NewProp_Player2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParaPongGameState_SetupGame_Statics::NewProp_Player1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParaPongGameState_SetupGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ParaPongGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParaPongGameState_SetupGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParaPongGameState, nullptr, "SetupGame", nullptr, nullptr, sizeof(ParaPongGameState_eventSetupGame_Parms), Z_Construct_UFunction_AParaPongGameState_SetupGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParaPongGameState_SetupGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParaPongGameState_SetupGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AParaPongGameState_SetupGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParaPongGameState_SetupGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParaPongGameState_SetupGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AParaPongGameState_NoRegister()
	{
		return AParaPongGameState::StaticClass();
	}
	struct Z_Construct_UClass_AParaPongGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player2Ref_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player2Ref;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player1Ref_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player1Ref;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BallRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BallRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreToWin_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ScoreToWin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player2Score_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Player2Score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player1Score_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Player1Score;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AParaPongGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ParaPong,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AParaPongGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AParaPongGameState_OnStartMatchCountdown, "OnStartMatchCountdown" }, // 518967692
		{ &Z_Construct_UFunction_AParaPongGameState_SetupGame, "SetupGame" }, // 218466732
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParaPongGameState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ParaPongGameState.h" },
		{ "ModuleRelativePath", "ParaPongGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParaPongGameState_Statics::NewProp_MainCamera_MetaData[] = {
		{ "Category", "ParaPongGameState" },
		{ "ModuleRelativePath", "ParaPongGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParaPongGameState_Statics::NewProp_MainCamera = { "MainCamera", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParaPongGameState, MainCamera), Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AParaPongGameState_Statics::NewProp_MainCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AParaPongGameState_Statics::NewProp_MainCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParaPongGameState_Statics::NewProp_Player2Ref_MetaData[] = {
		{ "Category", "ParaPongGameState" },
		{ "ModuleRelativePath", "ParaPongGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParaPongGameState_Statics::NewProp_Player2Ref = { "Player2Ref", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParaPongGameState, Player2Ref), Z_Construct_UClass_AParaPongCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AParaPongGameState_Statics::NewProp_Player2Ref_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AParaPongGameState_Statics::NewProp_Player2Ref_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParaPongGameState_Statics::NewProp_Player1Ref_MetaData[] = {
		{ "Category", "ParaPongGameState" },
		{ "ModuleRelativePath", "ParaPongGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParaPongGameState_Statics::NewProp_Player1Ref = { "Player1Ref", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParaPongGameState, Player1Ref), Z_Construct_UClass_AParaPongCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AParaPongGameState_Statics::NewProp_Player1Ref_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AParaPongGameState_Statics::NewProp_Player1Ref_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParaPongGameState_Statics::NewProp_BallRef_MetaData[] = {
		{ "Category", "ParaPongGameState" },
		{ "ModuleRelativePath", "ParaPongGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParaPongGameState_Statics::NewProp_BallRef = { "BallRef", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParaPongGameState, BallRef), Z_Construct_UClass_ABall_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AParaPongGameState_Statics::NewProp_BallRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AParaPongGameState_Statics::NewProp_BallRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParaPongGameState_Statics::NewProp_ScoreToWin_MetaData[] = {
		{ "Category", "ParaPongGameState" },
		{ "ModuleRelativePath", "ParaPongGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AParaPongGameState_Statics::NewProp_ScoreToWin = { "ScoreToWin", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParaPongGameState, ScoreToWin), METADATA_PARAMS(Z_Construct_UClass_AParaPongGameState_Statics::NewProp_ScoreToWin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AParaPongGameState_Statics::NewProp_ScoreToWin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParaPongGameState_Statics::NewProp_Player2Score_MetaData[] = {
		{ "Category", "ParaPongGameState" },
		{ "ModuleRelativePath", "ParaPongGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AParaPongGameState_Statics::NewProp_Player2Score = { "Player2Score", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParaPongGameState, Player2Score), METADATA_PARAMS(Z_Construct_UClass_AParaPongGameState_Statics::NewProp_Player2Score_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AParaPongGameState_Statics::NewProp_Player2Score_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParaPongGameState_Statics::NewProp_Player1Score_MetaData[] = {
		{ "Category", "ParaPongGameState" },
		{ "ModuleRelativePath", "ParaPongGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AParaPongGameState_Statics::NewProp_Player1Score = { "Player1Score", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParaPongGameState, Player1Score), METADATA_PARAMS(Z_Construct_UClass_AParaPongGameState_Statics::NewProp_Player1Score_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AParaPongGameState_Statics::NewProp_Player1Score_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AParaPongGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParaPongGameState_Statics::NewProp_MainCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParaPongGameState_Statics::NewProp_Player2Ref,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParaPongGameState_Statics::NewProp_Player1Ref,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParaPongGameState_Statics::NewProp_BallRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParaPongGameState_Statics::NewProp_ScoreToWin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParaPongGameState_Statics::NewProp_Player2Score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParaPongGameState_Statics::NewProp_Player1Score,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AParaPongGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParaPongGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AParaPongGameState_Statics::ClassParams = {
		&AParaPongGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AParaPongGameState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AParaPongGameState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AParaPongGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AParaPongGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AParaPongGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AParaPongGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AParaPongGameState, 917598863);
	template<> PARAPONG_API UClass* StaticClass<AParaPongGameState>()
	{
		return AParaPongGameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AParaPongGameState(Z_Construct_UClass_AParaPongGameState, &AParaPongGameState::StaticClass, TEXT("/Script/ParaPong"), TEXT("AParaPongGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AParaPongGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
