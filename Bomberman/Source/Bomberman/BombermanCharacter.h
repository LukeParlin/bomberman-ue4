#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "BombermanCharacter.generated.h"

//The class which represents the player characters
UCLASS()
class BOMBERMAN_API ABombermanCharacter : public ACharacter
{
	GENERATED_BODY()

//////////////////
//MEMBER VARIABLES
//////////////////
protected:
	//This player's ID
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int32 playerID;

	//How many bombs this player is holding (editable for testing purposes)
	UPROPERTY(Editanywhere, BlueprintReadWrite)
	int32 numBombs = 1; 

	//How large an explosion this player's bombs cause (editable for testing purposes)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 bombRange = 1;

	//How fast this player moves
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float moveSpeed;

	//We store a pointer to the Character's MoveComponent so that we can directly set its speed
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

	//Get the player's number of bombs (can't be set in C++)
	UFUNCTION()
	int32 GetNumBombs();

	//Get the player's bomb range (can't be set in C++)
	UFUNCTION()
	int32 GetBombRange();

	//Get and set the player's movement speed
	UFUNCTION()
	float GetMoveSpeed();

	UFUNCTION(BlueprintCallable)
	void SetMoveSpeed(float speed);

};
