#include "Tile.h"

// Sets default values
ATile::ATile()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

//Get and set the childObject of the tile
ATileObject* ATile::GetChildObject()
{
	return childObject;
}

void ATile::SetChildObject(ATileObject* ch)
{
	childObject = ch;
}
