// Fill out your copyright notice in the Description page of Project Settings.


#include "Character_Controller.h"

// Sets default values
ACharacter_Controller::ACharacter_Controller()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	inventoryI = 0;
	empty.itemID = "4";

	collectionRange = CreateDefaultSubobject<USphereComponent>(TEXT("collectionRange"));
	collectionRange->AttachTo(RootComponent);
	collectionRange->SetSphereRadius(100.0f);
}

// Called when the game starts or when spawned
void ACharacter_Controller::BeginPlay()
{
	Super::BeginPlay();
	
	for (int i = 0; i < wieldObjects.Num(); i++)
	{
		if (wieldObjects[i])
		{
			wieldObjects[i]->SetActorHiddenInGame(true);
		}
	}
}

// Called every frame
void ACharacter_Controller::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACharacter_Controller::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAxis("MoveX", this, &ACharacter_Controller::Vertical_Movement);
	InputComponent->BindAxis("MoveY", this, &ACharacter_Controller::Horizontal_Movement);

	InputComponent->BindAxis("CameraSide", this, &ACharacter_Controller::AddControllerYawInput);
	InputComponent->BindAxis("CameraUp", this, &ACharacter_Controller::AddControllerPitchInput);

	InputComponent->BindAction("Interaction", IE_Pressed, this, &ACharacter_Controller::Collect);
	InputComponent->BindAction("InventoryPlus", IE_Pressed, this, &ACharacter_Controller::InventoryPlus);
	InputComponent->BindAction("InventoryMinus", IE_Pressed, this, &ACharacter_Controller::InventoryMinus);
}

void ACharacter_Controller::Horizontal_Movement(float axis)
{
	if (axis)
	{
		AddMovementInput(GetActorRightVector(), axis);
	}
}

void ACharacter_Controller::Vertical_Movement(float axis)
{
	if (axis)
	{
		AddMovementInput(GetActorForwardVector(), axis);
	}
}

void ACharacter_Controller::Collect()
{
	TArray<AActor*> collectedItems;
	collectionRange->GetOverlappingActors(collectedItems);

	for (int i = 0; i < collectedItems.Num(); i++)
	{
		AItem* const testItem = Cast<AItem>(collectedItems[i]);
		if (testItem && testItem->GetActive())
		{
			testItem->Touched();
			AddToInventory(testItem->itemID);
			testItem->SetActive(false);
		}
	}
}

void ACharacter_Controller::InventoryPlus()
{
	if (++inventoryI >= 5)
	{
		inventoryI = 0;
	}
	Wielding();

}

void ACharacter_Controller::InventoryMinus()
{
	if (--inventoryI < 0)
	{
		inventoryI = 4;
	}
	Wielding();

}

void ACharacter_Controller::AddToInventory(FName id)
{
	AEscapeRoomGameModeBase* gameMode = Cast<AEscapeRoomGameModeBase>(GetWorld()->GetAuthGameMode());
	UDataTable* itemTable = gameMode->GetItemsDB();

	if (gameMode && itemTable)
	{
		FInventoryItem* itemAdded = itemTable->FindRow<FInventoryItem>(id, "");
		if (itemAdded)
		{
			inventory.Add(*itemAdded);
			Wielding();
		}
	}
}

void ACharacter_Controller::RemoveFromInventory()
{
	if (inventory.Num() > inventoryI)
	{
		inventory.RemoveAt(inventoryI);
		Wielding();
	}
}

void ACharacter_Controller::Wielding()
{
	if (inventory.Num() > inventoryI)
	{
		wield = inventory[inventoryI];
		if (&wield)
		{
			FString wieldValue = wield.itemID.ToString();
			int wieldI = FCString::Atoi(*wieldValue);
			for (int i = 0; i < pickupableObjects.Num(); i++)
			{
				if (wield.itemID == pickupableObjects[i].itemID)
				{
					if (wieldObjects[wieldI])
					{
						wieldObjects[wieldI]->SetActorHiddenInGame(false);
					}
				}
				else
				{
					if (wieldObjects[i])
					{
						wieldObjects[i]->SetActorHiddenInGame(true);
					}
				}
			}
		}
		else
		{
			wield = empty;
		}

		if (wield == empty) {
			for (int i = 0; i < pickupableObjects.Num(); i++)
			{
				wieldObjects[i]->SetActorHiddenInGame(true);
			}
		}
	}
}
