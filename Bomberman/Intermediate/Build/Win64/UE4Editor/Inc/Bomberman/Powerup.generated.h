// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN_Powerup_generated_h
#error "Powerup.generated.h already included, missing '#pragma once' in Powerup.h"
#endif
#define BOMBERMAN_Powerup_generated_h

#define Bomberman_Source_Bomberman_Powerup_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSpeedIncrease) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetSpeedIncrease(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRangeIncrease) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetRangeIncrease(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBombIncrease) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetBombIncrease(); \
		P_NATIVE_END; \
	}


#define Bomberman_Source_Bomberman_Powerup_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSpeedIncrease) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetSpeedIncrease(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRangeIncrease) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetRangeIncrease(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBombIncrease) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetBombIncrease(); \
		P_NATIVE_END; \
	}


#define Bomberman_Source_Bomberman_Powerup_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPowerup(); \
	friend BOMBERMAN_API class UClass* Z_Construct_UClass_APowerup(); \
public: \
	DECLARE_CLASS(APowerup, ATileObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Bomberman"), NO_API) \
	DECLARE_SERIALIZER(APowerup) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Bomberman_Source_Bomberman_Powerup_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPowerup(); \
	friend BOMBERMAN_API class UClass* Z_Construct_UClass_APowerup(); \
public: \
	DECLARE_CLASS(APowerup, ATileObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Bomberman"), NO_API) \
	DECLARE_SERIALIZER(APowerup) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Bomberman_Source_Bomberman_Powerup_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APowerup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APowerup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APowerup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APowerup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APowerup(APowerup&&); \
	NO_API APowerup(const APowerup&); \
public:


#define Bomberman_Source_Bomberman_Powerup_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APowerup(APowerup&&); \
	NO_API APowerup(const APowerup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APowerup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APowerup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APowerup)


#define Bomberman_Source_Bomberman_Powerup_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bombIncrease() { return STRUCT_OFFSET(APowerup, bombIncrease); } \
	FORCEINLINE static uint32 __PPO__rangeIncrease() { return STRUCT_OFFSET(APowerup, rangeIncrease); } \
	FORCEINLINE static uint32 __PPO__speedIncrease() { return STRUCT_OFFSET(APowerup, speedIncrease); }


#define Bomberman_Source_Bomberman_Powerup_h_12_PROLOG
#define Bomberman_Source_Bomberman_Powerup_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bomberman_Source_Bomberman_Powerup_h_15_PRIVATE_PROPERTY_OFFSET \
	Bomberman_Source_Bomberman_Powerup_h_15_RPC_WRAPPERS \
	Bomberman_Source_Bomberman_Powerup_h_15_INCLASS \
	Bomberman_Source_Bomberman_Powerup_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Bomberman_Source_Bomberman_Powerup_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bomberman_Source_Bomberman_Powerup_h_15_PRIVATE_PROPERTY_OFFSET \
	Bomberman_Source_Bomberman_Powerup_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Bomberman_Source_Bomberman_Powerup_h_15_INCLASS_NO_PURE_DECLS \
	Bomberman_Source_Bomberman_Powerup_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Bomberman_Source_Bomberman_Powerup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
