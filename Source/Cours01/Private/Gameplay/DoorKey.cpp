// Fill out your copyright notice in the Description page of Project Settings.


#include "DoorKey.h"

#include "Cours01/Cours01Character.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ADoorKey::ADoorKey()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void ADoorKey::BeginPlay()
{
	Super::BeginPlay();
	MyPlayer = Cast<ACours01Character>(UGameplayStatics::GetPlayerCharacter(GetWorld(),0));
}

void ADoorKey::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved,
	FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	Super::NotifyHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);
	MyPlayer->keysCollected++;
	Destroy();
	
}

// Called every frame
void ADoorKey::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

