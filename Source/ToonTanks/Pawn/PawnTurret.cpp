// Fill out your copyright notice in the Description page of Project Settings.

#include "PawnTurret.h"
#include "Kismet/GameplayStatics.h"

// Called when the game starts or when spawned
void APawnTurret::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->GetTimerManager().SetTimer(FireRateTimerHandle, this, &APawnTurret::CheckFireConditions, FireRate, true);
}

void APawnTurret::CheckFireConditions()
{
	// if Player == null || is Dead THEN BAIL!

	//IF Player is in range THEN Fire!

	UE_LOG(LogTemp, Warning, TEXT("Fire Condition Checked"));
}

// Called every frame
void APawnTurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}