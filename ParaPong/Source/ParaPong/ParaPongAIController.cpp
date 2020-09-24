// Fill out your copyright notice in the Description page of Project Settings.


#include "ParaPongAIController.h"

AParaPongAIController::AParaPongAIController()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AParaPongAIController::BeginPlay()
{
	Super::BeginPlay();

}

void AParaPongAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}