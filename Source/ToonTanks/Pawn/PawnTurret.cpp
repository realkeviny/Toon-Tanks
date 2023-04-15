// Fill out your copyright notice in the Description page of Project Settings.

#include "PawnTurret.h"

#include "PawnTank.h"
#include "Kismet/GameplayStatics.h"

// Called when the game starts or when spawned
void APawnTurret::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->GetTimerManager().SetTimer(FireRateTimerHandle, this, &APawnTurret::CheckFireConditions, FireRate, true);

	PlayerPawn = Cast<APawnTank>(UGameplayStatics::GetPlayerPawn(this, 0));
}

void APawnTurret::CheckFireConditions()
{
	// if Player == null || is Dead THEN BAIL!
	if (!PlayerPawn)
	{
		return;
	}
	//IF Player is in range THEN Fire!
	if (ReturnDistanceToPlayer() <= FireRange)
	{
		//Fire
		UE_LOG(LogTemp, Warning, TEXT("Fire Condition Success"));
	}
}

float APawnTurret::ReturnDistanceToPlayer()
{
	if (!PlayerPawn)
	{
		return 0.0f;
	}

	return FVector::Dist(PlayerPawn->GetActorLocation(), GetActorLocation());
}

// Called every frame
void APawnTurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}