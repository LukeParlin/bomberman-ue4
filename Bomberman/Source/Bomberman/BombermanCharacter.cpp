// Fill out your copyright notice in the Description page of Project Settings.

#include "BombermanCharacter.h"


// Sets default values
ABombermanCharacter::ABombermanCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABombermanCharacter::BeginPlay()
{
	Super::BeginPlay();

	MoveComponent = GetCharacterMovement();
	if (MoveComponent)
	{
		moveSpeed = MoveComponent->MaxWalkSpeed;
	}
}

//Subtract one from numBombs
void ABombermanCharacter::DropBomb()
{
	--numBombs;
}

//Add one to numBombs
void ABombermanCharacter::AddBomb()
{
	++numBombs;
}

//Get and set the player's ID
int32 ABombermanCharacter::GetPlayerID()
{
	return playerID;
}

void ABombermanCharacter::SetPlayerID(int32 id)
{
	playerID = id;
}

//Get and set the player's number of bombs
int32 ABombermanCharacter::GetNumBombs()
{
	return numBombs;
}

void ABombermanCharacter::SetNumBombs(int32 num)
{
	numBombs = num;
}