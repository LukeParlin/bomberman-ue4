// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIntPoint;
#ifdef BOMBERMAN_TileObject_generated_h
#error "TileObject.generated.h already included, missing '#pragma once' in TileObject.h"
#endif
#define BOMBERMAN_TileObject_generated_h

#define Bomberman_Source_Bomberman_TileObject_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetTileCoord) \
	{ \
		P_GET_STRUCT(FIntPoint,Z_Param_tc); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetTileCoord(Z_Param_tc); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTileCoord) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FIntPoint*)Z_Param__Result=this->GetTileCoord(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDestructible) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetDestructible(); \
		P_NATIVE_END; \
	}


#define Bomberman_Source_Bomberman_TileObject_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetTileCoord) \
	{ \
		P_GET_STRUCT(FIntPoint,Z_Param_tc); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetTileCoord(Z_Param_tc); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTileCoord) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FIntPoint*)Z_Param__Result=this->GetTileCoord(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDestructible) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetDestructible(); \
		P_NATIVE_END; \
	}


#define Bomberman_Source_Bomberman_TileObject_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATileObject(); \
	friend BOMBERMAN_API class UClass* Z_Construct_UClass_ATileObject(); \
public: \
	DECLARE_CLASS(ATileObject, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Bomberman"), NO_API) \
	DECLARE_SERIALIZER(ATileObject) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Bomberman_Source_Bomberman_TileObject_h_21_INCLASS \
private: \
	static void StaticRegisterNativesATileObject(); \
	friend BOMBERMAN_API class UClass* Z_Construct_UClass_ATileObject(); \
public: \
	DECLARE_CLASS(ATileObject, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Bomberman"), NO_API) \
	DECLARE_SERIALIZER(ATileObject) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Bomberman_Source_Bomberman_TileObject_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATileObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATileObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATileObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATileObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATileObject(ATileObject&&); \
	NO_API ATileObject(const ATileObject&); \
public:


#define Bomberman_Source_Bomberman_TileObject_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATileObject(ATileObject&&); \
	NO_API ATileObject(const ATileObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATileObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATileObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATileObject)


#define Bomberman_Source_Bomberman_TileObject_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__isDestructible() { return STRUCT_OFFSET(ATileObject, isDestructible); } \
	FORCEINLINE static uint32 __PPO__tileCoord() { return STRUCT_OFFSET(ATileObject, tileCoord); }


#define Bomberman_Source_Bomberman_TileObject_h_18_PROLOG
#define Bomberman_Source_Bomberman_TileObject_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bomberman_Source_Bomberman_TileObject_h_21_PRIVATE_PROPERTY_OFFSET \
	Bomberman_Source_Bomberman_TileObject_h_21_RPC_WRAPPERS \
	Bomberman_Source_Bomberman_TileObject_h_21_INCLASS \
	Bomberman_Source_Bomberman_TileObject_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Bomberman_Source_Bomberman_TileObject_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bomberman_Source_Bomberman_TileObject_h_21_PRIVATE_PROPERTY_OFFSET \
	Bomberman_Source_Bomberman_TileObject_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Bomberman_Source_Bomberman_TileObject_h_21_INCLASS_NO_PURE_DECLS \
	Bomberman_Source_Bomberman_TileObject_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Bomberman_Source_Bomberman_TileObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
