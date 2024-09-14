// Fill out your copyright notice in the Description page of Project Settings.


#include "Bouton.h"

// Sets default values
ABouton::ABouton()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	LinkedDoor = nullptr;

}

// Called when the game starts or when spawned
void ABouton::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABouton::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABouton::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved,
	FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	Super::NotifyHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);
	if (LinkedDoor){LinkedDoor->Destroy();}
}

