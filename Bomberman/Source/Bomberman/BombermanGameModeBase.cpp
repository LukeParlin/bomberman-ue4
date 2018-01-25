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

	//Set up the PlayerControllers
	UWorld* world = GetWorld();
	if (world)
	{
		//Capture the PlayerControllers for Player 1 and Player 2
		playerControllers.Add(world->GetFirstPlayerController());
		playerControllers.Add(UGameplayStatics::CreatePlayer(this, -1, true)); //We have to create a second PlayerController ourselves

		// Position the Camera according to the map size (find the middle of the map),
		// Then zoom it out according to the map height
		// (Currently only works with ODD NUMBER map dimensions)
		FVector cameraLocation = FVector(TILE_HEIGHT * (mapSize.Y - 1) / 2, TILE_WIDTH * (mapSize.X - 1) / 2, mapSize.Y * TILE_ZOOM);
		playerControllers[0]->GetViewTarget()->SetActorLocation(cameraLocation); //Move the camera
	}

	//Generate a map grid with Y rows of tiles and X columns of tiles
	//Spawn the players and tile objects appropriately
	GenerateLevel(mapSize.X, mapSize.Y);
}

// Called every frame
void ABombermanGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/*#if WITH_EDITOR
		//Debug information to display on-screen which tile each player is currently standing on
		FIntPoint p1Coords = GetTileCoords(player1->GetActorLocation());
		FIntPoint p2Coords = GetTileCoords(player2->GetActorLocation());
		GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Green, FString::Printf(TEXT("Player 1 x: %i, y: %i"), p1Coords.X, p1Coords.Y));
		GEngine->AddOnScreenDebugMessage(2, 2.0f, FColor::Green, FString::Printf(TEXT("Player 2 x: %i, y: %i"), p2Coords.X, p2Coords.Y));
	#endif*/
}

//Spawn a bomb at a player's position and subtract a bomb from that player
void ABombermanGameModeBase::DropBomb(int32 playerID, int32 radius)
{
	UWorld* world = GetWorld();
	if (world)
	{
		FVector spawnLocation = FVector::ZeroVector;

		//Find out which tile the player dropping this bomb is currently on
		FIntPoint bombCoord = GetTileCoords(players[playerID]->GetActorLocation());

		//If the player has bombs remaining, and there's not already an object on this tile, spawn a bomb
		if (players[playerID]->GetNumBombs() > 0 && mapTiles[bombCoord.Y].rowTiles[bombCoord.X]->GetChildObject() == nullptr)
		{
			if (SpawnBomb) //Make sure the Blueprint has been properly linked
			{
				spawnLocation = mapTiles[bombCoord.Y].rowTiles[bombCoord.X]->GetActorLocation(); //Get the location at the CENTER of this tile

				//Create the new bomb, and assign all its necessary data. We get most of this information from the PLAYER
				ABomb* newBomb = world->SpawnActor<ABomb>(SpawnBomb, spawnLocation, FRotator::ZeroRotator);
				newBomb->SetTileCoord(bombCoord);
				newBomb->SetPlayerID(playerID);
				newBomb->SetExplosionRadius(radius);

				//Add the bomb as the child of the tile it's on. This allows it to get hit by chain explosions!!
				mapTiles[bombCoord.Y].rowTiles[bombCoord.X]->SetChildObject(newBomb);
				players[playerID]->DropBomb(); //Take one bomb away from the player who dropped this bomb
			}
		}
	}
}

/*
*	Trigger a bomb explosion from a specified point and refund the player's bomb
*
*	This is not recursive, but it probably could be!
*/
void ABombermanGameModeBase::ExplodeBomb(int32 playerID, int32 radius, FIntPoint bombCoord)
{
	UWorld* world = GetWorld();							 //Bombs shouldn't explode while the game is paused. This allows us to reset the game cleanly,
	if (world && !UGameplayStatics::IsGamePaused(world)) //without bombs exploding while we destroy and remake the level!
	{
		FVector location; //Temporary location variable we will use to spawn effects	

		//Quick array of points representing all 4 cardinal directions:
		FIntPoint dir[4]{
			FIntPoint(0,1),		//UP
			FIntPoint(1,0) ,	//RIGHT
			FIntPoint(0,-1) ,	//DOWN
			FIntPoint(-1,0)		//LEFT
		};

		//The for loop represents each of the cardinal directions: UP, DOWN, LEFT, and RIGHT	
		for (int i = 0; i < 4; ++i)
		{
			bool hitWall = false; //Has the explosion hit a wall?
			int dist = 1; //Distance away from the bomb in our current direction

			do {
				//First, get the adjacent tile's coordinates. I know this next line is unreadable, so bear with me...
				//	mapTiles is a TArray containing each ROW of the map
				//	rowTiles is a TArray of ATile* representing each tile in the row
				//	bombCoord represents the location we are checking our explosion from
				//	dir[i] represents a unit-length vector in a cardinal direction
				//	we multiply dir[i] by dist to get a tile in our current direction, at our current check radius
				FIntPoint adjacentCoords = FIntPoint(bombCoord.X + dir[i].X * dist, bombCoord.Y + dir[i].Y * dist);
				ATile* adjacentTile = mapTiles[adjacentCoords.Y].rowTiles[adjacentCoords.X];

				//If that tile has an object on it, check if the object is breakable
				if (adjacentTile->GetChildObject() != nullptr)
				{
					if (adjacentTile->GetChildObject()->GetDestructible())
					{
						//Destroy a breakable TileObject (if it's a bomb, this will trigger another explosion)
						ATileObject* doomedObject = adjacentTile->GetChildObject();
						adjacentTile->SetChildObject(nullptr);	//The reason we SetChildObject(null) BEFORE Destroy is that powerups spawn when walls are destroyed.
						doomedObject->Destroy();				//If we call SetChildObject(null) AFTER Destroy, the powerup has already been added to childObject, and overwrite its pointer.
					}
					else
					{
						//We have hit a wall (the only non-destructible TileObject, so don't continue checking in this direction
						hitWall = true;

						//Note:
						//Because our level is surrounded by unbreakable walls,
						//we don't need to error-check our coordinates
						//(we'll never go below 0 or above the map width/height)
					}
				}

				//Spawn an explosion effect on the tile we just checked, so long as it wasn't a wall
				if (!hitWall && world && SpawnExplosionEffect)
				{
					location = adjacentTile->GetActorLocation();
					world->SpawnActor<AActor>(SpawnExplosionEffect, location, FRotator::ZeroRotator);
				}

				++dist; //increment the distance for our next check
			//If we haven't reached the explosion radius OR hit an unbreakable wall, repeat the process
			} while (dist <= radius && !hitWall);
		}

		if (SpawnExplosionEffect)
		{
			//Spawn an explosion effect on the site of the explosion (where the bomb was)
			location = mapTiles[bombCoord.Y].rowTiles[bombCoord.X]->GetActorLocation();
			world->SpawnActor<AActor>(SpawnExplosionEffect, location, FRotator::ZeroRotator);
		}

		//Finally, remove the bomb which just blew up from its tile so we can place another bomb there later
		mapTiles[bombCoord.Y].rowTiles[bombCoord.X]->SetChildObject(nullptr);
		players[playerID]->AddBomb(); //Also refund the appropriate player's bomb
	}
}

//Spawn a powerup at a breakable wall's position
void ABombermanGameModeBase::DropPowerup(FIntPoint powerupCoord)
{
	UWorld* world = GetWorld();							 //Powerups shouldn't spawn while the game is paused. This allows us to reset the game cleanly,
	if (world && !UGameplayStatics::IsGamePaused(world)) //without breakables spawning new powerups as we destroy and remake the level!
	{
		int index = FMath::RandRange(0, SpawnPowerups.Num() - 1); //Randomly pick one of our available powerups
		if (SpawnPowerups[index])
		{
			//Get the location of the tile on which the Powerup will spawn
			FVector location = mapTiles[powerupCoord.Y].rowTiles[powerupCoord.X]->GetActorLocation();
			APowerup* newPowerup = world->SpawnActor<APowerup>(SpawnPowerups[index], location, FRotator::ZeroRotator);
			newPowerup->SetTileCoord(powerupCoord); //Set the map grid coordinates of the Powerup after it's spawned

			mapTiles[powerupCoord.Y].rowTiles[powerupCoord.X]->SetChildObject(newPowerup); //Then attach it to it's appropriate tile
		}
	}
}

/*
*	Clear a tile after its childObject has been destroyed
*	This function exists purely a tile knows it's empty after a Player consumes its Powerup
*/
void ABombermanGameModeBase::ClearTile(FIntPoint tileCoord)
{
	mapTiles[tileCoord.Y].rowTiles[tileCoord.X]->SetChildObject(nullptr);
}

/*
*	Randomly generate a new map grid based on a specified map size
*	The map grid can scale arbitrarily, but the wall pattern is based on the first level of the original Bomberman
*
*	This function spawns:
*	>	TILES
*	>	WALLS
*	>	BREAKABLE WALLS
*	>	PLAYERS
*
*	It also checks to make sure Players aren't "trapped" on spawn
*/
void ABombermanGameModeBase::GenerateLevel(int32 levelWidth, int32 levelHeight)
{
	UWorld* world = GetWorld();
	if (world)
	{
		FVector spawnLocation = FVector::ZeroVector;
		FRotator spawnRotator = FRotator::ZeroRotator;

		// Player1 spawns at playerSpawnOffset (starting from the bottom left of the map)
		// Player2 spawns starting from the top right of the map, so we need to calculate his start point
		FIntPoint player2SpawnOffset = FIntPoint(levelWidth - 1 - playerSpawnOffset.X, levelHeight - 1 - playerSpawnOffset.Y);

		/////////////////////////////
		//Build the map, tile by tile
		/////////////////////////////
		for (int32 i = 0; i < levelHeight; ++i)
		{
			FMapRow mapRow; //Build each row of the map grid...
			for (int32 j = 0; j < levelWidth; ++j)
			{
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
				else if (i == playerSpawnOffset.Y && j == playerSpawnOffset.X) //Spawn Player 1 offset from the bottom left of the map
				{
					if (SpawnP1)
					{
						//Spawn Player 1
						players.Add(world->SpawnActor<ABombermanCharacter>(SpawnP1, spawnLocation, spawnRotator));
						players[0]->SetPlayerID(0);
						playerControllers[0]->Possess(players[0]); //Attach the first player to the first PlayerController
					}
				}
				else if (i == player2SpawnOffset.Y && j == player2SpawnOffset.X) //Spawn Player 2 offset from the top right of the map
				{
					if (SpawnP2)
					{

						if (playerControllers[1]) //Because we created this PlayerController ourselves, let's make sure it exists...
						{
							//Spawn Player 2
							players.Add(world->SpawnActor<ABombermanCharacter>(SpawnP2, spawnLocation, spawnRotator));
							players[1]->SetPlayerID(1);
							playerControllers[1]->Possess(players[1]); //Attach the second player to the second PlayerController
						}
					}
				}
				//Safety-check to ensure neither player spawns trapped by walls
				else if (!( FMath::Abs(i - playerSpawnOffset.Y) == 1 && FMath::Abs(j - playerSpawnOffset.X) == 0) &&	//If we're not directly above or below Player 1
					!(FMath::Abs(i - playerSpawnOffset.Y) == 0 && FMath::Abs(j - playerSpawnOffset.X) == 1) &&			//AND we're not directly left or right of Player 1
					!(FMath::Abs(i - player2SpawnOffset.Y) == 1 && FMath::Abs(j - player2SpawnOffset.X) == 0) &&		//AND we're not directly above or below Player 2
					!(FMath::Abs(i - player2SpawnOffset.Y) == 0 && FMath::Abs(j - player2SpawnOffset.X) == 1))			//AND we're not directly left or right of Player 2
				{
					if (FMath::RandRange(0.0f, 1.0f) >= 0.5f) //Spawn destructible walls on 50% of the remaining tiles
					{
						if (SpawnBreakable)
						{
							mapRow.rowTiles[j]->SetChildObject(world->SpawnActor<ATileObject>(SpawnBreakable, spawnLocation, spawnRotator));
							mapRow.rowTiles[j]->GetChildObject()->SetTileCoord(FIntPoint(j, i));
						}
					}
				}
			}
			mapTiles.Add(mapRow); //Store the completed map row
		}
	}
}

/*
*	Reset the game - somebody has won, and has chosen to play again
*
*	Iterate through all our stoarge containers Destroying the entire map as we go
*	We also destroy active Explosions, and the remaining Player(s)
*/
void ABombermanGameModeBase::ResetGame()
{
	//Remove the player pawns...
	while (players.Num() > 0)
	{
		players[0]->Destroy();
		players.RemoveAt(0);
	}

	UWorld* world = GetWorld();
	if (world)
	{
		//Search the scene for any active Explosions
		TArray<AActor*> explosions;
		UGameplayStatics::GetAllActorsOfClass(world, SpawnExplosionEffect, explosions);

		//Remove all remaining Explosions
		while (explosions.Num() > 0)
		{
			explosions[0]->Destroy();
			explosions.RemoveAt(0);
		}
	}

	//Remove each row of the map
	while (mapTiles.Num() > 0)
	{
		//Remove each tile from the row
		while (mapTiles[0].rowTiles.Num() > 0)
		{
			//If the tile has a child, destroy it
			if (mapTiles[0].rowTiles[0]->GetChildObject() != nullptr)
			{
				mapTiles[0].rowTiles[0]->GetChildObject()->Destroy();
			}
			mapTiles[0].rowTiles[0]->Destroy();
			mapTiles[0].rowTiles.RemoveAt(0);
		}
		mapTiles.RemoveAt(0);
	}

	//Generate a new level from scratch
	GenerateLevel(mapSize.X, mapSize.Y);
}

/*
*	Helper Function: Translate a world position into tile coordinates on the map grid
*/
FIntPoint ABombermanGameModeBase::GetTileCoords(FVector pos)
{
	//Our Tile Blueprints have their origin at the center, so we need to compensate by half a tile
	pos.Y += TILE_WIDTH * 0.5f;
	pos.X += TILE_HEIGHT * 0.5f;

	//"Floor" the position to the bottom-left of the current tile
	pos.Y -= FGenericPlatformMath::Fmod(pos.Y, TILE_WIDTH);
	pos.X -= FGenericPlatformMath::Fmod(pos.X, TILE_HEIGHT);

	//Divide by TILE_WIDTH and TILE_HEIGHT to calculate the tile we're on
	return FIntPoint(pos.Y / TILE_WIDTH, pos.X / TILE_HEIGHT);
}
