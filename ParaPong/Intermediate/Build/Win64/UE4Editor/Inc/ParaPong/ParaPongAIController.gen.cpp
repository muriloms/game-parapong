// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ParaPong/ParaPongAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParaPongAIController() {}
// Cross Module References
	PARAPONG_API UClass* Z_Construct_UClass_AParaPongAIController_NoRegister();
	PARAPONG_API UClass* Z_Construct_UClass_AParaPongAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_ParaPong();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void AParaPongAIController::StaticRegisterNativesAParaPongAIController()
	{
	}
	UClass* Z_Construct_UClass_AParaPongAIController_NoRegister()
	{
		return AParaPongAIController::StaticClass();
	}
	struct Z_Construct_UClass_AParaPongAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BallRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BallRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AParaPongAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_ParaPong,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParaPongAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ParaPongAIController.h" },
		{ "ModuleRelativePath", "ParaPongAIController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParaPongAIController_Statics::NewProp_BallRef_MetaData[] = {
		{ "ModuleRelativePath", "ParaPongAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParaPongAIController_Statics::NewProp_BallRef = { "BallRef", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParaPongAIController, BallRef), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AParaPongAIController_Statics::NewProp_BallRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AParaPongAIController_Statics::NewProp_BallRef_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AParaPongAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParaPongAIController_Statics::NewProp_BallRef,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AParaPongAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParaPongAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AParaPongAIController_Statics::ClassParams = {
		&AParaPongAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AParaPongAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AParaPongAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AParaPongAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AParaPongAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AParaPongAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AParaPongAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AParaPongAIController, 3369710468);
	template<> PARAPONG_API UClass* StaticClass<AParaPongAIController>()
	{
		return AParaPongAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AParaPongAIController(Z_Construct_UClass_AParaPongAIController, &AParaPongAIController::StaticClass, TEXT("/Script/ParaPong"), TEXT("AParaPongAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AParaPongAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
