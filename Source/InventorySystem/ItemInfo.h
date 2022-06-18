#pragma once
#include "CoreMinimal.h"
#include "ItemInfo.generated.h"

UENUM(BlueprintType)
enum class QualityEnum : uint8
{
	POOR = 0		UMETA(DisplayName - "Poor"),
	COMMON = 1		UMETA(DisplayName - "Common"),
	UNCOMMON = 2	UMETA(DisplayName - "Uncommon"),
	RARE = 3		UMETA(DisplayName - "Rare"),
	LEGENDARY = 4	UMETA(DisplayName - "Legendary")
};

USTRUCT(BlueprintType)
struct INVENTORYSYSTEM_API FItemInfo
{
	GENERATED_BODY()

	/**
	An ID is a Unique Integer bound to an Item
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	QualityEnum Quality;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsUsable;
};