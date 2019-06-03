// Fill out your copyright notice in the Description page of Project Settings.

#include "MainPlayer.h"
#include "Classes/GameFramework/CharacterMovementComponent.h"

// Sets default values
AMainPlayer::AMainPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	health = 100;
}

// Called when the game starts or when spawned
void AMainPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMainPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMainPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

bool AMainPlayer::IsCrouchingC() {
	return this->GetCharacterMovement()->IsCrouching();
}

void AMainPlayer::ChangeCrouchState() {
	if (IsCrouchingC() == true) {
		GetCharacterMovement()->Crouch();
	}
	else {
		GetCharacterMovement()->UnCrouch();
	}
}

void AMainPlayer::TakeDamage(int Damage) {
	health -= Damage;
	if (health <= 0) {
		Destroy();
	}
}