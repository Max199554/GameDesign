// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "test/MainPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainPlayer() {}
// Cross Module References
	TEST_API UClass* Z_Construct_UClass_AMainPlayer_NoRegister();
	TEST_API UClass* Z_Construct_UClass_AMainPlayer();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_test();
	TEST_API UFunction* Z_Construct_UFunction_AMainPlayer_ChangeCrouchState();
	TEST_API UFunction* Z_Construct_UFunction_AMainPlayer_IsCrouchingC();
	TEST_API UFunction* Z_Construct_UFunction_AMainPlayer_TakeDamage();
// End Cross Module References
	void AMainPlayer::StaticRegisterNativesAMainPlayer()
	{
		UClass* Class = AMainPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeCrouchState", &AMainPlayer::execChangeCrouchState },
			{ "IsCrouchingC", &AMainPlayer::execIsCrouchingC },
			{ "TakeDamage", &AMainPlayer::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMainPlayer_ChangeCrouchState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainPlayer_ChangeCrouchState_Statics::Function_MetaDataParams[] = {
		{ "Category", "stealth" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayer_ChangeCrouchState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayer, "ChangeCrouchState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainPlayer_ChangeCrouchState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMainPlayer_ChangeCrouchState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainPlayer_ChangeCrouchState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainPlayer_ChangeCrouchState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainPlayer_IsCrouchingC_Statics
	{
		struct MainPlayer_eventIsCrouchingC_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMainPlayer_IsCrouchingC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MainPlayer_eventIsCrouchingC_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMainPlayer_IsCrouchingC_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MainPlayer_eventIsCrouchingC_Parms), &Z_Construct_UFunction_AMainPlayer_IsCrouchingC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainPlayer_IsCrouchingC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainPlayer_IsCrouchingC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainPlayer_IsCrouchingC_Statics::Function_MetaDataParams[] = {
		{ "Category", "stealth" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayer_IsCrouchingC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayer, "IsCrouchingC", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MainPlayer_eventIsCrouchingC_Parms), Z_Construct_UFunction_AMainPlayer_IsCrouchingC_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMainPlayer_IsCrouchingC_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainPlayer_IsCrouchingC_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMainPlayer_IsCrouchingC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainPlayer_IsCrouchingC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainPlayer_IsCrouchingC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainPlayer_TakeDamage_Statics
	{
		struct MainPlayer_eventTakeDamage_Parms
		{
			int32 Damage;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMainPlayer_TakeDamage_Statics::NewProp_Damage = { UE4CodeGen_Private::EPropertyClass::Int, "Damage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MainPlayer_eventTakeDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainPlayer_TakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainPlayer_TakeDamage_Statics::NewProp_Damage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainPlayer_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayer_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayer, "TakeDamage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MainPlayer_eventTakeDamage_Parms), Z_Construct_UFunction_AMainPlayer_TakeDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMainPlayer_TakeDamage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainPlayer_TakeDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMainPlayer_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainPlayer_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainPlayer_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMainPlayer_NoRegister()
	{
		return AMainPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AMainPlayer_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isCrouch_MetaData[];
#endif
		static void NewProp_isCrouch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isCrouch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_test,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMainPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainPlayer_ChangeCrouchState, "ChangeCrouchState" }, // 2621992454
		{ &Z_Construct_UFunction_AMainPlayer_IsCrouchingC, "IsCrouchingC" }, // 3877520217
		{ &Z_Construct_UFunction_AMainPlayer_TakeDamage, "TakeDamage" }, // 494889382
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MainPlayer.h" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayer_Statics::NewProp_health_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_health = { UE4CodeGen_Private::EPropertyClass::Int, "health", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AMainPlayer, health), METADATA_PARAMS(Z_Construct_UClass_AMainPlayer_Statics::NewProp_health_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMainPlayer_Statics::NewProp_health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayer_Statics::NewProp_isCrouch_MetaData[] = {
		{ "Category", "stealth" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
#endif
	void Z_Construct_UClass_AMainPlayer_Statics::NewProp_isCrouch_SetBit(void* Obj)
	{
		((AMainPlayer*)Obj)->isCrouch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_isCrouch = { UE4CodeGen_Private::EPropertyClass::Bool, "isCrouch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMainPlayer), &Z_Construct_UClass_AMainPlayer_Statics::NewProp_isCrouch_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMainPlayer_Statics::NewProp_isCrouch_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMainPlayer_Statics::NewProp_isCrouch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_isCrouch,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMainPlayer_Statics::ClassParams = {
		&AMainPlayer::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AMainPlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMainPlayer_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMainPlayer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMainPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMainPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMainPlayer, 4204926759);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainPlayer(Z_Construct_UClass_AMainPlayer, &AMainPlayer::StaticClass, TEXT("/Script/test"), TEXT("AMainPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
