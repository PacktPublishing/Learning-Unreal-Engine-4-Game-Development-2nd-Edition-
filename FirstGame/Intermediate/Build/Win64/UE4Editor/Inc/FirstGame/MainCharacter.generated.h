// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTGAME_MainCharacter_generated_h
#error "MainCharacter.generated.h already included, missing '#pragma once' in MainCharacter.h"
#endif
#define FIRSTGAME_MainCharacter_generated_h

#define FirstGame_Source_FirstGame_MainCharacter_h_11_DELEGATE \
struct _Script_FirstGame_eventDynamicMulticastRotateDelegate_Parms \
{ \
	bool bPlaySound; \
}; \
static inline void FDynamicMulticastRotateDelegate_DelegateWrapper(const FMulticastScriptDelegate& DynamicMulticastRotateDelegate, bool bPlaySound) \
{ \
	_Script_FirstGame_eventDynamicMulticastRotateDelegate_Parms Parms; \
	Parms.bPlaySound=bPlaySound ? true : false; \
	DynamicMulticastRotateDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FirstGame_Source_FirstGame_MainCharacter_h_10_DELEGATE \
struct _Script_FirstGame_eventDynamicRotateDelegate_Parms \
{ \
	float RotationSpeed; \
	float ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	_Script_FirstGame_eventDynamicRotateDelegate_Parms() \
		: ReturnValue(0) \
	{ \
	} \
}; \
static inline float FDynamicRotateDelegate_DelegateWrapper(const FScriptDelegate& DynamicRotateDelegate, float RotationSpeed) \
{ \
	_Script_FirstGame_eventDynamicRotateDelegate_Parms Parms; \
	Parms.RotationSpeed=RotationSpeed; \
	DynamicRotateDelegate.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define FirstGame_Source_FirstGame_MainCharacter_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlaySoundAtRotatingActors) \
	{ \
		P_GET_UBOOL(Z_Param_PlaySound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlaySoundAtRotatingActors(Z_Param_PlaySound); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRotatingActorRates) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRotatingActorRates(Z_Param_Rate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleAllRotators) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleAllRotators(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveGame(); \
		P_NATIVE_END; \
	}


#define FirstGame_Source_FirstGame_MainCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlaySoundAtRotatingActors) \
	{ \
		P_GET_UBOOL(Z_Param_PlaySound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlaySoundAtRotatingActors(Z_Param_PlaySound); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRotatingActorRates) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRotatingActorRates(Z_Param_Rate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleAllRotators) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleAllRotators(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveGame(); \
		P_NATIVE_END; \
	}


#define FirstGame_Source_FirstGame_MainCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend struct Z_Construct_UClass_AMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter, ABaseCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirstGame"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter)


#define FirstGame_Source_FirstGame_MainCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend struct Z_Construct_UClass_AMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter, ABaseCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirstGame"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter)


#define FirstGame_Source_FirstGame_MainCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCharacter(AMainCharacter&&); \
	NO_API AMainCharacter(const AMainCharacter&); \
public:


#define FirstGame_Source_FirstGame_MainCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCharacter(AMainCharacter&&); \
	NO_API AMainCharacter(const AMainCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainCharacter)


#define FirstGame_Source_FirstGame_MainCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMainCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AMainCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__MainPlayerController() { return STRUCT_OFFSET(AMainCharacter, MainPlayerController); }


#define FirstGame_Source_FirstGame_MainCharacter_h_13_PROLOG
#define FirstGame_Source_FirstGame_MainCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstGame_Source_FirstGame_MainCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FirstGame_Source_FirstGame_MainCharacter_h_16_RPC_WRAPPERS \
	FirstGame_Source_FirstGame_MainCharacter_h_16_INCLASS \
	FirstGame_Source_FirstGame_MainCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstGame_Source_FirstGame_MainCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstGame_Source_FirstGame_MainCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FirstGame_Source_FirstGame_MainCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstGame_Source_FirstGame_MainCharacter_h_16_INCLASS_NO_PURE_DECLS \
	FirstGame_Source_FirstGame_MainCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTGAME_API UClass* StaticClass<class AMainCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstGame_Source_FirstGame_MainCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
