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
	BOMBERMAN_API UFunction* Z_Construct_UFunction_ABombermanGameModeBase_ClearTile();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	BOMBERMAN_API UFunction* Z_Construct_UFunction_ABombermanGameModeBase_DropBomb();
	BOMBERMAN_API UFunction* Z_Construct_UFunction_ABombermanGameModeBase_DropPowerup();
	BOMBERMAN_API UFunction* Z_Construct_UFunction_ABombermanGameModeBase_ExplodeBomb();
	BOMBERMAN_API UFunction* Z_Construct_UFunction_ABombermanGameModeBase_GenerateLevel();
	BOMBERMAN_API UFunction* Z_Construct_UFunction_ABombermanGameModeBase_GetTileCoords();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	BOMBERMAN_API UFunction* Z_Construct_UFunction_ABombermanGameModeBase_ResetGame();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	BOMBERMAN_API UClass* Z_Construct_UClass_ABombermanCharacter_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	BOMBERMAN_API UClass* Z_Construct_UClass_APowerup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BOMBERMAN_API UClass* Z_Construct_UClass_ABomb_NoRegister();
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
				{ "ToolTip", "*      A small support struct for our map grid, representing a single row of map tiles\n*\n*      Unreal doesn't allow 2-dimentionsl TArrays.\n*      We get around that limitation by wrapping our inner TArray inside this struct." },
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
	uint32 Get_Z_Construct_UScriptStruct_FMapRow_CRC() { return 2658900408U; }
	void ABombermanGameModeBase::StaticRegisterNativesABombermanGameModeBase()
	{
		UClass* Class = ABombermanGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearTile", (Native)&ABombermanGameModeBase::execClearTile },
			{ "DropBomb", (Native)&ABombermanGameModeBase::execDropBomb },
			{ "DropPowerup", (Native)&ABombermanGameModeBase::execDropPowerup },
			{ "ExplodeBomb", (Native)&ABombermanGameModeBase::execExplodeBomb },
			{ "GenerateLevel", (Native)&ABombermanGameModeBase::execGenerateLevel },
			{ "GetTileCoords", (Native)&ABombermanGameModeBase::execGetTileCoords },
			{ "ResetGame", (Native)&ABombermanGameModeBase::execResetGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ABombermanGameModeBase_ClearTile()
	{
		struct BombermanGameModeBase_eventClearTile_Parms
		{
			FIntPoint tileCoord;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_tileCoord = { UE4CodeGen_Private::EPropertyClass::Struct, "tileCoord", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BombermanGameModeBase_eventClearTile_Parms, tileCoord), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_tileCoord,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "BombermanGameModeBase.h" },
				{ "ToolTip", "Clear a tile after its childObject has been destroyed" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABombermanGameModeBase, "ClearTile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(BombermanGameModeBase_eventClearTile_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABombermanGameModeBase_DropBomb()
	{
		struct BombermanGameModeBase_eventDropBomb_Parms
		{
			int32 playerID;
			int32 radius;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_radius = { UE4CodeGen_Private::EPropertyClass::Int, "radius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BombermanGameModeBase_eventDropBomb_Parms, radius), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerID = { UE4CodeGen_Private::EPropertyClass::Int, "playerID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BombermanGameModeBase_eventDropBomb_Parms, playerID), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_radius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_playerID,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "BombermanGameModeBase.h" },
				{ "ToolTip", "Spawn a bomb at a player's position and subtract a bomb from that player" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABombermanGameModeBase, "DropBomb", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BombermanGameModeBase_eventDropBomb_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABombermanGameModeBase_DropPowerup()
	{
		struct BombermanGameModeBase_eventDropPowerup_Parms
		{
			FIntPoint powerupCoord;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_powerupCoord = { UE4CodeGen_Private::EPropertyClass::Struct, "powerupCoord", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BombermanGameModeBase_eventDropPowerup_Parms, powerupCoord), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_powerupCoord,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "BombermanGameModeBase.h" },
				{ "ToolTip", "Spawn a powerup at a breakable wall's position" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABombermanGameModeBase, "DropPowerup", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(BombermanGameModeBase_eventDropPowerup_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABombermanGameModeBase_ExplodeBomb()
	{
		struct BombermanGameModeBase_eventExplodeBomb_Parms
		{
			int32 playerID;
			int32 radius;
			FIntPoint bombCoord;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_bombCoord = { UE4CodeGen_Private::EPropertyClass::Struct, "bombCoord", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BombermanGameModeBase_eventExplodeBomb_Parms, bombCoord), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_radius = { UE4CodeGen_Private::EPropertyClass::Int, "radius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BombermanGameModeBase_eventExplodeBomb_Parms, radius), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerID = { UE4CodeGen_Private::EPropertyClass::Int, "playerID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BombermanGameModeBase_eventExplodeBomb_Parms, playerID), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bombCoord,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_radius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_playerID,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "BombermanGameModeBase.h" },
				{ "ToolTip", "Trigger a bomb explosion from a specified point and refund the player's bomb" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABombermanGameModeBase, "ExplodeBomb", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(BombermanGameModeBase_eventExplodeBomb_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
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
	UFunction* Z_Construct_UFunction_ABombermanGameModeBase_ResetGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "BombermanGameModeBase.h" },
				{ "ToolTip", "Reset the game - somebody has won, and has chosen to play again" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABombermanGameModeBase, "ResetGame", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
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
				{ &Z_Construct_UFunction_ABombermanGameModeBase_ClearTile, "ClearTile" }, // 1616297443
				{ &Z_Construct_UFunction_ABombermanGameModeBase_DropBomb, "DropBomb" }, // 1301063802
				{ &Z_Construct_UFunction_ABombermanGameModeBase_DropPowerup, "DropPowerup" }, // 3819030760
				{ &Z_Construct_UFunction_ABombermanGameModeBase_ExplodeBomb, "ExplodeBomb" }, // 3717985365
				{ &Z_Construct_UFunction_ABombermanGameModeBase_GenerateLevel, "GenerateLevel" }, // 1278586298
				{ &Z_Construct_UFunction_ABombermanGameModeBase_GetTileCoords, "GetTileCoords" }, // 2476320512
				{ &Z_Construct_UFunction_ABombermanGameModeBase_ResetGame, "ResetGame" }, // 3209099014
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "BombermanGameModeBase.h" },
				{ "ModuleRelativePath", "BombermanGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
				{ "ToolTip", "*     Our own GameModeBase class - the main game class!\n*\n*     This class functions like a game manager, and is responsible for:\n*     > Generating the map grid\n*     > Spawning players\n*     > Spawning bombs and powerups\n*      > Handling bomb explosions" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerControllers_MetaData[] = {
				{ "Category", "BombermanGameModeBase" },
				{ "ModuleRelativePath", "BombermanGameModeBase.h" },
				{ "ToolTip", "A TArray of pointers to our Players. Currently we only use two players, but we could easily support more!" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_playerControllers = { UE4CodeGen_Private::EPropertyClass::Array, "playerControllers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020015, 1, nullptr, STRUCT_OFFSET(ABombermanGameModeBase, playerControllers), METADATA_PARAMS(NewProp_playerControllers_MetaData, ARRAY_COUNT(NewProp_playerControllers_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerControllers_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "playerControllers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000020000, 1, nullptr, 0, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_players_MetaData[] = {
				{ "Category", "BombermanGameModeBase" },
				{ "ModuleRelativePath", "BombermanGameModeBase.h" },
				{ "ToolTip", "Our \"2D TArray\" containing every tile in the level. In actuality, it's a TArray of FMapRow structs." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_players = { UE4CodeGen_Private::EPropertyClass::Array, "players", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020015, 1, nullptr, STRUCT_OFFSET(ABombermanGameModeBase, players), METADATA_PARAMS(NewProp_players_MetaData, ARRAY_COUNT(NewProp_players_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_players_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "players", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000020000, 1, nullptr, 0, Z_Construct_UClass_ABombermanCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mapTiles_MetaData[] = {
				{ "Category", "BombermanGameModeBase" },
				{ "ModuleRelativePath", "BombermanGameModeBase.h" },
				{ "ToolTip", "MEMBER VARIABLES" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mapTiles = { UE4CodeGen_Private::EPropertyClass::Array, "mapTiles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020001, 1, nullptr, STRUCT_OFFSET(ABombermanGameModeBase, mapTiles), METADATA_PARAMS(NewProp_mapTiles_MetaData, ARRAY_COUNT(NewProp_mapTiles_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_mapTiles_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mapTiles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMapRow, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mapSize_MetaData[] = {
				{ "Category", "BombermanGameModeBase" },
				{ "ModuleRelativePath", "BombermanGameModeBase.h" },
				{ "ToolTip", "This Array should contain (3) Blueprints:\n> The bomb powerup Blueprint\n> The explosion radius powerup Blueprint\n> The speed increase powerup Blueprint" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_mapSize = { UE4CodeGen_Private::EPropertyClass::Struct, "mapSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABombermanGameModeBase, mapSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(NewProp_mapSize_MetaData, ARRAY_COUNT(NewProp_mapSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnPowerups_MetaData[] = {
				{ "Category", "BombermanGameModeBase" },
				{ "ModuleRelativePath", "BombermanGameModeBase.h" },
				{ "ToolTip", "Blueprint for the explosion effect which spawns after bombs explods" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnPowerups = { UE4CodeGen_Private::EPropertyClass::Array, "SpawnPowerups", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000000001, 1, nullptr, STRUCT_OFFSET(ABombermanGameModeBase, SpawnPowerups), METADATA_PARAMS(NewProp_SpawnPowerups_MetaData, ARRAY_COUNT(NewProp_SpawnPowerups_MetaData)) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpawnPowerups_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "SpawnPowerups", RF_Public|RF_Transient|RF_MarkAsNative, 0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_APowerup_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnExplosionEffect_MetaData[] = {
				{ "Category", "BombermanGameModeBase" },
				{ "ModuleRelativePath", "BombermanGameModeBase.h" },
				{ "ToolTip", "Blueprint for the bomb" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpawnExplosionEffect = { UE4CodeGen_Private::EPropertyClass::Class, "SpawnExplosionEffect", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000000001, 1, nullptr, STRUCT_OFFSET(ABombermanGameModeBase, SpawnExplosionEffect), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_SpawnExplosionEffect_MetaData, ARRAY_COUNT(NewProp_SpawnExplosionEffect_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnBomb_MetaData[] = {
				{ "Category", "BombermanGameModeBase" },
				{ "ModuleRelativePath", "BombermanGameModeBase.h" },
				{ "ToolTip", "Blueprint for a breakable wall" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpawnBomb = { UE4CodeGen_Private::EPropertyClass::Class, "SpawnBomb", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000000001, 1, nullptr, STRUCT_OFFSET(ABombermanGameModeBase, SpawnBomb), Z_Construct_UClass_ABomb_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_SpawnBomb_MetaData, ARRAY_COUNT(NewProp_SpawnBomb_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnBreakable_MetaData[] = {
				{ "Category", "BombermanGameModeBase" },
				{ "ModuleRelativePath", "BombermanGameModeBase.h" },
				{ "ToolTip", "Blueprint for an indestructible wall" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpawnBreakable = { UE4CodeGen_Private::EPropertyClass::Class, "SpawnBreakable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000000001, 1, nullptr, STRUCT_OFFSET(ABombermanGameModeBase, SpawnBreakable), Z_Construct_UClass_ATileObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_SpawnBreakable_MetaData, ARRAY_COUNT(NewProp_SpawnBreakable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnWall_MetaData[] = {
				{ "Category", "BombermanGameModeBase" },
				{ "ModuleRelativePath", "BombermanGameModeBase.h" },
				{ "ToolTip", "Blueprint for the blank tile" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpawnWall = { UE4CodeGen_Private::EPropertyClass::Class, "SpawnWall", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000000001, 1, nullptr, STRUCT_OFFSET(ABombermanGameModeBase, SpawnWall), Z_Construct_UClass_ATileObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_SpawnWall_MetaData, ARRAY_COUNT(NewProp_SpawnWall_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnTile_MetaData[] = {
				{ "Category", "BombermanGameModeBase" },
				{ "ModuleRelativePath", "BombermanGameModeBase.h" },
				{ "ToolTip", "X and Y distance from the corners at which the players spawn\nRed spawns from the bottom-left, Blue spawns from the top-right" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpawnTile = { UE4CodeGen_Private::EPropertyClass::Class, "SpawnTile", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000000001, 1, nullptr, STRUCT_OFFSET(ABombermanGameModeBase, SpawnTile), Z_Construct_UClass_ATile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_SpawnTile_MetaData, ARRAY_COUNT(NewProp_SpawnTile_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerSpawnOffset_MetaData[] = {
				{ "Category", "BombermanGameModeBase" },
				{ "ModuleRelativePath", "BombermanGameModeBase.h" },
				{ "ToolTip", "Blueprint for the Blue player character" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_playerSpawnOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "playerSpawnOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ABombermanGameModeBase, playerSpawnOffset), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(NewProp_playerSpawnOffset_MetaData, ARRAY_COUNT(NewProp_playerSpawnOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnP2_MetaData[] = {
				{ "Category", "BombermanGameModeBase" },
				{ "ModuleRelativePath", "BombermanGameModeBase.h" },
				{ "ToolTip", "Blueprint for the Red player character" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpawnP2 = { UE4CodeGen_Private::EPropertyClass::Class, "SpawnP2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000000001, 1, nullptr, STRUCT_OFFSET(ABombermanGameModeBase, SpawnP2), Z_Construct_UClass_ABombermanCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_SpawnP2_MetaData, ARRAY_COUNT(NewProp_SpawnP2_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnP1_MetaData[] = {
				{ "Category", "BombermanGameModeBase" },
				{ "ModuleRelativePath", "BombermanGameModeBase.h" },
				{ "ToolTip", "PROPERTIES TO BE SET IN THE EDITOR" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpawnP1 = { UE4CodeGen_Private::EPropertyClass::Class, "SpawnP1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000000001, 1, nullptr, STRUCT_OFFSET(ABombermanGameModeBase, SpawnP1), Z_Construct_UClass_ABombermanCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_SpawnP1_MetaData, ARRAY_COUNT(NewProp_SpawnP1_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_playerControllers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_playerControllers_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_players,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_players_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_mapTiles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_mapTiles_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_mapSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnPowerups,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnPowerups_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnExplosionEffect,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnBomb,
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
	IMPLEMENT_CLASS(ABombermanGameModeBase, 3945237379);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABombermanGameModeBase(Z_Construct_UClass_ABombermanGameModeBase, &ABombermanGameModeBase::StaticClass, TEXT("/Script/Bomberman"), TEXT("ABombermanGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABombermanGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
