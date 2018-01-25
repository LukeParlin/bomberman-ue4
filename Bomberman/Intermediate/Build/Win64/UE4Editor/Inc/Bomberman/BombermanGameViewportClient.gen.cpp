// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BombermanGameViewportClient.h"
#include "Classes/Engine/Engine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBombermanGameViewportClient() {}
// Cross Module References
	BOMBERMAN_API UClass* Z_Construct_UClass_UBombermanGameViewportClient_NoRegister();
	BOMBERMAN_API UClass* Z_Construct_UClass_UBombermanGameViewportClient();
	ENGINE_API UClass* Z_Construct_UClass_UGameViewportClient();
	UPackage* Z_Construct_UPackage__Script_Bomberman();
// End Cross Module References
	void UBombermanGameViewportClient::StaticRegisterNativesUBombermanGameViewportClient()
	{
	}
	UClass* Z_Construct_UClass_UBombermanGameViewportClient_NoRegister()
	{
		return UBombermanGameViewportClient::StaticClass();
	}
	UClass* Z_Construct_UClass_UBombermanGameViewportClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UGameViewportClient,
				(UObject* (*)())Z_Construct_UPackage__Script_Bomberman,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "BombermanGameViewportClient.h" },
				{ "ModuleRelativePath", "BombermanGameViewportClient.h" },
				{ "ToolTip", "!! We are overwriting the GameViewportClient class to pass kayboard input to ALL PlayerControllers !!\n!! This idea / code comes from this guide on the Unreal Wiki: https://wiki.unrealengine.com/Local_Multiplayer_Tips" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBombermanGameViewportClient>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBombermanGameViewportClient::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100088u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBombermanGameViewportClient, 3133342064);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBombermanGameViewportClient(Z_Construct_UClass_UBombermanGameViewportClient, &UBombermanGameViewportClient::StaticClass, TEXT("/Script/Bomberman"), TEXT("UBombermanGameViewportClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBombermanGameViewportClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
