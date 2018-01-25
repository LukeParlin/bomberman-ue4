#pragma once

#include "CoreMinimal.h"
#include "TileObject.h"
#include "GameFramework/Actor.h"
#include "Tile.generated.h"

/*
*	The base tile class, which forms the foundation of the map grid
*	
*	Each tile is a simple floor, but can contain childObjects which affect gameplay:
*	> Unbreakable Walls
*	> Breakable Walls
*	> Bombs
*	> Powerups
*/
UCLASS()
class BOMBERMAN_API ATile : public AActor
{
	GENERATED_BODY()

//////////////////
//MEMBER VARIABLES
//////////////////
private:
	UPROPERTY(VisibleAnywhere)
	ATileObject* childObject; //A pointer to this tile's child object, if it contains one (tiles may be empty)

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
