// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "warriorsRestHUD.generated.h"

UCLASS()
class AwarriorsRestHUD : public AHUD
{
	GENERATED_BODY()

public:
	AwarriorsRestHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

