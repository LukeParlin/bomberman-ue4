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

	//Generate a level with Y rows of tiles and X columns of tiles
	GenerateLevel(mapSize.X, mapSize.Y);
}

// Called every frame
void ABombermanGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/*#if WITH_EDITOR
		FIntPoint p1Coords = GetTileCoords(player1->GetActorLocation());
		FIntPoint p2Coords = GetTileCoords(player2->GetActorLocation());
		GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Green, FString::Printf(TEXT("Player 1 x: %i, y: %i"), p1Coords.X, p1Coords.Y));
		GEngine->AddOnScreenDebugMessage(2, 2.0f, FColor::Green, FString::Printf(TEXT("Player 2 x: %i, y: %i"), p2Coords.X, p2Coords.Y));
	#endif*/

}

//Spawn tiles in the game world to create the level
void ABombermanGameModeBase::GenerateLevel(int32 levelWidth, int32 levelHeight)
{
	UWorld* world = GetWorld();
	if (world) {

		//Capture the PlayerControllers for Player 1 and Player 2
		player1Controller = world->GetFirstPlayerController();
		player2Controller = UGameplayStatics::CreatePlayer(this, -1, true);

		FVector spawnLocation = FVector::ZeroVector;
		FRotator spawnRotator = FRotator::ZeroRotator;

		/////////////////////////////
		//Build the map, tile by tile
		/////////////////////////////
		for (int32 i = 0; i < levelHeight; ++i) {
			FMapRow mapRow;
			for (int32 j = 0; j < levelWidth; ++j) {
				spawnLocation.X = i * TILE_WIDTH;	//Set the world X position of each tile
				spawnLocation.Y = j * TILE_HEIGHT;	//Set the world Y position of each tile

				if (SpawnTile)
				{
					mapRow.rowTiles.Add(world->SpawnActor<ATile>(SpawnTile, spawnLocation, spawnRotator)); //Spawn an empty tile
				}

				if (i == 0 || i == levelHeight - 1 ||	//If we're in the top or bottom rows of the level, spawn walls
					j == 0 || j == levelWidth - 1 ||	//If we're on the left or right edges of the level, spawn walls
					(i % 2 == 0 && j % 2 == 0))			//Also spawn walls at coordinates whose X and Y are odd-numbered
				{
					if (SpawnWall)
					{
						mapRow.rowTiles[j]->SetChildObject(world->SpawnActor<ATileObject>(SpawnWall, spawnLocation, spawnRotator));
						mapRow.rowTiles[j]->GetChildObject()->SetTileCoord(FIntPoint(j, i));
					}
				}
				else if (i == playerSpawnOffset.Y && j == playerSpawnOffset.X) //Spawn Player 1 in the bottom left of the map
				{
					if (SpawnP1)
					{
						player1 = world->SpawnActor<ACharacter>(SpawnP1, spawnLocation, spawnRotator);
						player1Controller->Possess(player1);
					}
				}
				else if (i == levelHeight - 1 - playerSpawnOffset.Y && j == levelWidth - 1 - playerSpawnOffset.X) //Spawn Player 2 in the top right of the map
				{
					if (SpawnP2)
					{
						player2 = world->SpawnActor<ACharacter>(SpawnP2, spawnLocation, spawnRotator);
						if (player2Controller)
						{
							player2Controller->Possess(player2);
						}
					}
				}
				else if (FMath::RandRange(0.0f, 1.0f) < 0.3f) //Spawn destructible walls on 30% of the remaining tiles
				{
					if (SpawnBreakable)
					{
						mapRow.rowTiles[j]->SetChildObject(world->SpawnActor<ATileObject>(SpawnBreakable, spawnLocation, spawnRotator));
						mapRow.rowTiles[j]->GetChildObject()->SetTileCoord(FIntPoint(j, i));
					}
				}
			}
			mapTiles.Add(mapRow);
		}
	}
}

//Translate a world position into tile coordinates on the map
FIntPoint ABombermanGameModeBase::GetTileCoords(FVector pos)
{
	//Our Tile Blueprints have their origin at the center, so we need to compensate
	pos.Y += TILE_WIDTH * 0.5f;
	pos.X += TILE_HEIGHT * 0.5f;

	//Get the position at the bottom-left of the current tile
	pos.Y -= FGenericPlatformMath::Fmod(pos.Y, TILE_WIDTH);
	pos.X -= FGenericPlatformMath::Fmod(pos.X, TILE_HEIGHT);

	//Divide by TILE_WIDTH and TILE_HEIGHT to calculate the tile we're on
	return FIntPoint(pos.Y / TILE_WIDTH, pos.X / TILE_HEIGHT);
}
