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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
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
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "BombermanGameModeBase.h" },
				{ "ModuleRelativePath", "BombermanGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mapTiles_MetaData[] = {
				{ "ModuleRelativePath", "BombermanGameModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mapTiles = { UE4CodeGen_Private::EPropertyClass::Array, "mapTiles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(ABombermanGameModeBase, mapTiles), METADATA_PARAMS(NewProp_mapTiles_MetaData, ARRAY_COUNT(NewProp_mapTiles_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_mapTiles_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mapTiles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMapRow, METADATA_PARAMS(nullptr, 0) };
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
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_mapTiles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_mapTiles_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_mapSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnBreakable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnWall,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnTile,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABombermanGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABombermanGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(ABombermanGameModeBase, 3049538086);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABombermanGameModeBase(Z_Construct_UClass_ABombermanGameModeBase, &ABombermanGameModeBase::StaticClass, TEXT("/Script/Bomberman"), TEXT("ABombermanGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABombermanGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
