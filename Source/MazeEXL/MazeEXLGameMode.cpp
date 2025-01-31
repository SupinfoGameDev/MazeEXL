// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "MazeEXL.h"
#include "MazeEXLGameMode.h"
#include "MazeEXLCharacter.h"

AMazeEXLGameMode::AMazeEXLGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
