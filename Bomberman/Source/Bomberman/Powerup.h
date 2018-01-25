// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TileObject.h"
#include "Powerup.generated.h"

/**
 *
 */
UCLASS()
class BOMBERMAN_API APowerup : public ATileObject
{
	GENERATED_BODY()

//////////////////
//MEMBER VARIABLES
//////////////////
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 bombIncrease;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 rangeIncrease;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float speedIncrease;

public:
	// Sets default values for this actor's properties
	APowerup();

	/////////////////////////
	//ACCESSORS AND MODIFIERS
	/////////////////////////
public:
	//Get the number of bombs granted by this powerup
	UFUNCTION(BlueprintCallable)
	int32 GetBombIncrease();

	//Get the extra bomb range granted by this powerup
	UFUNCTION(BlueprintCallable)
	int32 GetRangeIncrease();

	//Get the increase in speed granted by this powerup
	UFUNCTION(BlueprintCallable)
	float GetSpeedIncrease();

};
