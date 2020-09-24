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
	const FCppClassTypeInfoStatic Z_Construct_UClass_AParaPongAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParaPongAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AParaPongAIController_Statics::ClassParams = {
		&AParaPongAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(AParaPongAIController, 3527113601);
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
