// Copyright Epic Games, Inc. All Rights Reserved.

#include "VideoProjectGameMode.h"
#include "VideoProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AVideoProjectGameMode::AVideoProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
