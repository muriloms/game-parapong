// Fill out your copyright notice in the Description page of Project Settings.


#include "Ball.h"

#include <Kismet/KismetMathLibrary.h>

// Sets default values
ABall::ABall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BallMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BallMesh"));
	SetRootComponent(BallMesh);

}

// Called when the game starts or when spawned
void ABall::BeginPlay()
{
	Super::BeginPlay();

	Direction = GetRandomXYDirection();
	
	// Habilita "Simulation Generates Hit Events"
	BallMesh->SetNotifyRigidBodyCollision(true);

	// Movimento da bola somente no plano XY
	BallMesh->SetConstraintMode(EDOFMode::XYPlane);

	// Habilitar simulação física
	BallMesh->SetSimulatePhysics(true);

	// Definir massa do objeto
	BallMesh->SetMassOverrideInKg(NAME_None, 1.0f, true);
}

// Called every frame
void ABall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (BallMesh)
	{
		FVector Force = Direction * 500.0f;
		BallMesh->AddForce(Force);
	}
	
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
