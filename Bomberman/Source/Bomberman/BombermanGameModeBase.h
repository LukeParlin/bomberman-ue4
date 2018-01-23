// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"

#include "Engine/World.h"
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
	UPROPERTY(EditAnywhere)
	TSubclassOf<ATile> SpawnTile;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ATileObject> SpawnWall;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ATileObject> SpawnBreakable;

	UPROPERTY(EditAnywhere)
	FIntPoint mapSize;

	UPROPERTY()
	TArray<FMapRow> mapTiles;

public:
	// Sets default values for this actor's properties
	ABombermanGameModeBase();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	//Spawn tiles in the game world to create the level
	void GenerateMap(int32 width, int32 height);

};
