// Fill out your copyright notice in the Description page of Project Settings.


#include "ParaPongAIController.h"
#include "Ball.h"

#include <Kismet/GameplayStatics.h>
#include <GenericPlatform/GenericPlatformMath.h>

AParaPongAIController::AParaPongAIController()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AParaPongAIController::BeginPlay()
{
	Super::BeginPlay();

	// Perguntar ao mundo do jogo por uma referência a um objeto da classe ABall
	BallRef = UGameplayStatics::GetActorOfClass(GetWorld(), ABall::StaticClass());
}

void AParaPongAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	APawn* ControlledPawn = GetPawn();

	// Ponteiro para localização da bola
	if (BallRef && ControlledPawn)
	{
		const FVector BallLocation = BallRef->GetActorLocation();
		const FVector PawnLocation = ControlledPawn->GetActorLocation();

		const float Diff = BallLocation.Y - PawnLocation.Y;

		if (FGenericPlatformMath::Abs(Diff) > 10.0f)
		{
			const float MovementScale = FGenericPlatformMath::Sign(Diff);
			ControlledPawn->AddMovementInput(ControlledPawn->GetActorRightVector(), MovementScale);
		}
	}
}