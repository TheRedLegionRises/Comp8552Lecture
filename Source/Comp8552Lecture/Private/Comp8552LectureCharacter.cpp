// Fill out your copyright notice in the Description page of Project Settings.


#include "Comp8552LectureCharacter.h"

// Sets default values
AComp8552LectureCharacter::AComp8552LectureCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AComp8552LectureCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AComp8552LectureCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AComp8552LectureCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

