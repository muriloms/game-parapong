// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ParaPong/ParaPongCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParaPongCharacter() {}
// Cross Module References
	PARAPONG_API UClass* Z_Construct_UClass_AParaPongCharacter_NoRegister();
	PARAPONG_API UClass* Z_Construct_UClass_AParaPongCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ParaPong();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AParaPongCharacter::StaticRegisterNativesAParaPongCharacter()
	{
	}
	UClass* Z_Construct_UClass_AParaPongCharacter_NoRegister()
	{
		return AParaPongCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AParaPongCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TempMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TempMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AParaPongCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ParaPong,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParaPongCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ParaPongCharacter.h" },
		{ "ModuleRelativePath", "ParaPongCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParaPongCharacter_Statics::NewProp_TempMesh_MetaData[] = {
		{ "Category", "ParaPongCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ParaPongCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParaPongCharacter_Statics::NewProp_TempMesh = { "TempMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParaPongCharacter, TempMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AParaPongCharacter_Statics::NewProp_TempMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AParaPongCharacter_Statics::NewProp_TempMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AParaPongCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParaPongCharacter_Statics::NewProp_TempMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AParaPongCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParaPongCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AParaPongCharacter_Statics::ClassParams = {
		&AParaPongCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AParaPongCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AParaPongCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AParaPongCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AParaPongCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AParaPongCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AParaPongCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AParaPongCharacter, 3007939031);
	template<> PARAPONG_API UClass* StaticClass<AParaPongCharacter>()
	{
		return AParaPongCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AParaPongCharacter(Z_Construct_UClass_AParaPongCharacter, &AParaPongCharacter::StaticClass, TEXT("/Script/ParaPong"), TEXT("AParaPongCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AParaPongCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
