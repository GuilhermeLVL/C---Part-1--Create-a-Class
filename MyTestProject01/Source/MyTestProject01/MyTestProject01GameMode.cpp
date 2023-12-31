// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyTestProject01GameMode.h"
#include "MyTestProject01Character.h"
#include "UObject/ConstructorHelpers.h"

AMyTestProject01GameMode::AMyTestProject01GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
