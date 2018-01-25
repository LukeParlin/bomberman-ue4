// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Powerup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePowerup() {}
// Cross Module References
	BOMBERMAN_API UClass* Z_Construct_UClass_APowerup_NoRegister();
	BOMBERMAN_API UClass* Z_Construct_UClass_APowerup();
	BOMBERMAN_API UClass* Z_Construct_UClass_ATileObject();
	UPackage* Z_Construct_UPackage__Script_Bomberman();
	BOMBERMAN_API UFunction* Z_Construct_UFunction_APowerup_GetBombIncrease();
	BOMBERMAN_API UFunction* Z_Construct_UFunction_APowerup_GetRangeIncrease();
	BOMBERMAN_API UFunction* Z_Construct_UFunction_APowerup_GetSpeedIncrease();
// End Cross Module References
	void APowerup::StaticRegisterNativesAPowerup()
	{
		UClass* Class = APowerup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBombIncrease", (Native)&APowerup::execGetBombIncrease },
			{ "GetRangeIncrease", (Native)&APowerup::execGetRangeIncrease },
			{ "GetSpeedIncrease", (Native)&APowerup::execGetSpeedIncrease },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_APowerup_GetBombIncrease()
	{
		struct Powerup_eventGetBombIncrease_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Powerup_eventGetBombIncrease_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Powerup.h" },
				{ "ToolTip", "Get the number of bombs granted by this powerup" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APowerup, "GetBombIncrease", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Powerup_eventGetBombIncrease_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APowerup_GetRangeIncrease()
	{
		struct Powerup_eventGetRangeIncrease_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Powerup_eventGetRangeIncrease_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Powerup.h" },
				{ "ToolTip", "Get the extra bomb range granted by this powerup" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APowerup, "GetRangeIncrease", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Powerup_eventGetRangeIncrease_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APowerup_GetSpeedIncrease()
	{
		struct Powerup_eventGetSpeedIncrease_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Powerup_eventGetSpeedIncrease_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Powerup.h" },
				{ "ToolTip", "Get the increase in speed granted by this powerup" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APowerup, "GetSpeedIncrease", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Powerup_eventGetSpeedIncrease_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APowerup_NoRegister()
	{
		return APowerup::StaticClass();
	}
	UClass* Z_Construct_UClass_APowerup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ATileObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Bomberman,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_APowerup_GetBombIncrease, "GetBombIncrease" }, // 1348516432
				{ &Z_Construct_UFunction_APowerup_GetRangeIncrease, "GetRangeIncrease" }, // 2015981758
				{ &Z_Construct_UFunction_APowerup_GetSpeedIncrease, "GetSpeedIncrease" }, // 2042684724
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Powerup.h" },
				{ "ModuleRelativePath", "Powerup.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_speedIncrease_MetaData[] = {
				{ "Category", "Powerup" },
				{ "ModuleRelativePath", "Powerup.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speedIncrease = { UE4CodeGen_Private::EPropertyClass::Float, "speedIncrease", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(APowerup, speedIncrease), METADATA_PARAMS(NewProp_speedIncrease_MetaData, ARRAY_COUNT(NewProp_speedIncrease_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rangeIncrease_MetaData[] = {
				{ "Category", "Powerup" },
				{ "ModuleRelativePath", "Powerup.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_rangeIncrease = { UE4CodeGen_Private::EPropertyClass::Int, "rangeIncrease", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(APowerup, rangeIncrease), METADATA_PARAMS(NewProp_rangeIncrease_MetaData, ARRAY_COUNT(NewProp_rangeIncrease_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bombIncrease_MetaData[] = {
				{ "Category", "Powerup" },
				{ "ModuleRelativePath", "Powerup.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_bombIncrease = { UE4CodeGen_Private::EPropertyClass::Int, "bombIncrease", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(APowerup, bombIncrease), METADATA_PARAMS(NewProp_bombIncrease_MetaData, ARRAY_COUNT(NewProp_bombIncrease_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_speedIncrease,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_rangeIncrease,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bombIncrease,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APowerup>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APowerup::StaticClass,
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
	IMPLEMENT_CLASS(APowerup, 3312795599);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APowerup(Z_Construct_UClass_APowerup, &APowerup::StaticClass, TEXT("/Script/Bomberman"), TEXT("APowerup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APowerup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
