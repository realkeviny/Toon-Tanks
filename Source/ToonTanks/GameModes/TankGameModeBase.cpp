// Fill out your copyright notice in the Description page of Project Settings.

#include "TankGameModeBase.h"

void ATankGameModeBase::BeginPlay()
{
	//Get references and game win/lose conditions

	//Call HandleGameStart to initialise the start countdown,turret activation,pawn check...
}

void ATankGameModeBase::ActorDied(AActor* DeadActor)
{
	//Check what type of Actor died,if that's a turret,tally,a tank,go to lose processing
	UE_LOG(LogTemp, Warning, TEXT("A Pawn Died"));
}

void ATankGameModeBase::HandleGameStart()
{
	//Initialise countdown,turret activation,pawn check,etc.
	//Call blueprint version start
}

void ATankGameModeBase::HandleGameOver(bool PlayerWon)
{
	//See if player destroyed all turrets,show won.
	//Or show lose
	//Call blueprint version gameover
}