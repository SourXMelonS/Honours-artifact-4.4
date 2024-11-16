// Copyright Epic Games, Inc. All Rights Reserved.

#include "HonoursArtifactGameMode.h"
#include "HonoursArtifactCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHonoursArtifactGameMode::AHonoursArtifactGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
