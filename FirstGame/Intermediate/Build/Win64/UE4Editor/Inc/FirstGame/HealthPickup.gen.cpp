// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstGame/HealthPickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthPickup() {}
// Cross Module References
	FIRSTGAME_API UClass* Z_Construct_UClass_AHealthPickup_NoRegister();
	FIRSTGAME_API UClass* Z_Construct_UClass_AHealthPickup();
	FIRSTGAME_API UClass* Z_Construct_UClass_AItem();
	UPackage* Z_Construct_UPackage__Script_FirstGame();
// End Cross Module References
	void AHealthPickup::StaticRegisterNativesAHealthPickup()
	{
	}
	UClass* Z_Construct_UClass_AHealthPickup_NoRegister()
	{
		return AHealthPickup::StaticClass();
	}
	struct Z_Construct_UClass_AHealthPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHealthPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AItem,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealthPickup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HealthPickup.h" },
		{ "ModuleRelativePath", "HealthPickup.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHealthPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHealthPickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHealthPickup_Statics::ClassParams = {
		&AHealthPickup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AHealthPickup_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHealthPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHealthPickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHealthPickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHealthPickup, 2517367761);
	template<> FIRSTGAME_API UClass* StaticClass<AHealthPickup>()
	{
		return AHealthPickup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHealthPickup(Z_Construct_UClass_AHealthPickup, &AHealthPickup::StaticClass, TEXT("/Script/FirstGame"), TEXT("AHealthPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHealthPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
