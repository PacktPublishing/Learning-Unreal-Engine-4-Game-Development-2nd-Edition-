// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef FIRSTGAME_BaseCharacter_generated_h
#error "BaseCharacter.generated.h already included, missing '#pragma once' in BaseCharacter.h"
#endif
#define FIRSTGAME_BaseCharacter_generated_h

#define FirstGame_Source_FirstGame_BaseCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetIsAttacking) \
	{ \
		P_GET_UBOOL(Z_Param_Attacking); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsAttacking(Z_Param_Attacking); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeathEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeathEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeactivateCollision) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeactivateCollision(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateCollision) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActivateCollision(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSwordBoxBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SwordBoxBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define FirstGame_Source_FirstGame_BaseCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetIsAttacking) \
	{ \
		P_GET_UBOOL(Z_Param_Attacking); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsAttacking(Z_Param_Attacking); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeathEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeathEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeactivateCollision) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeactivateCollision(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateCollision) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActivateCollision(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSwordBoxBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SwordBoxBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define FirstGame_Source_FirstGame_BaseCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirstGame"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter)


#define FirstGame_Source_FirstGame_BaseCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirstGame"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter)


#define FirstGame_Source_FirstGame_BaseCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public:


#define FirstGame_Source_FirstGame_BaseCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseCharacter)


#define FirstGame_Source_FirstGame_BaseCharacter_h_12_PRIVATE_PROPERTY_OFFSET
#define FirstGame_Source_FirstGame_BaseCharacter_h_9_PROLOG
#define FirstGame_Source_FirstGame_BaseCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstGame_Source_FirstGame_BaseCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FirstGame_Source_FirstGame_BaseCharacter_h_12_RPC_WRAPPERS \
	FirstGame_Source_FirstGame_BaseCharacter_h_12_INCLASS \
	FirstGame_Source_FirstGame_BaseCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstGame_Source_FirstGame_BaseCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstGame_Source_FirstGame_BaseCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FirstGame_Source_FirstGame_BaseCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstGame_Source_FirstGame_BaseCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FirstGame_Source_FirstGame_BaseCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTGAME_API UClass* StaticClass<class ABaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstGame_Source_FirstGame_BaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
