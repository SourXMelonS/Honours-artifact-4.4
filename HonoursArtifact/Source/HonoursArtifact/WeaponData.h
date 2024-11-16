#pragma once

#include "CoreMinimal.h"
#include "WeaponData.generated.h"

USTRUCT(BlueprintType)
struct HONOURSARTIFACT_API FWeaponData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FText Name;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float Damage;
};
