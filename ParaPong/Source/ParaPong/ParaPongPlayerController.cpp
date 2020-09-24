// Fill out your copyright notice in the Description page of Project Settings.


#include "ParaPongPlayerController.h"
#include "ParaPong.h"

void AParaPongPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction(TEXT("SomeAction"), IE_Pressed, this, &AParaPongPlayerController::SomeAction);

	InputComponent->BindAxis(TEXT("MoveRight"), this, &AParaPongPlayerController::MoveRight);
}

void AParaPongPlayerController::SomeAction()
{
	UE_LOG(LogParaPong, Log, TEXT("Some Action"));
}

void AParaPongPlayerController::MoveRight(float Value)
{
	APawn* ControlledPawn = GetPawn();
	if (ControlledPawn)
	{
		ControlledPawn->AddMovementInput(ControlledPawn->GetActorRightVector(), Value);
	}
}