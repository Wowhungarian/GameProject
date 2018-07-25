// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "GameProjectGameMode.h"
#include "GameProjectHUD.h"
#include "GameProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGameProjectGameMode::AGameProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGameProjectHUD::StaticClass();
}
