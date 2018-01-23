// Fill out your copyright notice in the Description page of Project Settings.

#include "TileObject.h"


// Sets default values
ATileObject::ATileObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

//Get whather this object can be blown up by a bomb
bool ATileObject::GetDestructible()
{
	return isDestructible;
}

//Get and set grid coordinate of the tile
FIntPoint ATileObject::GetTileCoord()
{
	return tileCoord;
}

void ATileObject::SetTileCoord(FIntPoint tc)
{
	tileCoord = tc;
}
