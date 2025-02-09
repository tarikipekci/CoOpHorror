// Copyright Epic Games, Inc. All Rights Reserved.

#include "CoOpHorrorGameMode.h"
#include "CoOpHorrorCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACoOpHorrorGameMode::ACoOpHorrorGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
