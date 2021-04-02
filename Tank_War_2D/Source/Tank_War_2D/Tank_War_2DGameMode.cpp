// Copyright Epic Games, Inc. All Rights Reserved.

#include "Tank_War_2DGameMode.h"
#include "Tank_War_2DCharacter.h"

ATank_War_2DGameMode::ATank_War_2DGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = ATank_War_2DCharacter::StaticClass();	
}
