// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FIntPoint;
#ifdef BOMBERMAN_BombermanGameModeBase_generated_h
#error "BombermanGameModeBase.generated.h already included, missing '#pragma once' in BombermanGameModeBase.h"
#endif
#define BOMBERMAN_BombermanGameModeBase_generated_h

#define Bomberman_Source_Bomberman_BombermanGameModeBase_h_28_GENERATED_BODY \
	friend BOMBERMAN_API class UScriptStruct* Z_Construct_UScriptStruct_FMapRow(); \
	BOMBERMAN_API static class UScriptStruct* StaticStruct();


#define Bomberman_Source_Bomberman_BombermanGameModeBase_h_50_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTileCoords) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_pos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FIntPoint*)Z_Param__Result=this->GetTileCoords(Z_Param_pos); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateLevel) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_levelWidth); \
		P_GET_PROPERTY(UIntProperty,Z_Param_levelHeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GenerateLevel(Z_Param_levelWidth,Z_Param_levelHeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearTile) \
	{ \
		P_GET_STRUCT(FIntPoint,Z_Param_tileCoord); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearTile(Z_Param_tileCoord); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropPowerup) \
	{ \
		P_GET_STRUCT(FIntPoint,Z_Param_powerupCoord); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DropPowerup(Z_Param_powerupCoord); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExplodeBomb) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_playerID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_radius); \
		P_GET_STRUCT(FIntPoint,Z_Param_bombCoord); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ExplodeBomb(Z_Param_playerID,Z_Param_radius,Z_Param_bombCoord); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropBomb) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_playerID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_radius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DropBomb(Z_Param_playerID,Z_Param_radius); \
		P_NATIVE_END; \
	}


#define Bomberman_Source_Bomberman_BombermanGameModeBase_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTileCoords) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_pos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FIntPoint*)Z_Param__Result=this->GetTileCoords(Z_Param_pos); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateLevel) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_levelWidth); \
		P_GET_PROPERTY(UIntProperty,Z_Param_levelHeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GenerateLevel(Z_Param_levelWidth,Z_Param_levelHeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearTile) \
	{ \
		P_GET_STRUCT(FIntPoint,Z_Param_tileCoord); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearTile(Z_Param_tileCoord); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropPowerup) \
	{ \
		P_GET_STRUCT(FIntPoint,Z_Param_powerupCoord); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DropPowerup(Z_Param_powerupCoord); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExplodeBomb) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_playerID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_radius); \
		P_GET_STRUCT(FIntPoint,Z_Param_bombCoord); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ExplodeBomb(Z_Param_playerID,Z_Param_radius,Z_Param_bombCoord); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropBomb) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_playerID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_radius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DropBomb(Z_Param_playerID,Z_Param_radius); \
		P_NATIVE_END; \
	}


#define Bomberman_Source_Bomberman_BombermanGameModeBase_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABombermanGameModeBase(); \
	friend BOMBERMAN_API class UClass* Z_Construct_UClass_ABombermanGameModeBase(); \
public: \
	DECLARE_CLASS(ABombermanGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Bomberman"), NO_API) \
	DECLARE_SERIALIZER(ABombermanGameModeBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Bomberman_Source_Bomberman_BombermanGameModeBase_h_50_INCLASS \
private: \
	static void StaticRegisterNativesABombermanGameModeBase(); \
	friend BOMBERMAN_API class UClass* Z_Construct_UClass_ABombermanGameModeBase(); \
public: \
	DECLARE_CLASS(ABombermanGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Bomberman"), NO_API) \
	DECLARE_SERIALIZER(ABombermanGameModeBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Bomberman_Source_Bomberman_BombermanGameModeBase_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABombermanGameModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABombermanGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABombermanGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABombermanGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABombermanGameModeBase(ABombermanGameModeBase&&); \
	NO_API ABombermanGameModeBase(const ABombermanGameModeBase&); \
public:


#define Bomberman_Source_Bomberman_BombermanGameModeBase_h_50_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABombermanGameModeBase(ABombermanGameModeBase&&); \
	NO_API ABombermanGameModeBase(const ABombermanGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABombermanGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABombermanGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABombermanGameModeBase)


#define Bomberman_Source_Bomberman_BombermanGameModeBase_h_50_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpawnP1() { return STRUCT_OFFSET(ABombermanGameModeBase, SpawnP1); } \
	FORCEINLINE static uint32 __PPO__SpawnP2() { return STRUCT_OFFSET(ABombermanGameModeBase, SpawnP2); } \
	FORCEINLINE static uint32 __PPO__playerSpawnOffset() { return STRUCT_OFFSET(ABombermanGameModeBase, playerSpawnOffset); } \
	FORCEINLINE static uint32 __PPO__SpawnTile() { return STRUCT_OFFSET(ABombermanGameModeBase, SpawnTile); } \
	FORCEINLINE static uint32 __PPO__SpawnWall() { return STRUCT_OFFSET(ABombermanGameModeBase, SpawnWall); } \
	FORCEINLINE static uint32 __PPO__SpawnBreakable() { return STRUCT_OFFSET(ABombermanGameModeBase, SpawnBreakable); } \
	FORCEINLINE static uint32 __PPO__SpawnBomb() { return STRUCT_OFFSET(ABombermanGameModeBase, SpawnBomb); } \
	FORCEINLINE static uint32 __PPO__SpawnExplosionEffect() { return STRUCT_OFFSET(ABombermanGameModeBase, SpawnExplosionEffect); } \
	FORCEINLINE static uint32 __PPO__SpawnPowerups() { return STRUCT_OFFSET(ABombermanGameModeBase, SpawnPowerups); } \
	FORCEINLINE static uint32 __PPO__mapSize() { return STRUCT_OFFSET(ABombermanGameModeBase, mapSize); } \
	FORCEINLINE static uint32 __PPO__mapTiles() { return STRUCT_OFFSET(ABombermanGameModeBase, mapTiles); } \
	FORCEINLINE static uint32 __PPO__players() { return STRUCT_OFFSET(ABombermanGameModeBase, players); } \
	FORCEINLINE static uint32 __PPO__playerControllers() { return STRUCT_OFFSET(ABombermanGameModeBase, playerControllers); }


#define Bomberman_Source_Bomberman_BombermanGameModeBase_h_47_PROLOG
#define Bomberman_Source_Bomberman_BombermanGameModeBase_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bomberman_Source_Bomberman_BombermanGameModeBase_h_50_PRIVATE_PROPERTY_OFFSET \
	Bomberman_Source_Bomberman_BombermanGameModeBase_h_50_RPC_WRAPPERS \
	Bomberman_Source_Bomberman_BombermanGameModeBase_h_50_INCLASS \
	Bomberman_Source_Bomberman_BombermanGameModeBase_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Bomberman_Source_Bomberman_BombermanGameModeBase_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bomberman_Source_Bomberman_BombermanGameModeBase_h_50_PRIVATE_PROPERTY_OFFSET \
	Bomberman_Source_Bomberman_BombermanGameModeBase_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	Bomberman_Source_Bomberman_BombermanGameModeBase_h_50_INCLASS_NO_PURE_DECLS \
	Bomberman_Source_Bomberman_BombermanGameModeBase_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Bomberman_Source_Bomberman_BombermanGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
