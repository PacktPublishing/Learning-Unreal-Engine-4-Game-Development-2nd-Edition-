// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstGame_init() {}
	FIRSTGAME_API UFunction* Z_Construct_UDelegateFunction_FirstGame_DynamicRotateDelegate__DelegateSignature();
	FIRSTGAME_API UFunction* Z_Construct_UDelegateFunction_FirstGame_DynamicMulticastRotateDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FirstGame()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_FirstGame_DynamicRotateDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FirstGame_DynamicMulticastRotateDelegate__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/FirstGame",
				SingletonFuncArray,
				ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x7F390A96,
				0x9E0F350C,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
