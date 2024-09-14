// Fill out your copyright notice in the Description page of Project Settings.


#include "Porte.h"

#include "Kismet/GameplayStatics.h"

// Sets default values
APorte::APorte()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	isCoinLocked = false;
	nmbKeys = 0;
	

}

// Called when the game starts or when spawned
void APorte::BeginPlay()
{
	Super::BeginPlay();
	MyPlayer = Cast<ACours01Character>(UGameplayStatics::GetPlayerCharacter(GetWorld(),0));
	
	
}

// Called every frame
void APorte::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APorte::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved,
	FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	Super::NotifyHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);

	if (!isCoinLocked && !isButtonLocked)
	{Destroy();}
	else
	{
		if(isCoinLocked && MyPlayer->keysCollected >= nmbKeys)
		{Destroy();}
	}
}

