// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseItem.h"

UBaseItem::UBaseItem()
{
	Info.ID = 0;
	Info.Name = "Base_Item";
	Info.Description = "Base_Item Dummy Description";
	Info.Quality = QualityEnum::POOR;
	Info.Type = TypeEnum::CONSUMABLE;
	Info.Weight = 0;
	Info.bIsUsable = false;

	Quantity = 1;
}
