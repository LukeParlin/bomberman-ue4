// Fill out your copyright notice in the Description page of Project Settings.

#include "Bomb.h"


// Sets default values
ABomb::ABomb()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

//Get and set the playerID this bomb belongs to
int32 ABomb::GetPlayerID()
{
	return playerID;
}

void ABomb::SetPlayerID(int32 id)
{
	playerID = id;
}

//Get and set the explosion radius of this bomb
int32 ABomb::GetExplosionRadius()
{
	return explosionRadius;
}

void ABomb::SetExplosionRadius(int32 rad)
{
	explosionRadius = rad;
}
