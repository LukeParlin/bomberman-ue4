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

	//Store the MoveComponent for use later on
	MoveComponent = GetCharacterMovement();
	if (MoveComponent)
	{
		//Store our initial speed, taken directly from the MoveComponent
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

//Get the player's bomb range
int32 ABombermanCharacter::GetBombRange()
{
	return bombRange;
}

//Get and set the player's movement speed
float ABombermanCharacter::GetMoveSpeed()
{
	return moveSpeed;
}

void ABombermanCharacter::SetMoveSpeed(float speed)
{
	//This is a special modifier function, as it ALSO sets the speed of the MoveComponent
	moveSpeed = speed;
	MoveComponent->MaxWalkSpeed = speed;
}