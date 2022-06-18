// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ItemInfo.h"
#include "InventoryComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class INVENTORYSYSTEM_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Properties

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int Weight;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int UsedSlots;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int InventorySlots;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FItemInfo> Items;
		
	// Functions

	UFUNCTION(BlueprintCallable)
	bool AddItem(FItemInfo newItem);

	UFUNCTION(BlueprintCallable)
	bool HasSpace();
};
