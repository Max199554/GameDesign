// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "test/PlayerBehaviour.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerBehaviour() {}
// Cross Module References
	TEST_API UClass* Z_Construct_UClass_UPlayerBehaviour_NoRegister();
	TEST_API UClass* Z_Construct_UClass_UPlayerBehaviour();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_test();
// End Cross Module References
	void UPlayerBehaviour::StaticRegisterNativesUPlayerBehaviour()
	{
	}
	UClass* Z_Construct_UClass_UPlayerBehaviour_NoRegister()
	{
		return UPlayerBehaviour::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerBehaviour_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerBehaviour_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_test,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerBehaviour_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlayerBehaviour.h" },
		{ "ModuleRelativePath", "PlayerBehaviour.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerBehaviour_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerBehaviour>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerBehaviour_Statics::ClassParams = {
		&UPlayerBehaviour::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		nullptr, 0,
		nullptr, 0,
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerBehaviour_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPlayerBehaviour_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerBehaviour()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerBehaviour_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerBehaviour, 4192215395);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerBehaviour(Z_Construct_UClass_UPlayerBehaviour, &UPlayerBehaviour::StaticClass, TEXT("/Script/test"), TEXT("UPlayerBehaviour"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerBehaviour);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
