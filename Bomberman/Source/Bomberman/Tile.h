// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "TileObject.h"

#include "GameFramework/Actor.h"
#include "Tile.generated.h"

UCLASS()
class BOMBERMAN_API ATile : public AActor
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditAnywhere)
	ATileObject* childObject;

public:	
	// Sets default values for this actor's properties
	ATile();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;	

	/////////////////////////
	//ACCESSORS AND MODIFIERS
	/////////////////////////

public:
	//Get and set the childObject of a tile
	ATileObject* GetChildObject();
	void SetChildObject(ATileObject* ch);
	
};
