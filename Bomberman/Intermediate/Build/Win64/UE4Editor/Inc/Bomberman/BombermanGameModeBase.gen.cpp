// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BombermanGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBombermanGameModeBase() {}
// Cross Module References
	BOMBERMAN_API UScriptStruct* Z_Construct_UScriptStruct_FMapRow();
	UPackage* Z_Construct_UPackage__Script_Bomberman();
	BOMBERMAN_API UClass* Z_Construct_UClass_ATile_NoRegister();
	BOMBERMAN_API UClass* Z_Construct_UClass_ABombermanGameModeBase_NoRegister();
	BOMBERMAN_API UClass* Z_Construct_UClass_ABombermanGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	BOMBERMAN_API UFunction* Z_Construct_UFunction_ABombermanGameModeBase_GenerateLevel();
	BOMBERMAN_API UFunction* Z_Construct_UFunction_ABombermanGameModeBase_GetTileCoords();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	BOMBERMAN_API UClass* Z_Construct_UClass_ATileObject_NoRegister();
// End Cross Module References
class UScriptStruct* FMapRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BOMBERMAN_API uint32 Get_Z_Construct_UScriptStruct_FMapRow_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapRow, Z_Construct_UPackage__Script_Bomberman(), TEXT("MapRow"), sizeof(FMapRow), Get_Z_Construct_UScriptStruct_FMapRow_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMapRow(FMapRow::StaticStruct, TEXT("/Script/Bomberman"), TEXT("MapRow"), false, nullptr, nullptr);
static struct FScriptStruct_Bomberman_StaticRegisterNativesFMapRow
{
	FScriptStruct_Bomberman_StaticRegisterNativesFMapRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MapRow")),new UScriptStruct::TCppStructOps<FMapRow>);
	}
} ScriptStruct_Bomberman_StaticRegisterNativesFMapRow;
	UScriptStruct* Z_Construct_UScriptStruct_FMapRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMapRow_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Bomberman();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MapRow"), sizeof(FMapRow), Get_Z_Construct_UScriptStruct_FMapRow_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "BombermanGameModeBase.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapRow>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rowTiles_MetaData[] = {
				{ "ModuleRelativePath", "BombermanGameModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_rowTiles = { UE4CodeGen_Private::EPropertyClass::Array, "rowTiles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMapRow, rowTiles), METADATA_PARAMS(NewProp_rowTiles_MetaData, ARRAY_COUNT(NewProp_rowTiles_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rowTiles_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "rowTiles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_rowTiles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_rowTiles_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Bomberman,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MapRow",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMapRow),
				alignof(FMapRow),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMapRow_CRC() { return 2946778168U; }
	void ABombermanGameModeBase::StaticRegisterNativesABombermanGameModeBase()
	{
		UClass* Class = ABombermanGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateLevel", (Native)&ABombermanGameModeBase::execGenerateLevel },
			{ "GetTileCoords", (Native)&ABombermanGameModeBase::execGetTileCoords },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ABombermanGameModeBase_GenerateLevel()
	{
		struct BombermanGameModeBase_eventGenerateLevel_Parms
		{
			int32 levelWidth;
			int32 levelHeight;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_levelHeight = { UE4CodeGen_Private::EPropertyClass::Int, "levelHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BombermanGameModeBase_eventGenerateLevel_Parms, levelHeight), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_levelWidth = { UE4CodeGen_Private::EPropertyClass::Int, "levelWidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BombermanGameModeBase_eventGenerateLevel_Parms, levelWidth), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_levelHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_levelWidth,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "BombermanGameModeBase.h" },
				{ "ToolTip", "Create the level from scratch: spawn the environment and the players" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABombermanGameModeBase, "GenerateLevel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, sizeof(BombermanGameModeBase_eventGenerateLevel_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABombermanGameModeBase_GetTileCoords()
	{
		struct BombermanGameModeBase_eventGetTileCoords_Parms
		{
			FVector pos;
			FIntPoint ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BombermanGameModeBase_eventGetTileCoords_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_pos = { UE4CodeGen_Private::EPropertyClass::Struct, "pos", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BombermanGameModeBase_eventGetTileCoords_Parms, pos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_pos,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "BombermanGameModeBase.h" },
				{ "ToolTip", "Translate a world position into tile coordinates on the map" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABombermanGameModeBase, "GetTileCoords", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00840401, sizeof(BombermanGameModeBase_eventGetTileCoords_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABombermanGameModeBase_NoRegister()
	{
		return ABombermanGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ABombermanGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Bomberman,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ABombermanGameModeBase_GenerateLevel, "GenerateLevel" }, // 1278586298
				{ &Z_Construct_UFunction_ABombermanGameModeBase_GetTileCoords, "GetTileCoords" }, // 2476320512
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "BombermanGameModeBase.h" },
				{ "ModuleRelativePath", "BombermanGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player2Controller_MetaData[] = {
				{ "Category", "BombermanGameModeBase" },
				{ "ModuleRelativePath", "BombermanGameModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player2Controller = { UE4CodeGen_Private::EPropertyClass::Object, "player2Controller", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ABombermanGameModeBase, player2Controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(NewProp_player2Controller_MetaData, ARRAY_COUNT(NewProp_player2Controller_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player1Controller_MetaData[] = {
				{ "Category", "BombermanGameModeBase" },
				{ "ModuleRelativePath", "BombermanGameModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player1Controller = { UE4CodeGen_Private::EPropertyClass::Object, "player1Controller", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ABombermanGameModeBase, player1Controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(NewProp_player1Controller_MetaData, ARRAY_COUNT(NewProp_player1Controller_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player2_MetaData[] = {
				{ "Category", "BombermanGameModeBase" },
				{ "ModuleRelativePath", "BombermanGameModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player2 = { UE4CodeGen_Private::EPropertyClass::Object, "player2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ABombermanGameModeBase, player2), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(NewProp_player2_MetaData, ARRAY_COUNT(NewProp_player2_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player1_MetaData[] = {
				{ "Category", "BombermanGameModeBase" },
				{ "ModuleRelativePath", "BombermanGameModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player1 = { UE4CodeGen_Private::EPropertyClass::Object, "player1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ABombermanGameModeBase, player1), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(NewProp_player1_MetaData, ARRAY_COUNT(NewProp_player1_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mapTiles_MetaData[] = {
				{ "Category", "BombermanGameModeBase" },
				{ "ModuleRelativePath", "BombermanGameModeBase.h" },
				{ "ToolTip", "MEMBER VARIABLES" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mapTiles = { UE4CodeGen_Private::EPropertyClass::Array, "mapTiles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ABombermanGameModeBase, mapTiles), METADATA_PARAMS(NewProp_mapTiles_MetaData, ARRAY_COUNT(NewProp_mapTiles_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_mapTiles_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mapTiles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMapRow, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mapSize_MetaData[] = {
				{ "Category", "BombermanGameModeBase" },
				{ "ModuleRelativePath", "BombermanGameModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_mapSize = { UE4CodeGen_Private::EPropertyClass::Struct, "mapSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(ABombermanGameModeBase, mapSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(NewProp_mapSize_MetaData, ARRAY_COUNT(NewProp_mapSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnBreakable_MetaData[] = {
				{ "Category", "BombermanGameModeBase" },
				{ "ModuleRelativePath", "BombermanGameModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpawnBreakable = { UE4CodeGen_Private::EPropertyClass::Class, "SpawnBreakable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0044000000000001, 1, nullptr, STRUCT_OFFSET(ABombermanGameModeBase, SpawnBreakable), Z_Construct_UClass_ATileObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_SpawnBreakable_MetaData, ARRAY_COUNT(NewProp_SpawnBreakable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnWall_MetaData[] = {
				{ "Category", "BombermanGameModeBase" },
				{ "ModuleRelativePath", "BombermanGameModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpawnWall = { UE4CodeGen_Private::EPropertyClass::Class, "SpawnWall", RF_Public|RF_Transient|RF_MarkAsNative, 0x0044000000000001, 1, nullptr, STRUCT_OFFSET(ABombermanGameModeBase, SpawnWall), Z_Construct_UClass_ATileObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_SpawnWall_MetaData, ARRAY_COUNT(NewProp_SpawnWall_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnTile_MetaData[] = {
				{ "Category", "BombermanGameModeBase" },
				{ "ModuleRelativePath", "BombermanGameModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpawnTile = { UE4CodeGen_Private::EPropertyClass::Class, "SpawnTile", RF_Public|RF_Transient|RF_MarkAsNative, 0x0044000000000001, 1, nullptr, STRUCT_OFFSET(ABombermanGameModeBase, SpawnTile), Z_Construct_UClass_ATile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_SpawnTile_MetaData, ARRAY_COUNT(NewProp_SpawnTile_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerSpawnOffset_MetaData[] = {
				{ "Category", "BombermanGameModeBase" },
				{ "ModuleRelativePath", "BombermanGameModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_playerSpawnOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "playerSpawnOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(ABombermanGameModeBase, playerSpawnOffset), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(NewProp_playerSpawnOffset_MetaData, ARRAY_COUNT(NewProp_playerSpawnOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnP2_MetaData[] = {
				{ "Category", "BombermanGameModeBase" },
				{ "ModuleRelativePath", "BombermanGameModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpawnP2 = { UE4CodeGen_Private::EPropertyClass::Class, "SpawnP2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0044000000000001, 1, nullptr, STRUCT_OFFSET(ABombermanGameModeBase, SpawnP2), Z_Construct_UClass_ACharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_SpawnP2_MetaData, ARRAY_COUNT(NewProp_SpawnP2_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnP1_MetaData[] = {
				{ "Category", "BombermanGameModeBase" },
				{ "ModuleRelativePath", "BombermanGameModeBase.h" },
				{ "ToolTip", "PROPERTIES TO BE SET IN THE EDITOR" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpawnP1 = { UE4CodeGen_Private::EPropertyClass::Class, "SpawnP1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0044000000000001, 1, nullptr, STRUCT_OFFSET(ABombermanGameModeBase, SpawnP1), Z_Construct_UClass_ACharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_SpawnP1_MetaData, ARRAY_COUNT(NewProp_SpawnP1_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_player2Controller,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_player1Controller,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_player2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_player1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_mapTiles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_mapTiles_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_mapSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnBreakable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnWall,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnTile,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_playerSpawnOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnP2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnP1,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABombermanGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABombermanGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABombermanGameModeBase, 3583219611);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABombermanGameModeBase(Z_Construct_UClass_ABombermanGameModeBase, &ABombermanGameModeBase::StaticClass, TEXT("/Script/Bomberman"), TEXT("ABombermanGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABombermanGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
