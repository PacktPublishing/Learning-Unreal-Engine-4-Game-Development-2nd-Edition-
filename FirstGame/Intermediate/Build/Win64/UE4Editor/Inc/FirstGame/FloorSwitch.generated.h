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
#ifdef FIRSTGAME_FloorSwitch_generated_h
#error "FloorSwitch.generated.h already included, missing '#pragma once' in FloorSwitch.h"
#endif
#define FIRSTGAME_FloorSwitch_generated_h

#define FirstGame_Source_FirstGame_FloorSwitch_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateFloorSwitchLocations) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DoorLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SwitchLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateFloorSwitchLocations(Z_Param_DoorLocation,Z_Param_SwitchLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define FirstGame_Source_FirstGame_FloorSwitch_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateFloorSwitchLocations) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DoorLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SwitchLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateFloorSwitchLocations(Z_Param_DoorLocation,Z_Param_SwitchLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define FirstGame_Source_FirstGame_FloorSwitch_h_12_EVENT_PARMS
#define FirstGame_Source_FirstGame_FloorSwitch_h_12_CALLBACK_WRAPPERS
#define FirstGame_Source_FirstGame_FloorSwitch_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFloorSwitch(); \
	friend struct Z_Construct_UClass_AFloorSwitch_Statics; \
public: \
	DECLARE_CLASS(AFloorSwitch, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirstGame"), NO_API) \
	DECLARE_SERIALIZER(AFloorSwitch)


#define FirstGame_Source_FirstGame_FloorSwitch_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFloorSwitch(); \
	friend struct Z_Construct_UClass_AFloorSwitch_Statics; \
public: \
	DECLARE_CLASS(AFloorSwitch, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirstGame"), NO_API) \
	DECLARE_SERIALIZER(AFloorSwitch)


#define FirstGame_Source_FirstGame_FloorSwitch_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFloorSwitch(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFloorSwitch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFloorSwitch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFloorSwitch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFloorSwitch(AFloorSwitch&&); \
	NO_API AFloorSwitch(const AFloorSwitch&); \
public:


#define FirstGame_Source_FirstGame_FloorSwitch_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFloorSwitch(AFloorSwitch&&); \
	NO_API AFloorSwitch(const AFloorSwitch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFloorSwitch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFloorSwitch); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFloorSwitch)


#define FirstGame_Source_FirstGame_FloorSwitch_h_12_PRIVATE_PROPERTY_OFFSET
#define FirstGame_Source_FirstGame_FloorSwitch_h_9_PROLOG \
	FirstGame_Source_FirstGame_FloorSwitch_h_12_EVENT_PARMS


#define FirstGame_Source_FirstGame_FloorSwitch_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstGame_Source_FirstGame_FloorSwitch_h_12_PRIVATE_PROPERTY_OFFSET \
	FirstGame_Source_FirstGame_FloorSwitch_h_12_RPC_WRAPPERS \
	FirstGame_Source_FirstGame_FloorSwitch_h_12_CALLBACK_WRAPPERS \
	FirstGame_Source_FirstGame_FloorSwitch_h_12_INCLASS \
	FirstGame_Source_FirstGame_FloorSwitch_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstGame_Source_FirstGame_FloorSwitch_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstGame_Source_FirstGame_FloorSwitch_h_12_PRIVATE_PROPERTY_OFFSET \
	FirstGame_Source_FirstGame_FloorSwitch_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstGame_Source_FirstGame_FloorSwitch_h_12_CALLBACK_WRAPPERS \
	FirstGame_Source_FirstGame_FloorSwitch_h_12_INCLASS_NO_PURE_DECLS \
	FirstGame_Source_FirstGame_FloorSwitch_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTGAME_API UClass* StaticClass<class AFloorSwitch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstGame_Source_FirstGame_FloorSwitch_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
