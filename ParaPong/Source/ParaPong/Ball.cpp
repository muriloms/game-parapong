// Fill out your copyright notice in the Description page of Project Settings.


#include "Ball.h"

#include <Kismet/KismetMathLibrary.h>

#include "ParaPong.h"

// Sets default values
ABall::ABall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BallMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BallMesh"));
	SetRootComponent(BallMesh);

	// Em um evento de colisao, chame a funcao OnBallHit
	OnActorHit.AddDynamic(this, &ABall::OnBallHit);

}

// Called when the game starts or when spawned
void ABall::BeginPlay()
{
	Super::BeginPlay();

	Direction = GetRandomXYDirection();

	// Ler a posicao corrente da bola
	InitialLocation = GetActorLocation();
	
	// Habilita "Simulation Generates Hit Events"
	BallMesh->SetNotifyRigidBodyCollision(true);

	// Movimento da bola somente no plano XY
	BallMesh->SetConstraintMode(EDOFMode::XYPlane);

	// Habilitar simulação física
	StopMovement();

	// Definir massa do objeto
	BallMesh->SetMassOverrideInKg(NAME_None, 1.0f, true);


}

// Called every frame
void ABall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (BallMesh && BallMesh->IsSimulatingPhysics())
	{
		FVector Force = Direction * 500.0f;
		BallMesh->AddForce(Force);
	}
	
}

void ABall::OnBallHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit)
{
	Direction = UKismetMathLibrary::GetReflectionVector(Direction, Hit.Normal);
	UE_LOG(LogParaPong, Log, TEXT("Direction: %s"), *Direction.ToString());
}

void ABall::StartMovement()
{
	if (BallMesh)
	{
		Direction = GetRandomXYDirection();
		BallMesh->SetSimulatePhysics(true);
	}
}

void ABall::StopMovement()
{
	if (BallMesh)
	{
		BallMesh->SetSimulatePhysics(false);
	}
}

void ABall::ResetMovement()
{
	SetActorLocation(InitialLocation);
}

FVector ABall::GetRandomXYDirection() const
{
	FVector RandomDirection;
	do
	{
		RandomDirection = UKismetMathLibrary::RandomUnitVector();
		RandomDirection.Z = 0.0f;
	} 
	while (!RandomDirection.Normalize());
	
	return RandomDirection;
}
