// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponent.h"

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	Weight = 0;
	UsedSlots = 0;
	InventorySlots = 0;
}

// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();
}

bool UInventoryComponent::AddItem(UBaseItem* newItem)
{
	if (!HasSpace()) return false;
	if (!newItem) return false;

	Items.Add(newItem);
	UsedSlots++;
	Weight += newItem->Info.Weight;
	return true;
}

bool UInventoryComponent::HasSpace()
{
	return UsedSlots < InventorySlots;
}

