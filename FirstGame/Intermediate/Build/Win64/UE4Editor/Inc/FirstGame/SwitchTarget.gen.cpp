// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstGame/SwitchTarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwitchTarget() {}
// Cross Module References
	FIRSTGAME_API UClass* Z_Construct_UClass_ASwitchTarget_NoRegister();
	FIRSTGAME_API UClass* Z_Construct_UClass_ASwitchTarget();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FirstGame();
// End Cross Module References
	void ASwitchTarget::StaticRegisterNativesASwitchTarget()
	{
	}
	UClass* Z_Construct_UClass_ASwitchTarget_NoRegister()
	{
		return ASwitchTarget::StaticClass();
	}
	struct Z_Construct_UClass_ASwitchTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASwitchTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwitchTarget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SwitchTarget.h" },
		{ "ModuleRelativePath", "SwitchTarget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASwitchTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASwitchTarget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASwitchTarget_Statics::ClassParams = {
		&ASwitchTarget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASwitchTarget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASwitchTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASwitchTarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASwitchTarget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASwitchTarget, 3869291917);
	template<> FIRSTGAME_API UClass* StaticClass<ASwitchTarget>()
	{
		return ASwitchTarget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASwitchTarget(Z_Construct_UClass_ASwitchTarget, &ASwitchTarget::StaticClass, TEXT("/Script/FirstGame"), TEXT("ASwitchTarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASwitchTarget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
