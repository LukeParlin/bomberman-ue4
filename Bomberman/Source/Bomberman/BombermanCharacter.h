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

	UPROPERTY(Editanywhere, BlueprintReadWrite)
	int32 numBombs = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 bombRange = 1;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
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
	UFUNCTION()
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

	//Get the player's number of bombs
	UFUNCTION()
	int32 GetNumBombs();

	//Get the player's bomb range
	UFUNCTION()
	int32 GetBombRange();

	//Get and set the player's movement speed
	UFUNCTION()
	float GetMoveSpeed();

	UFUNCTION(BlueprintCallable)
	void SetMoveSpeed(float speed);

};
