// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATileObject;
#ifdef BOMBERMAN_Tile_generated_h
#error "Tile.generated.h already included, missing '#pragma once' in Tile.h"
#endif
#define BOMBERMAN_Tile_generated_h

#define Bomberman_Source_Bomberman_Tile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetChildObject) \
	{ \
		P_GET_OBJECT(ATileObject,Z_Param_ch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetChildObject(Z_Param_ch); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetChildObject) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ATileObject**)Z_Param__Result=this->GetChildObject(); \
		P_NATIVE_END; \
	}


#define Bomberman_Source_Bomberman_Tile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetChildObject) \
	{ \
		P_GET_OBJECT(ATileObject,Z_Param_ch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetChildObject(Z_Param_ch); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetChildObject) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ATileObject**)Z_Param__Result=this->GetChildObject(); \
		P_NATIVE_END; \
	}


#define Bomberman_Source_Bomberman_Tile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATile(); \
	friend BOMBERMAN_API class UClass* Z_Construct_UClass_ATile(); \
public: \
	DECLARE_CLASS(ATile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Bomberman"), NO_API) \
	DECLARE_SERIALIZER(ATile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Bomberman_Source_Bomberman_Tile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATile(); \
	friend BOMBERMAN_API class UClass* Z_Construct_UClass_ATile(); \
public: \
	DECLARE_CLASS(ATile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Bomberman"), NO_API) \
	DECLARE_SERIALIZER(ATile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Bomberman_Source_Bomberman_Tile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATile(ATile&&); \
	NO_API ATile(const ATile&); \
public:


#define Bomberman_Source_Bomberman_Tile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATile(ATile&&); \
	NO_API ATile(const ATile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATile)


#define Bomberman_Source_Bomberman_Tile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__childObject() { return STRUCT_OFFSET(ATile, childObject); }


#define Bomberman_Source_Bomberman_Tile_h_12_PROLOG
#define Bomberman_Source_Bomberman_Tile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bomberman_Source_Bomberman_Tile_h_15_PRIVATE_PROPERTY_OFFSET \
	Bomberman_Source_Bomberman_Tile_h_15_RPC_WRAPPERS \
	Bomberman_Source_Bomberman_Tile_h_15_INCLASS \
	Bomberman_Source_Bomberman_Tile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Bomberman_Source_Bomberman_Tile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bomberman_Source_Bomberman_Tile_h_15_PRIVATE_PROPERTY_OFFSET \
	Bomberman_Source_Bomberman_Tile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Bomberman_Source_Bomberman_Tile_h_15_INCLASS_NO_PURE_DECLS \
	Bomberman_Source_Bomberman_Tile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Bomberman_Source_Bomberman_Tile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
