// Copyright Epic Games, Inc. All Rights Reserved.

#include "HealthDemoGameMode.h"
#include "HealthDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHealthDemoGameMode::AHealthDemoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
