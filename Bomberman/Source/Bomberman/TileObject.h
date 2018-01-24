// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TileObject.generated.h"

UCLASS()
class BOMBERMAN_API ATileObject : public AActor
{
	GENERATED_BODY()

//////////////////
//MEMBER VARIABLES
//////////////////
protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool isDestructible;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FIntPoint tileCoord;

public:	
	// Sets default values for this actor's properties
	ATileObject();

/////////////////////////
//ACCESSORS AND MODIFIERS
/////////////////////////
public:
	//Get whether this object can be blown up by a bomb
	UFUNCTION(BlueprintCallable)
	bool GetDestructible();

	//Get and set grid coordinate of the tile this object is on
	UFUNCTION(BlueprintCallable)
	FIntPoint GetTileCoord();

	UFUNCTION(BlueprintCallable)
	void SetTileCoord(FIntPoint tc);
	
};
