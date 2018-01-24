// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BombermanCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBombermanCharacter() {}
// Cross Module References
	BOMBERMAN_API UClass* Z_Construct_UClass_ABombermanCharacter_NoRegister();
	BOMBERMAN_API UClass* Z_Construct_UClass_ABombermanCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Bomberman();
	BOMBERMAN_API UFunction* Z_Construct_UFunction_ABombermanCharacter_AddBomb();
	BOMBERMAN_API UFunction* Z_Construct_UFunction_ABombermanCharacter_DropBomb();
	BOMBERMAN_API UFunction* Z_Construct_UFunction_ABombermanCharacter_GetNumBombs();
	BOMBERMAN_API UFunction* Z_Construct_UFunction_ABombermanCharacter_GetPlayerID();
	BOMBERMAN_API UFunction* Z_Construct_UFunction_ABombermanCharacter_SetNumBombs();
	BOMBERMAN_API UFunction* Z_Construct_UFunction_ABombermanCharacter_SetPlayerID();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
// End Cross Module References
	void ABombermanCharacter::StaticRegisterNativesABombermanCharacter()
	{
		UClass* Class = ABombermanCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddBomb", (Native)&ABombermanCharacter::execAddBomb },
			{ "DropBomb", (Native)&ABombermanCharacter::execDropBomb },
			{ "GetNumBombs", (Native)&ABombermanCharacter::execGetNumBombs },
			{ "GetPlayerID", (Native)&ABombermanCharacter::execGetPlayerID },
			{ "SetNumBombs", (Native)&ABombermanCharacter::execSetNumBombs },
			{ "SetPlayerID", (Native)&ABombermanCharacter::execSetPlayerID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ABombermanCharacter_AddBomb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "BombermanCharacter.h" },
				{ "ToolTip", "Add one to numBombs" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABombermanCharacter, "AddBomb", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABombermanCharacter_DropBomb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "BombermanCharacter.h" },
				{ "ToolTip", "Subtract one from numBombs" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABombermanCharacter, "DropBomb", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABombermanCharacter_GetNumBombs()
	{
		struct BombermanCharacter_eventGetNumBombs_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BombermanCharacter_eventGetNumBombs_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "BombermanCharacter.h" },
				{ "ToolTip", "Get and set the player's number of bombs" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABombermanCharacter, "GetNumBombs", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(BombermanCharacter_eventGetNumBombs_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABombermanCharacter_GetPlayerID()
	{
		struct BombermanCharacter_eventGetPlayerID_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BombermanCharacter_eventGetPlayerID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "BombermanCharacter.h" },
				{ "ToolTip", "Get and set the player's ID" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABombermanCharacter, "GetPlayerID", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(BombermanCharacter_eventGetPlayerID_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABombermanCharacter_SetNumBombs()
	{
		struct BombermanCharacter_eventSetNumBombs_Parms
		{
			int32 num;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_num = { UE4CodeGen_Private::EPropertyClass::Int, "num", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BombermanCharacter_eventSetNumBombs_Parms, num), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_num,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "BombermanCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABombermanCharacter, "SetNumBombs", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(BombermanCharacter_eventSetNumBombs_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABombermanCharacter_SetPlayerID()
	{
		struct BombermanCharacter_eventSetPlayerID_Parms
		{
			int32 id;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_id = { UE4CodeGen_Private::EPropertyClass::Int, "id", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BombermanCharacter_eventSetPlayerID_Parms, id), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_id,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "BombermanCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABombermanCharacter, "SetPlayerID", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(BombermanCharacter_eventSetPlayerID_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABombermanCharacter_NoRegister()
	{
		return ABombermanCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_ABombermanCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_Bomberman,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ABombermanCharacter_AddBomb, "AddBomb" }, // 3091676375
				{ &Z_Construct_UFunction_ABombermanCharacter_DropBomb, "DropBomb" }, // 2819391134
				{ &Z_Construct_UFunction_ABombermanCharacter_GetNumBombs, "GetNumBombs" }, // 198917563
				{ &Z_Construct_UFunction_ABombermanCharacter_GetPlayerID, "GetPlayerID" }, // 2092703435
				{ &Z_Construct_UFunction_ABombermanCharacter_SetNumBombs, "SetNumBombs" }, // 4068066114
				{ &Z_Construct_UFunction_ABombermanCharacter_SetPlayerID, "SetPlayerID" }, // 1068397535
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "BombermanCharacter.h" },
				{ "ModuleRelativePath", "BombermanCharacter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "BombermanCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveComponent = { UE4CodeGen_Private::EPropertyClass::Object, "MoveComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080008, 1, nullptr, STRUCT_OFFSET(ABombermanCharacter, MoveComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(NewProp_MoveComponent_MetaData, ARRAY_COUNT(NewProp_MoveComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_moveSpeed_MetaData[] = {
				{ "Category", "BombermanCharacter" },
				{ "ModuleRelativePath", "BombermanCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_moveSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "moveSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ABombermanCharacter, moveSpeed), METADATA_PARAMS(NewProp_moveSpeed_MetaData, ARRAY_COUNT(NewProp_moveSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bombRange_MetaData[] = {
				{ "Category", "BombermanCharacter" },
				{ "ModuleRelativePath", "BombermanCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_bombRange = { UE4CodeGen_Private::EPropertyClass::Int, "bombRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020005, 1, nullptr, STRUCT_OFFSET(ABombermanCharacter, bombRange), METADATA_PARAMS(NewProp_bombRange_MetaData, ARRAY_COUNT(NewProp_bombRange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_numBombs_MetaData[] = {
				{ "Category", "BombermanCharacter" },
				{ "ModuleRelativePath", "BombermanCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_numBombs = { UE4CodeGen_Private::EPropertyClass::Int, "numBombs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020005, 1, nullptr, STRUCT_OFFSET(ABombermanCharacter, numBombs), METADATA_PARAMS(NewProp_numBombs_MetaData, ARRAY_COUNT(NewProp_numBombs_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerID_MetaData[] = {
				{ "Category", "BombermanCharacter" },
				{ "ModuleRelativePath", "BombermanCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerID = { UE4CodeGen_Private::EPropertyClass::Int, "playerID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020015, 1, nullptr, STRUCT_OFFSET(ABombermanCharacter, playerID), METADATA_PARAMS(NewProp_playerID_MetaData, ARRAY_COUNT(NewProp_playerID_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_moveSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bombRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_numBombs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_playerID,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABombermanCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABombermanCharacter::StaticClass,
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
	IMPLEMENT_CLASS(ABombermanCharacter, 568609929);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABombermanCharacter(Z_Construct_UClass_ABombermanCharacter, &ABombermanCharacter::StaticClass, TEXT("/Script/Bomberman"), TEXT("ABombermanCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABombermanCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
