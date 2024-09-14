// Fill out your copyright notice in the Description page of Project Settings.


#include "SpinningCube.h"

// Sets default values
ASpinningCube::ASpinningCube()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpinningCube::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpinningCube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AddActorLocalRotation(FRotator(0, 50 * DeltaTime, 0));

}

