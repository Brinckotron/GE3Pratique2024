// Fill out your copyright notice in the Description page of Project Settings.


#include "JumpPad.h"

#include "Cours01/Cours01Character.h"

// Sets default values
AJumpPad::AJumpPad()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AJumpPad::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AJumpPad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AJumpPad::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	ACours01Character* myPlayer = Cast<ACours01Character>(OtherActor);
	if (myPlayer)
	{
		myPlayer->LaunchCharacter(GetActorUpVector()*1000, false, true);
	}
}

