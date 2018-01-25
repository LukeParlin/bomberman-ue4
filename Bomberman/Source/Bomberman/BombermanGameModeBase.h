// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"

#include "Engine/Engine.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

#include "Bomb.h"
#include "BombermanCharacter.h"
#include "Powerup.h"
#include "Tile.h"
#include "TileObject.h"

#include "BombermanGameModeBase.generated.h"

#define TILE_WIDTH 400
#define TILE_HEIGHT 400

/**
*
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

/**
 *
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
	TSubclassOf<ABombermanCharacter> SpawnP1;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ABombermanCharacter> SpawnP2;

	UPROPERTY(EditAnywhere)
	FIntPoint playerSpawnOffset;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ATile> SpawnTile;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ATileObject> SpawnWall;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ATileObject> SpawnBreakable;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ABomb> SpawnBomb;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> SpawnExplosionEffect;

	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<APowerup>> SpawnPowerups;

	UPROPERTY(EditAnywhere)
	FIntPoint mapSize;

	//////////////////
	//MEMBER VARIABLES
	//////////////////
	UPROPERTY(VisibleAnywhere)
	TArray<FMapRow> mapTiles;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TArray<ABombermanCharacter*> players;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TArray<APlayerController*> playerControllers;

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
