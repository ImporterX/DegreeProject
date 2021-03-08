// Copyright Epic Games, Inc. All Rights Reserved.

#include "DegreeProjectGameMode.h"
#include "DegreeProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADegreeProjectGameMode::ADegreeProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
