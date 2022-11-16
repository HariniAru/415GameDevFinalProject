// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FinalProject415/Character_Controller.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacter_Controller() {}
// Cross Module References
	FINALPROJECT415_API UClass* Z_Construct_UClass_ACharacter_Controller_NoRegister();
	FINALPROJECT415_API UClass* Z_Construct_UClass_ACharacter_Controller();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_FinalProject415();
// End Cross Module References
	void ACharacter_Controller::StaticRegisterNativesACharacter_Controller()
	{
	}
	UClass* Z_Construct_UClass_ACharacter_Controller_NoRegister()
	{
		return ACharacter_Controller::StaticClass();
	}
	struct Z_Construct_UClass_ACharacter_Controller_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacter_Controller_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FinalProject415,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Controller_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character_Controller.h" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacter_Controller_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacter_Controller>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACharacter_Controller_Statics::ClassParams = {
		&ACharacter_Controller::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACharacter_Controller_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Controller_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACharacter_Controller()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACharacter_Controller_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACharacter_Controller, 3047063487);
	template<> FINALPROJECT415_API UClass* StaticClass<ACharacter_Controller>()
	{
		return ACharacter_Controller::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACharacter_Controller(Z_Construct_UClass_ACharacter_Controller, &ACharacter_Controller::StaticClass, TEXT("/Script/FinalProject415"), TEXT("ACharacter_Controller"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacter_Controller);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
