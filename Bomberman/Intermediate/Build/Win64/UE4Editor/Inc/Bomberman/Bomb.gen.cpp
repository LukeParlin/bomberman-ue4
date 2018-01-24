// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Bomb.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomb() {}
// Cross Module References
	BOMBERMAN_API UClass* Z_Construct_UClass_ABomb_NoRegister();
	BOMBERMAN_API UClass* Z_Construct_UClass_ABomb();
	BOMBERMAN_API UClass* Z_Construct_UClass_ATileObject();
	UPackage* Z_Construct_UPackage__Script_Bomberman();
	BOMBERMAN_API UFunction* Z_Construct_UFunction_ABomb_GetExplosionRadius();
	BOMBERMAN_API UFunction* Z_Construct_UFunction_ABomb_GetPlayerID();
	BOMBERMAN_API UFunction* Z_Construct_UFunction_ABomb_SetExplosionRadius();
	BOMBERMAN_API UFunction* Z_Construct_UFunction_ABomb_SetPlayerID();
// End Cross Module References
	void ABomb::StaticRegisterNativesABomb()
	{
		UClass* Class = ABomb::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetExplosionRadius", (Native)&ABomb::execGetExplosionRadius },
			{ "GetPlayerID", (Native)&ABomb::execGetPlayerID },
			{ "SetExplosionRadius", (Native)&ABomb::execSetExplosionRadius },
			{ "SetPlayerID", (Native)&ABomb::execSetPlayerID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ABomb_GetExplosionRadius()
	{
		struct Bomb_eventGetExplosionRadius_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Bomb_eventGetExplosionRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Bomb.h" },
				{ "ToolTip", "Get and set the explosion radius of this bomb" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomb, "GetExplosionRadius", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Bomb_eventGetExplosionRadius_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABomb_GetPlayerID()
	{
		struct Bomb_eventGetPlayerID_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Bomb_eventGetPlayerID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Bomb.h" },
				{ "ToolTip", "Get and set the playerID this bomb belongs to" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomb, "GetPlayerID", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Bomb_eventGetPlayerID_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABomb_SetExplosionRadius()
	{
		struct Bomb_eventSetExplosionRadius_Parms
		{
			int32 rad;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_rad = { UE4CodeGen_Private::EPropertyClass::Int, "rad", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Bomb_eventSetExplosionRadius_Parms, rad), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_rad,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Bomb.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomb, "SetExplosionRadius", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Bomb_eventSetExplosionRadius_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABomb_SetPlayerID()
	{
		struct Bomb_eventSetPlayerID_Parms
		{
			int32 id;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_id = { UE4CodeGen_Private::EPropertyClass::Int, "id", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Bomb_eventSetPlayerID_Parms, id), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_id,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Bomb.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomb, "SetPlayerID", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Bomb_eventSetPlayerID_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABomb_NoRegister()
	{
		return ABomb::StaticClass();
	}
	UClass* Z_Construct_UClass_ABomb()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ATileObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Bomberman,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ABomb_GetExplosionRadius, "GetExplosionRadius" }, // 3118029505
				{ &Z_Construct_UFunction_ABomb_GetPlayerID, "GetPlayerID" }, // 4244191976
				{ &Z_Construct_UFunction_ABomb_SetExplosionRadius, "SetExplosionRadius" }, // 3378105489
				{ &Z_Construct_UFunction_ABomb_SetPlayerID, "SetPlayerID" }, // 1356855528
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Bomb.h" },
				{ "ModuleRelativePath", "Bomb.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_explosionRadius_MetaData[] = {
				{ "Category", "Bomb" },
				{ "ModuleRelativePath", "Bomb.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_explosionRadius = { UE4CodeGen_Private::EPropertyClass::Int, "explosionRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020005, 1, nullptr, STRUCT_OFFSET(ABomb, explosionRadius), METADATA_PARAMS(NewProp_explosionRadius_MetaData, ARRAY_COUNT(NewProp_explosionRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerID_MetaData[] = {
				{ "Category", "Bomb" },
				{ "ModuleRelativePath", "Bomb.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerID = { UE4CodeGen_Private::EPropertyClass::Int, "playerID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020005, 1, nullptr, STRUCT_OFFSET(ABomb, playerID), METADATA_PARAMS(NewProp_playerID_MetaData, ARRAY_COUNT(NewProp_playerID_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_explosionRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_playerID,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABomb>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABomb::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(ABomb, 3251168050);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABomb(Z_Construct_UClass_ABomb, &ABomb::StaticClass, TEXT("/Script/Bomberman"), TEXT("ABomb"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABomb);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
