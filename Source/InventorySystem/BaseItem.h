#pragma once
#include "CoreMinimal.h"
#include "BaseItem.generated.h"

USTRUCT(BlueprintType)
struct INVENTORYSYSTEM_API FBaseItem
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Quality;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsUsable;
};