// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjThirdPersonGameMode.h"
#include "ProjThirdPersonCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjThirdPersonGameMode::AProjThirdPersonGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
