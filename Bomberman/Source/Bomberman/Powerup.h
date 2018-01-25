#pragma once

#include "CoreMinimal.h"
#include "TileObject.h"
#include "Powerup.generated.h"

/*
*	The base Powerup class, from which all Powerup Blueprints inherit
*	
*	I have designed the powerups so that any powerup is both combinable and scalable.
*	In theory, we could create some super, hybrid powerups.
*
*	I chose this option so that all powerup blueprint logic would remain in the base class.
*	The Powerup Blueprints which derive from this class are mosrlt cosmetic, but do hold their own different data.
*/
UCLASS()
class BOMBERMAN_API APowerup : public ATileObject
{
	GENERATED_BODY()

////////////////////////////////////
//PROPERTIES TO BE SET IN THE EDITOR
////////////////////////////////////
protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 bombIncrease; //How many extra bomxs this powerup grants

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 rangeIncrease; //How much range this powerup adds to players' bombs

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float speedIncrease; //How much this powerup increases players' speed

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool remoteBomb;	//!!NOT YET IMPLEMENTED!! Whether this powerup triggers Remote Mine mode

public:
	// Sets default values for this actor's properties
	APowerup();

/////////////////////////
//ACCESSORS AND MODIFIERS
/////////////////////////
public:
	//Get the number of bombs granted by this powerup (this is set in the editor, and shouldn't be set in code)
	UFUNCTION(BlueprintCallable)
	int32 GetBombIncrease();

	//Get the extra bomb range granted by this powerup (this is set in the editor, and shouldn't be set in code)
	UFUNCTION(BlueprintCallable)
	int32 GetRangeIncrease();

	//Get the increase in speed granted by this powerup (this is set in the editor, and shouldn't be set in code)
	UFUNCTION(BlueprintCallable)
	float GetSpeedIncrease();

};
