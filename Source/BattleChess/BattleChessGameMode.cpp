// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "BattleChessGameMode.h"
#include "BattleChessPlayerController.h"
#include "BattleChessCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABattleChessGameMode::ABattleChessGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ABattleChessPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}