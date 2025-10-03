// Copyright Epic Games, Inc. All Rights Reserved.

#include "playgroundGameMode.h"
#include "playgroundCharacter.h"
#include "UObject/ConstructorHelpers.h"

AplaygroundGameMode::AplaygroundGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
