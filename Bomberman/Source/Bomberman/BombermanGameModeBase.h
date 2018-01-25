#pragma once

#include "CoreMinimal.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "Bomb.h"
#include "BombermanCharacter.h"
#include "Powerup.h"
#include "Tile.h"
#include "TileObject.h"
#include "GameFramework/GameModeBase.h"
#include "BombermanGameModeBase.generated.h"

#define TILE_WIDTH 400		//The width of a single tile in Unreal units
#define TILE_HEIGHT 400		//The height of a single tile in Unreal units
#define TILE_ZOOM 370		//How far the camera should be pulled back to fit a single row of tiles on screen

/*
*	A small support struct for our map grid, representing a single row of map tiles
*	
*	Unreal doesn't allow 2-dimentionsl TArrays.
*	We get around that limitation by wrapping our inner TArray inside this struct.
*/
USTRUCT()
struct FMapRow
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY()
	TArray<ATile*> rowTiles;

	FMapRow()
	{
	}
};

/*
 *	Our own GameModeBase class - the main game class!
 *
 *	This class functions like a game manager, and is responsible for:
 *	> Generating the map grid
 *	> Spawning players
 *	> Spawning bombs and powerups
*	> Handling bomb explosions
 */
UCLASS()
class BOMBERMAN_API ABombermanGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

protected:
	////////////////////////////////////
	//PROPERTIES TO BE SET IN THE EDITOR
	////////////////////////////////////
	UPROPERTY(EditAnywhere)
	TSubclassOf<ABombermanCharacter> SpawnP1; //Blueprint for the Red player character

	UPROPERTY(EditAnywhere)
	TSubclassOf<ABombermanCharacter> SpawnP2; //Blueprint for the Blue player character

	UPROPERTY(EditAnywhere)
	FIntPoint playerSpawnOffset;	//X and Y distance from the corners at which the players spawn
									//Red spawns from the bottom-left, Blue spawns from the top-right
	UPROPERTY(EditAnywhere)
	TSubclassOf<ATile> SpawnTile; //Blueprint for the blank tile

	UPROPERTY(EditAnywhere)
	TSubclassOf<ATileObject> SpawnWall; //Blueprint for an indestructible wall

	UPROPERTY(EditAnywhere)
	TSubclassOf<ATileObject> SpawnBreakable; //Blueprint for a breakable wall

	UPROPERTY(EditAnywhere)
	TSubclassOf<ABomb> SpawnBomb; //Blueprint for the bomb

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> SpawnExplosionEffect; //Blueprint for the explosion effect which spawns after bombs explods

	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<APowerup>> SpawnPowerups;	//This Array should contain (3) Blueprints:
													//> The bomb powerup Blueprint
													//> The explosion radius powerup Blueprint
													//> The speed increase powerup Blueprint
	UPROPERTY(EditAnywhere)
	FIntPoint mapSize; //The width (X) and height (Y) of the map grid we wish to spawn

	//////////////////
	//MEMBER VARIABLES
	//////////////////
	UPROPERTY(VisibleAnywhere)
	TArray<FMapRow> mapTiles; //Our "2D TArray" containing every tile in the level. In actuality, it's a TArray of FMapRow structs.

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TArray<ABombermanCharacter*> players; //A TArray of pointers to our Players. Currently we only use two players, but we could easily support more!

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TArray<APlayerController*> playerControllers; //A TArray of pointers to our PlayerControllers. Currently we only use two player controllers, but we could easily support more!

//////////////////
//UNREAL FUNCTIONS
//////////////////
public:
	// Sets default values for this actor's properties
	ABombermanGameModeBase();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

//////////////////
//PUBLIC INTERFACE
//////////////////
public:
	//Spawn a bomb at a player's position and subtract a bomb from that player
	UFUNCTION(BlueprintCallable)
	void DropBomb(int32 playerID, int32 radius);

	//Trigger a bomb explosion from a specified point and refund the player's bomb
	UFUNCTION(BlueprintCallable)
	void ExplodeBomb(int32 playerID, int32 radius, FIntPoint bombCoord);

	//Spawn a powerup at a breakable wall's position
	UFUNCTION(BlueprintCallable)
	void DropPowerup(FIntPoint powerupCoord);

	//Clear a tile after its childObject has been destroyed
	UFUNCTION(BlueprintCallable)
	void ClearTile(FIntPoint tileCoord);

//////////////////
//HELPER FUNCTIONS
//////////////////
private:
	//Create the level from scratch: spawn the environment and the players
	UFUNCTION()
	void GenerateLevel(int32 levelWidth, int32 levelHeight);

	//Reset the game - somebody has won, and has chosen to play again
	UFUNCTION(BlueprintCallable)
	void ResetGame();

	//Translate a world position into tile coordinates on the map
	UFUNCTION()
	FIntPoint GetTileCoords(FVector pos);

};
