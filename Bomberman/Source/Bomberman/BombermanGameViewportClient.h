#pragma once

#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "BombermanGameViewportClient.generated.h"

/**
 *	!! We are overwriting the GameViewportClient class to pass kayboard input to ALL PlayerControllers !!
 *	!! This idea / code comes from this guide on the Unreal Wiki: https://wiki.unrealengine.com/Local_Multiplayer_Tips
 */

UCLASS()
class BOMBERMAN_API UBombermanGameViewportClient : public UGameViewportClient
{
	GENERATED_BODY()
	
public:
	//For now we're only overwriting the InputKey method. If we wanted to pass gamepad or mouse input to all players, we would need to override more methods.
	virtual bool InputKey(FViewport* Viewport, int32 ControllerId, FKey Key, EInputEvent EventType, float AmountDepressed = 1.f, bool bGamepad = false) override;
	
};
