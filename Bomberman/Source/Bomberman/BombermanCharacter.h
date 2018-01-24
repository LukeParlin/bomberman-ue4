// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "BombermanCharacter.generated.h"

UCLASS()
class BOMBERMAN_API ABombermanCharacter : public ACharacter
{
	GENERATED_BODY()

//////////////////
//MEMBER VARIABLES
//////////////////
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int32 playerID;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int32 numBombs = 1;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int32 bombRange = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float moveSpeed;

	UPROPERTY()
	UCharacterMovementComponent* MoveComponent;

//////////////////
//UNREAL FUNCTIONS
//////////////////
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Sets default values for this character's properties
	ABombermanCharacter();

//////////////////
//PUBLIC INTERFACE
//////////////////
public:
	//Subtract one from numBombs
	UFUNCTION()
	void DropBomb();

	//Add one to numBombs
	UFUNCTION(BlueprintCallable)
	void AddBomb();

/////////////////////////
//ACCESSORS AND MODIFIERS
/////////////////////////
public:
	//Get and set the player's ID
	UFUNCTION()
	int32 GetPlayerID();

	UFUNCTION()
	void SetPlayerID(int32 id);

	//Get and set the player's number of bombs
	UFUNCTION()
	int32 GetNumBombs();

	UFUNCTION()
	void SetNumBombs(int32 num);

};
