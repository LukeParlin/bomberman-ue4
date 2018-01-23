// Fill out your copyright notice in the Description page of Project Settings.

#include "BombermanGameModeBase.h"


// Sets default values
ABombermanGameModeBase::ABombermanGameModeBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABombermanGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Beginning Bomberman game..."));

	if (SpawnTile) {
		UE_LOG(LogTemp, Warning, TEXT("Spawning Tiles..."));
		
		//Generate a level with Y rows of tiles and X columns of tiles
		GenerateMap(mapSize.X, mapSize.Y);
	}
}

// Called every frame
void ABombermanGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//Spawn tiles in the game world to create the level
void ABombermanGameModeBase::GenerateMap(int32 width, int32 height)
{
	UWorld* world = GetWorld();
	if (world) {

		FVector location = FVector::ZeroVector;
		FRotator rotator = FRotator::ZeroRotator;

		for (int32 i = 0; i < height; ++i) {
			FMapRow mapRow;
			for (int32 j = 0; j < width; ++j) {
				location.X = i * TILE_WIDTH;
				location.Y = j * TILE_HEIGHT;

				mapRow.rowTiles.Add(world->SpawnActor<ATile>(SpawnTile, location, rotator));

				if (SpawnWall && SpawnBreakable) {
					//If we're in the top or bottom rows, spawn walls
					if (i == 0 || i == height - 1) {
						mapRow.rowTiles[j]->SetChildObject(world->SpawnActor<ATileObject>(SpawnWall, location, rotator));
					}
					else if (j == 0 || j == width - 1)
					{
						mapRow.rowTiles[j]->SetChildObject(world->SpawnActor<ATileObject>(SpawnWall, location, rotator));
					}
					else if (!(i % 2) && !(j % 2))
					{
						mapRow.rowTiles[j]->SetChildObject(world->SpawnActor<ATileObject>(SpawnWall, location, rotator));
					}
					else if (FMath::RandRange(0.0f, 1.0f) < 0.3f) {
						mapRow.rowTiles[j]->SetChildObject(world->SpawnActor<ATileObject>(SpawnBreakable, location, rotator));
					}
				}
			}
			mapTiles.Add(mapRow);
		}
	}
}

