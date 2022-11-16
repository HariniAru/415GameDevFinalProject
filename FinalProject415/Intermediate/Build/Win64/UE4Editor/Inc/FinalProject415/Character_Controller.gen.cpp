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
	FINALPROJECT415_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem();
	UPackage* Z_Construct_UPackage__Script_FinalProject415();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FINALPROJECT415_API UClass* Z_Construct_UClass_AItem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	FINALPROJECT415_API UClass* Z_Construct_UClass_ACharacter_Controller_NoRegister();
	FINALPROJECT415_API UClass* Z_Construct_UClass_ACharacter_Controller();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FInventoryItem>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FInventoryItem cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FInventoryItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FINALPROJECT415_API uint32 Get_Z_Construct_UScriptStruct_FInventoryItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryItem, Z_Construct_UPackage__Script_FinalProject415(), TEXT("InventoryItem"), sizeof(FInventoryItem), Get_Z_Construct_UScriptStruct_FInventoryItem_Hash());
	}
	return Singleton;
}
template<> FINALPROJECT415_API UScriptStruct* StaticStruct<FInventoryItem>()
{
	return FInventoryItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInventoryItem(FInventoryItem::StaticStruct, TEXT("/Script/FinalProject415"), TEXT("InventoryItem"), false, nullptr, nullptr);
static struct FScriptStruct_FinalProject415_StaticRegisterNativesFInventoryItem
{
	FScriptStruct_FinalProject415_StaticRegisterNativesFInventoryItem()
	{
		UScriptStruct::DeferCppStructOps<FInventoryItem>(FName(TEXT("InventoryItem")));
	}
} ScriptStruct_FinalProject415_StaticRegisterNativesFInventoryItem;
	struct Z_Construct_UScriptStruct_FInventoryItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_itemID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_item;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isVisible_MetaData[];
#endif
		static void NewProp_isVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_image_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_image;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInventoryItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_itemID_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_itemID = { "itemID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItem, itemID), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_itemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_itemID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_item_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItem, item), Z_Construct_UClass_AItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_item_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_item_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_name_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItem, name), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_isVisible_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_isVisible_SetBit(void* Obj)
	{
		((FInventoryItem*)Obj)->isVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_isVisible = { "isVisible", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInventoryItem), &Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_isVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_isVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_isVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_image_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_image = { "image", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItem, image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_image_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_image_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_itemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_isVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_image,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FinalProject415,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"InventoryItem",
		sizeof(FInventoryItem),
		alignof(FInventoryItem),
		Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInventoryItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FinalProject415();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InventoryItem"), sizeof(FInventoryItem), Get_Z_Construct_UScriptStruct_FInventoryItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInventoryItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInventoryItem_Hash() { return 320050622U; }
	DEFINE_FUNCTION(ACharacter_Controller::execWielding)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Wielding();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter_Controller::execRemoveFromInventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveFromInventory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter_Controller::execAddToInventory)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddToInventory(Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter_Controller::execInventoryMinus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InventoryMinus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter_Controller::execInventoryPlus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InventoryPlus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacter_Controller::execCollect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Collect();
		P_NATIVE_END;
	}
	void ACharacter_Controller::StaticRegisterNativesACharacter_Controller()
	{
		UClass* Class = ACharacter_Controller::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToInventory", &ACharacter_Controller::execAddToInventory },
			{ "Collect", &ACharacter_Controller::execCollect },
			{ "InventoryMinus", &ACharacter_Controller::execInventoryMinus },
			{ "InventoryPlus", &ACharacter_Controller::execInventoryPlus },
			{ "RemoveFromInventory", &ACharacter_Controller::execRemoveFromInventory },
			{ "Wielding", &ACharacter_Controller::execWielding },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACharacter_Controller_AddToInventory_Statics
	{
		struct Character_Controller_eventAddToInventory_Parms
		{
			FName id;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ACharacter_Controller_AddToInventory_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Character_Controller_eventAddToInventory_Parms, id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacter_Controller_AddToInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacter_Controller_AddToInventory_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_Controller_AddToInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_Controller_AddToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter_Controller, nullptr, "AddToInventory", nullptr, nullptr, sizeof(Character_Controller_eventAddToInventory_Parms), Z_Construct_UFunction_ACharacter_Controller_AddToInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Controller_AddToInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_Controller_AddToInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Controller_AddToInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_Controller_AddToInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacter_Controller_AddToInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_Controller_Collect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_Controller_Collect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Items" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_Controller_Collect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter_Controller, nullptr, "Collect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_Controller_Collect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Controller_Collect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_Controller_Collect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacter_Controller_Collect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_Controller_InventoryMinus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_Controller_InventoryMinus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_Controller_InventoryMinus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter_Controller, nullptr, "InventoryMinus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_Controller_InventoryMinus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Controller_InventoryMinus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_Controller_InventoryMinus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacter_Controller_InventoryMinus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_Controller_InventoryPlus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_Controller_InventoryPlus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_Controller_InventoryPlus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter_Controller, nullptr, "InventoryPlus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_Controller_InventoryPlus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Controller_InventoryPlus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_Controller_InventoryPlus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacter_Controller_InventoryPlus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_Controller_RemoveFromInventory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_Controller_RemoveFromInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_Controller_RemoveFromInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter_Controller, nullptr, "RemoveFromInventory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_Controller_RemoveFromInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Controller_RemoveFromInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_Controller_RemoveFromInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacter_Controller_RemoveFromInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacter_Controller_Wielding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacter_Controller_Wielding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacter_Controller_Wielding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacter_Controller, nullptr, "Wielding", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacter_Controller_Wielding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacter_Controller_Wielding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacter_Controller_Wielding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacter_Controller_Wielding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACharacter_Controller_NoRegister()
	{
		return ACharacter_Controller::StaticClass();
	}
	struct Z_Construct_UClass_ACharacter_Controller_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inventory_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_inventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inventoryI_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_inventoryI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_collectionRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_collectionRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wield_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_wield;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_empty_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_empty;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pickupableObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pickupableObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_pickupableObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_wieldObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wieldObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_wieldObjects;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacter_Controller_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FinalProject415,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACharacter_Controller_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACharacter_Controller_AddToInventory, "AddToInventory" }, // 441997061
		{ &Z_Construct_UFunction_ACharacter_Controller_Collect, "Collect" }, // 3822139695
		{ &Z_Construct_UFunction_ACharacter_Controller_InventoryMinus, "InventoryMinus" }, // 1503193041
		{ &Z_Construct_UFunction_ACharacter_Controller_InventoryPlus, "InventoryPlus" }, // 1929803802
		{ &Z_Construct_UFunction_ACharacter_Controller_RemoveFromInventory, "RemoveFromInventory" }, // 165991973
		{ &Z_Construct_UFunction_ACharacter_Controller_Wielding, "Wielding" }, // 1151539702
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Controller_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character_Controller.h" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_inventory_Inner = { "inventory", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_inventory_MetaData[] = {
		{ "Category", "Character_Controller" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_inventory = { "inventory", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacter_Controller, inventory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_inventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_inventoryI_MetaData[] = {
		{ "Category", "Character_Controller" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_inventoryI = { "inventoryI", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacter_Controller, inventoryI), METADATA_PARAMS(Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_inventoryI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_inventoryI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_collectionRange_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_collectionRange = { "collectionRange", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacter_Controller, collectionRange), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_collectionRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_collectionRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_wield_MetaData[] = {
		{ "Category", "Character_Controller" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_wield = { "wield", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacter_Controller, wield), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_wield_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_wield_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_empty_MetaData[] = {
		{ "Category", "Character_Controller" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_empty = { "empty", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacter_Controller, empty), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_empty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_empty_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_pickupableObjects_Inner = { "pickupableObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_pickupableObjects_MetaData[] = {
		{ "Category", "Character_Controller" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_pickupableObjects = { "pickupableObjects", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacter_Controller, pickupableObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_pickupableObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_pickupableObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_wieldObjects_Inner = { "wieldObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_wieldObjects_MetaData[] = {
		{ "Category", "Wielding Items" },
		{ "ModuleRelativePath", "Character_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_wieldObjects = { "wieldObjects", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacter_Controller, wieldObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_wieldObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_wieldObjects_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharacter_Controller_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_inventory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_inventoryI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_collectionRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_wield,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_empty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_pickupableObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_pickupableObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_wieldObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Controller_Statics::NewProp_wieldObjects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacter_Controller_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacter_Controller>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACharacter_Controller_Statics::ClassParams = {
		&ACharacter_Controller::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACharacter_Controller_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Controller_Statics::PropPointers),
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
	IMPLEMENT_CLASS(ACharacter_Controller, 743539084);
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
