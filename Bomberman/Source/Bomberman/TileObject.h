// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TileObject.generated.h"

/*
*	The base Tile Object class from which all tile objects inherit
*
*	There are four main types of tile objects:
*	> Unbreakable Walls
*	> Breakable Walls
*	> Bombs
*	> Powerups
*/
UCLASS()
class BOMBERMAN_API ATileObject : public AActor
{
	GENERATED_BODY()

//////////////////
//MEMBER VARIABLES
//////////////////
protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool isDestructible; //Whether this object should be destroyed when it's caught in a bomb explosion (can be set in the editor)

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FIntPoint tileCoord; //The map-grid coordinates of this tile object. Mostly useful for Bombs.

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
