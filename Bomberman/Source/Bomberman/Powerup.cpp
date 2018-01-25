#include "Powerup.h"

// Sets default values
APowerup::APowerup()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

//Get the number of bombs granted by this powerup
int32 APowerup::GetBombIncrease()
{
	return bombIncrease;
}

//Get the extra bomb range granted by this powerup
int32 APowerup::GetRangeIncrease()
{
	return rangeIncrease;
}

//Get the increase in speed granted by this powerup
float APowerup::GetSpeedIncrease()
{
	return speedIncrease;
}
