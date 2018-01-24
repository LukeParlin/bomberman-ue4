// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "TileObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileObject() {}
// Cross Module References
	BOMBERMAN_API UClass* Z_Construct_UClass_ATileObject_NoRegister();
	BOMBERMAN_API UClass* Z_Construct_UClass_ATileObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Bomberman();
	BOMBERMAN_API UFunction* Z_Construct_UFunction_ATileObject_GetDestructible();
	BOMBERMAN_API UFunction* Z_Construct_UFunction_ATileObject_GetTileCoord();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	BOMBERMAN_API UFunction* Z_Construct_UFunction_ATileObject_SetTileCoord();
// End Cross Module References
	void ATileObject::StaticRegisterNativesATileObject()
	{
		UClass* Class = ATileObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDestructible", (Native)&ATileObject::execGetDestructible },
			{ "GetTileCoord", (Native)&ATileObject::execGetTileCoord },
			{ "SetTileCoord", (Native)&ATileObject::execSetTileCoord },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ATileObject_GetDestructible()
	{
		struct TileObject_eventGetDestructible_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((TileObject_eventGetDestructible_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TileObject_eventGetDestructible_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "TileObject.h" },
				{ "ToolTip", "Get whether this object can be blown up by a bomb" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ATileObject, "GetDestructible", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TileObject_eventGetDestructible_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATileObject_GetTileCoord()
	{
		struct TileObject_eventGetTileCoord_Parms
		{
			FIntPoint ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TileObject_eventGetTileCoord_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "TileObject.h" },
				{ "ToolTip", "Get and set grid coordinate of the tile this object is on" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ATileObject, "GetTileCoord", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(TileObject_eventGetTileCoord_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATileObject_SetTileCoord()
	{
		struct TileObject_eventSetTileCoord_Parms
		{
			FIntPoint tc;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_tc = { UE4CodeGen_Private::EPropertyClass::Struct, "tc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TileObject_eventSetTileCoord_Parms, tc), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_tc,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "TileObject.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ATileObject, "SetTileCoord", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(TileObject_eventSetTileCoord_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATileObject_NoRegister()
	{
		return ATileObject::StaticClass();
	}
	UClass* Z_Construct_UClass_ATileObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Bomberman,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ATileObject_GetDestructible, "GetDestructible" }, // 1993688295
				{ &Z_Construct_UFunction_ATileObject_GetTileCoord, "GetTileCoord" }, // 2970937162
				{ &Z_Construct_UFunction_ATileObject_SetTileCoord, "SetTileCoord" }, // 825191077
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "TileObject.h" },
				{ "ModuleRelativePath", "TileObject.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tileCoord_MetaData[] = {
				{ "Category", "TileObject" },
				{ "ModuleRelativePath", "TileObject.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_tileCoord = { UE4CodeGen_Private::EPropertyClass::Struct, "tileCoord", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020015, 1, nullptr, STRUCT_OFFSET(ATileObject, tileCoord), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(NewProp_tileCoord_MetaData, ARRAY_COUNT(NewProp_tileCoord_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isDestructible_MetaData[] = {
				{ "Category", "TileObject" },
				{ "ModuleRelativePath", "TileObject.h" },
			};
#endif
			auto NewProp_isDestructible_SetBit = [](void* Obj){ ((ATileObject*)Obj)->isDestructible = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDestructible = { UE4CodeGen_Private::EPropertyClass::Bool, "isDestructible", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ATileObject), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_isDestructible_SetBit)>::SetBit, METADATA_PARAMS(NewProp_isDestructible_MetaData, ARRAY_COUNT(NewProp_isDestructible_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_tileCoord,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_isDestructible,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ATileObject>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ATileObject::StaticClass,
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
	IMPLEMENT_CLASS(ATileObject, 235542477);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATileObject(Z_Construct_UClass_ATileObject, &ATileObject::StaticClass, TEXT("/Script/Bomberman"), TEXT("ATileObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATileObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
