// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"
#include "Components/InputComponent.h"
#include "Engine/DataTable.h"
#include "Engine/World.h"
#include "EscapeRoomGameModeBase.h"
#include "Item.h"
#include "Components/SphereComponent.h"
#include "Character_Controller.generated.h"

USTRUCT(BlueprintType)
struct FInventoryItem : public FTableRowBase
{
	GENERATED_BODY()
		
public:
	FInventoryItem()
	{
		name = FText::FromString("item");
		isVisible = false;
	}

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName itemID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<class AItem> item;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool isVisible;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UTexture2D* image;

	bool operator==(const FInventoryItem& itemToCompare) const
	{
		return itemID == itemToCompare.itemID;
	}	
};


UCLASS()
class FINALPROJECT415_API ACharacter_Controller : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACharacter_Controller();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "Items")
		void Collect();

	UFUNCTION()
		void InventoryPlus();

	UFUNCTION()
		void InventoryMinus();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void Horizontal_Movement(float axis);
	void Vertical_Movement(float axis);

	UFUNCTION(BlueprintCallable, Category = "Utilities")
		void AddToInventory(FName id);

	UFUNCTION(BlueprintCallable, Category = "Utilities")
		void RemoveFromInventory();

	UFUNCTION()
		void Wielding();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		TArray<FInventoryItem> inventory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int inventoryI;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class USphereComponent* collectionRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FInventoryItem wield;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FInventoryItem empty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FInventoryItem> pickupableObjects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Wielding Items")
		TArray<AActor*> wieldObjects;
	
	FORCEINLINE class USphereComponent* GetCollectionrange() const { return collectionRange; }


};
