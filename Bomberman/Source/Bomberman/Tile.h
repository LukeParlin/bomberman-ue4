// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "TileObject.h"

#include "GameFramework/Actor.h"
#include "Tile.generated.h"

UCLASS()
class BOMBERMAN_API ATile : public AActor
{
	GENERATED_BODY()

//////////////////
//MEMBER VARIABLES
//////////////////
private:
	UPROPERTY(VisibleAnywhere)
	ATileObject* childObject;

public:	
	// Sets default values for this actor's properties
	ATile();

/////////////////////////
//ACCESSORS AND MODIFIERS
/////////////////////////
public:
	//Get and set the childObject of the tile
	UFUNCTION(BlueprintCallable)
	ATileObject* GetChildObject();

	UFUNCTION(BlueprintCallable)
	void SetChildObject(ATileObject* ch);
	
};
