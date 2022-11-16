// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FINALPROJECT415_Character_Controller_generated_h
#error "Character_Controller.generated.h already included, missing '#pragma once' in Character_Controller.h"
#endif
#define FINALPROJECT415_Character_Controller_generated_h

#define FinalProject415_Source_FinalProject415_Character_Controller_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventoryItem_Statics; \
	FINALPROJECT415_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> FINALPROJECT415_API UScriptStruct* StaticStruct<struct FInventoryItem>();

#define FinalProject415_Source_FinalProject415_Character_Controller_h_54_SPARSE_DATA
#define FinalProject415_Source_FinalProject415_Character_Controller_h_54_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWielding); \
	DECLARE_FUNCTION(execRemoveFromInventory); \
	DECLARE_FUNCTION(execAddToInventory); \
	DECLARE_FUNCTION(execInventoryMinus); \
	DECLARE_FUNCTION(execInventoryPlus); \
	DECLARE_FUNCTION(execCollect);


#define FinalProject415_Source_FinalProject415_Character_Controller_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWielding); \
	DECLARE_FUNCTION(execRemoveFromInventory); \
	DECLARE_FUNCTION(execAddToInventory); \
	DECLARE_FUNCTION(execInventoryMinus); \
	DECLARE_FUNCTION(execInventoryPlus); \
	DECLARE_FUNCTION(execCollect);


#define FinalProject415_Source_FinalProject415_Character_Controller_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacter_Controller(); \
	friend struct Z_Construct_UClass_ACharacter_Controller_Statics; \
public: \
	DECLARE_CLASS(ACharacter_Controller, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FinalProject415"), NO_API) \
	DECLARE_SERIALIZER(ACharacter_Controller)


#define FinalProject415_Source_FinalProject415_Character_Controller_h_54_INCLASS \
private: \
	static void StaticRegisterNativesACharacter_Controller(); \
	friend struct Z_Construct_UClass_ACharacter_Controller_Statics; \
public: \
	DECLARE_CLASS(ACharacter_Controller, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FinalProject415"), NO_API) \
	DECLARE_SERIALIZER(ACharacter_Controller)


#define FinalProject415_Source_FinalProject415_Character_Controller_h_54_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACharacter_Controller(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacter_Controller) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacter_Controller); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacter_Controller); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacter_Controller(ACharacter_Controller&&); \
	NO_API ACharacter_Controller(const ACharacter_Controller&); \
public:


#define FinalProject415_Source_FinalProject415_Character_Controller_h_54_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacter_Controller(ACharacter_Controller&&); \
	NO_API ACharacter_Controller(const ACharacter_Controller&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacter_Controller); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacter_Controller); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharacter_Controller)


#define FinalProject415_Source_FinalProject415_Character_Controller_h_54_PRIVATE_PROPERTY_OFFSET
#define FinalProject415_Source_FinalProject415_Character_Controller_h_51_PROLOG
#define FinalProject415_Source_FinalProject415_Character_Controller_h_54_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FinalProject415_Source_FinalProject415_Character_Controller_h_54_PRIVATE_PROPERTY_OFFSET \
	FinalProject415_Source_FinalProject415_Character_Controller_h_54_SPARSE_DATA \
	FinalProject415_Source_FinalProject415_Character_Controller_h_54_RPC_WRAPPERS \
	FinalProject415_Source_FinalProject415_Character_Controller_h_54_INCLASS \
	FinalProject415_Source_FinalProject415_Character_Controller_h_54_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FinalProject415_Source_FinalProject415_Character_Controller_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FinalProject415_Source_FinalProject415_Character_Controller_h_54_PRIVATE_PROPERTY_OFFSET \
	FinalProject415_Source_FinalProject415_Character_Controller_h_54_SPARSE_DATA \
	FinalProject415_Source_FinalProject415_Character_Controller_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FinalProject415_Source_FinalProject415_Character_Controller_h_54_INCLASS_NO_PURE_DECLS \
	FinalProject415_Source_FinalProject415_Character_Controller_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALPROJECT415_API UClass* StaticClass<class ACharacter_Controller>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FinalProject415_Source_FinalProject415_Character_Controller_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
