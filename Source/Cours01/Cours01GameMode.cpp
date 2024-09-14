// Copyright Epic Games, Inc. All Rights Reserved.

#include "Cours01GameMode.h"
#include "Cours01Character.h"
#include "UObject/ConstructorHelpers.h"

ACours01GameMode::ACours01GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
