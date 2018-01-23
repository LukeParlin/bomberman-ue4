// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"

#include "Engine/Engine.h"
#include "Engine/World.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
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

private:
	////////////////////////////////////
	//PROPERTIES TO BE SET IN THE EDITOR
	////////////////////////////////////
	UPROPERTY(EditAnywhere)
	TSubclassOf<ACharacter> SpawnP1;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ACharacter> SpawnP2;

	UPROPERTY(EditAnywhere)
	FIntPoint playerSpawnOffset;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ATile> SpawnTile;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ATileObject> SpawnWall;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ATileObject> SpawnBreakable;

	UPROPERTY(EditAnywhere)
	FIntPoint mapSize;

	//////////////////
	//MEMBER VARIABLES
	//////////////////
	UPROPERTY(VisibleAnywhere)
	TArray<FMapRow> mapTiles;

	UPROPERTY(VisibleAnywhere)
	ACharacter* player1;

	UPROPERTY(VisibleAnywhere)
	ACharacter* player2;

	UPROPERTY(VisibleAnywhere)
	APlayerController* player1Controller;

	UPROPERTY(VisibleAnywhere)
	APlayerController* player2Controller;

public:
	// Sets default values for this actor's properties
	ABombermanGameModeBase();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

//////////////////
//HELPER FUNCTIONS
//////////////////
private:
	//Create the level from scratch: spawn the environment and the players
	UFUNCTION()
	void GenerateLevel(int32 levelWidth, int32 levelHeight);

	//Translate a world position into tile coordinates on the map
	UFUNCTION()
	FIntPoint GetTileCoords(FVector pos);

};
