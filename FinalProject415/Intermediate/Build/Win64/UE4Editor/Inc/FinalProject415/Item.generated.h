// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FINALPROJECT415_Item_generated_h
#error "Item.generated.h already included, missing '#pragma once' in Item.h"
#endif
#define FINALPROJECT415_Item_generated_h

#define FinalProject415_Source_FinalProject415_Item_h_13_SPARSE_DATA
#define FinalProject415_Source_FinalProject415_Item_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTouched); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execGetActive);


#define FinalProject415_Source_FinalProject415_Item_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTouched); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execGetActive);


#define FinalProject415_Source_FinalProject415_Item_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FinalProject415"), NO_API) \
	DECLARE_SERIALIZER(AItem)


#define FinalProject415_Source_FinalProject415_Item_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FinalProject415"), NO_API) \
	DECLARE_SERIALIZER(AItem)


#define FinalProject415_Source_FinalProject415_Item_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public:


#define FinalProject415_Source_FinalProject415_Item_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItem)


#define FinalProject415_Source_FinalProject415_Item_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__itemMesh() { return STRUCT_OFFSET(AItem, itemMesh); }


#define FinalProject415_Source_FinalProject415_Item_h_10_PROLOG
#define FinalProject415_Source_FinalProject415_Item_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FinalProject415_Source_FinalProject415_Item_h_13_PRIVATE_PROPERTY_OFFSET \
	FinalProject415_Source_FinalProject415_Item_h_13_SPARSE_DATA \
	FinalProject415_Source_FinalProject415_Item_h_13_RPC_WRAPPERS \
	FinalProject415_Source_FinalProject415_Item_h_13_INCLASS \
	FinalProject415_Source_FinalProject415_Item_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FinalProject415_Source_FinalProject415_Item_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FinalProject415_Source_FinalProject415_Item_h_13_PRIVATE_PROPERTY_OFFSET \
	FinalProject415_Source_FinalProject415_Item_h_13_SPARSE_DATA \
	FinalProject415_Source_FinalProject415_Item_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FinalProject415_Source_FinalProject415_Item_h_13_INCLASS_NO_PURE_DECLS \
	FinalProject415_Source_FinalProject415_Item_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALPROJECT415_API UClass* StaticClass<class AItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FinalProject415_Source_FinalProject415_Item_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
