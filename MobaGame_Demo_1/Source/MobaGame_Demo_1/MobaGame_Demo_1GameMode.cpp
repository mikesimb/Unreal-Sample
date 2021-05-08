// Copyright Epic Games, Inc. All Rights Reserved.

#include "MobaGame_Demo_1GameMode.h"
#include "MobaGame_Demo_1PlayerController.h"
#include "MobaGame_Demo_1Character.h"
#include "UObject/ConstructorHelpers.h"

AMobaGame_Demo_1GameMode::AMobaGame_Demo_1GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AMobaGame_Demo_1PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character

	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/MobaPawn"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}