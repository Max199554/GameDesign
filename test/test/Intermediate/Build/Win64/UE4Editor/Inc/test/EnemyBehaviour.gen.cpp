// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "test/EnemyBehaviour.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyBehaviour() {}
// Cross Module References
	TEST_API UClass* Z_Construct_UClass_UEnemyBehaviour_NoRegister();
	TEST_API UClass* Z_Construct_UClass_UEnemyBehaviour();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_test();
	TEST_API UFunction* Z_Construct_UFunction_UEnemyBehaviour_PlayTakeDamageAni();
	TEST_API UFunction* Z_Construct_UFunction_UEnemyBehaviour_TakeDamage();
// End Cross Module References
	static FName NAME_UEnemyBehaviour_PlayTakeDamageAni = FName(TEXT("PlayTakeDamageAni"));
	void UEnemyBehaviour::PlayTakeDamageAni()
	{
		ProcessEvent(FindFunctionChecked(NAME_UEnemyBehaviour_PlayTakeDamageAni),NULL);
	}
	void UEnemyBehaviour::StaticRegisterNativesUEnemyBehaviour()
	{
		UClass* Class = UEnemyBehaviour::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TakeDamage", &UEnemyBehaviour::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEnemyBehaviour_PlayTakeDamageAni_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyBehaviour_PlayTakeDamageAni_Statics::Function_MetaDataParams[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "EnemyBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyBehaviour_PlayTakeDamageAni_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyBehaviour, "PlayTakeDamageAni", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnemyBehaviour_PlayTakeDamageAni_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEnemyBehaviour_PlayTakeDamageAni_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnemyBehaviour_PlayTakeDamageAni()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnemyBehaviour_PlayTakeDamageAni_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnemyBehaviour_TakeDamage_Statics
	{
		struct EnemyBehaviour_eventTakeDamage_Parms
		{
			int32 damage;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UEnemyBehaviour_TakeDamage_Statics::NewProp_damage = { UE4CodeGen_Private::EPropertyClass::Int, "damage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EnemyBehaviour_eventTakeDamage_Parms, damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemyBehaviour_TakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyBehaviour_TakeDamage_Statics::NewProp_damage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyBehaviour_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyBehaviour_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyBehaviour, "TakeDamage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(EnemyBehaviour_eventTakeDamage_Parms), Z_Construct_UFunction_UEnemyBehaviour_TakeDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEnemyBehaviour_TakeDamage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnemyBehaviour_TakeDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEnemyBehaviour_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnemyBehaviour_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnemyBehaviour_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEnemyBehaviour_NoRegister()
	{
		return UEnemyBehaviour::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyBehaviour_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_health_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyBehaviour_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_test,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnemyBehaviour_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemyBehaviour_PlayTakeDamageAni, "PlayTakeDamageAni" }, // 1178190312
		{ &Z_Construct_UFunction_UEnemyBehaviour_TakeDamage, "TakeDamage" }, // 1662053006
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyBehaviour_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "EnemyBehaviour.h" },
		{ "ModuleRelativePath", "EnemyBehaviour.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_health_MetaData[] = {
		{ "Category", "EnemyStatus" },
		{ "ModuleRelativePath", "EnemyBehaviour.h" },
		{ "ToolTip", "Sets default values for this component's properties" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_health = { UE4CodeGen_Private::EPropertyClass::Int, "health", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UEnemyBehaviour, health), METADATA_PARAMS(Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_health_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_health_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyBehaviour_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_health,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyBehaviour_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyBehaviour>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnemyBehaviour_Statics::ClassParams = {
		&UEnemyBehaviour::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UEnemyBehaviour_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UEnemyBehaviour_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEnemyBehaviour_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEnemyBehaviour_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemyBehaviour()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnemyBehaviour_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnemyBehaviour, 2573588147);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnemyBehaviour(Z_Construct_UClass_UEnemyBehaviour, &UEnemyBehaviour::StaticClass, TEXT("/Script/test"), TEXT("UEnemyBehaviour"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyBehaviour);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
