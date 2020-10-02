// Fill out your copyright notice in the Description page of Project Settings.


#include "ParaPongGameState.h"
#include "ParaPongCharacter.h"
#include "Ball.h"

#include "ParaPong.h"

#include <Kismet/GameplayStatics.h>
#include <Camera/CameraActor.h>

AParaPongGameState::AParaPongGameState()
{
	Player1Score = 0;
	Player2Score = 0;
	ScoreToWin = 2;
	StartMatchCountdown = 5;
	bIsGameOver = false;
}

void AParaPongGameState::BeginPlay()
{
	Super::BeginPlay();

	/*
	AActor* BallActor = UGameplayStatics::GetActorOfClass(GetWorld(), ABall::StaticClass());

	if (BallActor)
	{
		BallRef = Cast<ABall>(BallActor);
	}
	*/

	// Configurar a camera do jogo
	if (APlayerController* PlayerController = GetWorld()->GetFirstPlayerController())
	{
		PlayerController->SetViewTarget(MainCamera);
	}
	
	// Inicia o timer de inicio da partida
	const float TimerRate = 1.0f; // frequencia com que o timer vai ser chamado
	const bool bLoop = true; // se o timer deve ser recorrente
	const float TimerDelay = 2.0f; // delay para o inicio do timer
	GetWorldTimerManager().SetTimer(StartMatchTimer, this, &AParaPongGameState::OnStartMatchCountdown, TimerRate, bLoop, TimerDelay);
	
}

void AParaPongGameState::IncrementScore(AParaPongCharacter* Player)
{
	if (Player == Player1Ref)
	{
		Player1Score++;

		// verificar se player 1 ganhou
		CheckVictory(Player1Ref, Player1Score);
	}
	else if (Player == Player2Ref)
	{
		Player2Score++;

		// verificar se player 2 ganhou
		CheckVictory(Player2Ref, Player2Score);
	}
}

void AParaPongGameState::CheckVictory(class AParaPongCharacter* Player, int32 Score)
{
	if (Score == ScoreToWin)
	{
		bIsGameOver = false;

		if (BallRef)
		{
			BallRef->StopMovement();
			BallRef->ResetMovement();
		}
	}
}

void AParaPongGameState::OnStartMatchCountdown()
{
	UE_LOG(LogParaPong, Log, TEXT("Partida começa em %d s"), StartMatchCountdown);

	StartMatchCountdown--;

	if (StartMatchCountdown == 0)
	{
		GetWorldTimerManager().ClearTimer(StartMatchTimer);

		if (BallRef)
		{
			BallRef->StartMovement();
		}
	}
}

void AParaPongGameState::SetupGame(AParaPongCharacter* Player1,
	AParaPongCharacter* Player2,
	ABall* Ball,
	ACameraActor* Camera)
{
	Player1Ref = Player1;
	Player2Ref = Player2;
	BallRef = Ball;
	MainCamera = Camera;
}