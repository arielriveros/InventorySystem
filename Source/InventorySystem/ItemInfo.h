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

UENUM(BlueprintType)
enum class TypeEnum : uint8
{
	CONSUMABLE = 0	UMETA(DisplayName - "Consumable"),
	ARMOR = 1		UMETA(DisplayName - "Armor"),
	WEAPON = 2		UMETA(DisplayName - "Weapon"),
	QUEST = 3		UMETA(DisplayName - "Quest"),
	JUNK = 4		UMETA(DisplayName - "Junk")
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
	TypeEnum Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsUsable;
};