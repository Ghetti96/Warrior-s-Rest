// Copyright Epic Games, Inc. All Rights Reserved.

#include "warriorsRestGameMode.h"
#include "warriorsRestHUD.h"
#include "warriorsRestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AwarriorsRestGameMode::AwarriorsRestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AwarriorsRestHUD::StaticClass();
}
