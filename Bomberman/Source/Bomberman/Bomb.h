#pragma once

#include "CoreMinimal.h"
#include "TileObject.h"
#include "Bomb.generated.h"

//The Bomb class, from which the Bomb Blueprint inherits
UCLASS()
class BOMBERMAN_API ABomb : public ATileObject
{
	GENERATED_BODY()

//////////////////
//MEMBER VARIABLES
//////////////////
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int32 playerID;	//The ID of the player this bomb belongs to

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int32 explosionRadius; //How large an explosion this bomb causes

public:
	//Sets default values for this actor's properties
	ABomb();
	
	/////////////////////////
	//ACCESSORS AND MODIFIERS
	/////////////////////////
public:
	//Get and set the playerID this bomb belongs to
	UFUNCTION(BlueprintCallable)
	int32 GetPlayerID();

	UFUNCTION(BlueprintCallable)
	void SetPlayerID(int32 id);

	//Get and set the explosion radius of this bomb
	UFUNCTION(BlueprintCallable)
	int32 GetExplosionRadius();

	UFUNCTION(BlueprintCallable)
	void SetExplosionRadius(int32 rad);
};
