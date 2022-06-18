// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ItemInfo.h"
#include "BaseItem.generated.h"

UCLASS(BlueprintType, Blueprintable)
class INVENTORYSYSTEM_API UBaseItem : public UObject
{
	GENERATED_BODY()
	
public:
	UBaseItem();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FItemInfo Info;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Quantity;
};
