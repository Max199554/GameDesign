// Fill out your copyright notice in the Description page of Project Settings.

#include "MyStealthController.h"

// Sets default values
AMyStealthController::AMyStealthController()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	isInStealth = false;
}

// Called when the game starts or when spawned
void AMyStealthController::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyStealthController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyStealthController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

