// Copyright Epic Games, Inc. All Rights Reserved.


#include "ParaPongGameModeBase.h"
#include "ParaPongPlayerController.h"
#include "ParaPongCharacter.h"
#include "ParaPongGameState.h"

AParaPongGameModeBase::AParaPongGameModeBase()
{
	DefaultPawnClass = AParaPongCharacter::StaticClass();
	GameStateClass = AParaPongGameState::StaticClass();
	PlayerControllerClass = AParaPongPlayerController::StaticClass();
}