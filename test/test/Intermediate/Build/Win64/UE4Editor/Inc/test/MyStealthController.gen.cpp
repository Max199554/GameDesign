// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "test/MyStealthController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyStealthController() {}
// Cross Module References
	TEST_API UClass* Z_Construct_UClass_AMyStealthController_NoRegister();
	TEST_API UClass* Z_Construct_UClass_AMyStealthController();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_test();
// End Cross Module References
	void AMyStealthController::StaticRegisterNativesAMyStealthController()
	{
	}
	UClass* Z_Construct_UClass_AMyStealthController_NoRegister()
	{
		return AMyStealthController::StaticClass();
	}
	struct Z_Construct_UClass_AMyStealthController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyStealthController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_test,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyStealthController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyStealthController.h" },
		{ "ModuleRelativePath", "MyStealthController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyStealthController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyStealthController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyStealthController_Statics::ClassParams = {
		&AMyStealthController::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMyStealthController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyStealthController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyStealthController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyStealthController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyStealthController, 2388173103);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyStealthController(Z_Construct_UClass_AMyStealthController, &AMyStealthController::StaticClass, TEXT("/Script/test"), TEXT("AMyStealthController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyStealthController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
