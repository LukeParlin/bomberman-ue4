// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN_Bomb_generated_h
#error "Bomb.generated.h already included, missing '#pragma once' in Bomb.h"
#endif
#define BOMBERMAN_Bomb_generated_h

#define Bomberman_Source_Bomberman_Bomb_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetExplosionRadius) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_rad); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetExplosionRadius(Z_Param_rad); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetExplosionRadius) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetExplosionRadius(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlayerID) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_id); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPlayerID(Z_Param_id); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetPlayerID(); \
		P_NATIVE_END; \
	}


#define Bomberman_Source_Bomberman_Bomb_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetExplosionRadius) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_rad); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetExplosionRadius(Z_Param_rad); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetExplosionRadius) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetExplosionRadius(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlayerID) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_id); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPlayerID(Z_Param_id); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetPlayerID(); \
		P_NATIVE_END; \
	}


#define Bomberman_Source_Bomberman_Bomb_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABomb(); \
	friend BOMBERMAN_API class UClass* Z_Construct_UClass_ABomb(); \
public: \
	DECLARE_CLASS(ABomb, ATileObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Bomberman"), NO_API) \
	DECLARE_SERIALIZER(ABomb) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Bomberman_Source_Bomberman_Bomb_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABomb(); \
	friend BOMBERMAN_API class UClass* Z_Construct_UClass_ABomb(); \
public: \
	DECLARE_CLASS(ABomb, ATileObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Bomberman"), NO_API) \
	DECLARE_SERIALIZER(ABomb) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Bomberman_Source_Bomberman_Bomb_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABomb(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABomb) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABomb); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABomb); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABomb(ABomb&&); \
	NO_API ABomb(const ABomb&); \
public:


#define Bomberman_Source_Bomberman_Bomb_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABomb(ABomb&&); \
	NO_API ABomb(const ABomb&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABomb); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABomb); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABomb)


#define Bomberman_Source_Bomberman_Bomb_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__playerID() { return STRUCT_OFFSET(ABomb, playerID); } \
	FORCEINLINE static uint32 __PPO__explosionRadius() { return STRUCT_OFFSET(ABomb, explosionRadius); }


#define Bomberman_Source_Bomberman_Bomb_h_12_PROLOG
#define Bomberman_Source_Bomberman_Bomb_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bomberman_Source_Bomberman_Bomb_h_15_PRIVATE_PROPERTY_OFFSET \
	Bomberman_Source_Bomberman_Bomb_h_15_RPC_WRAPPERS \
	Bomberman_Source_Bomberman_Bomb_h_15_INCLASS \
	Bomberman_Source_Bomberman_Bomb_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Bomberman_Source_Bomberman_Bomb_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bomberman_Source_Bomberman_Bomb_h_15_PRIVATE_PROPERTY_OFFSET \
	Bomberman_Source_Bomberman_Bomb_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Bomberman_Source_Bomberman_Bomb_h_15_INCLASS_NO_PURE_DECLS \
	Bomberman_Source_Bomberman_Bomb_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Bomberman_Source_Bomberman_Bomb_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
