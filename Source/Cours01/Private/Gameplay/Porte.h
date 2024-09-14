// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Cours01/Cours01Character.h"
#include "GameFramework/Actor.h"
#include "Porte.generated.h"

UCLASS()
class APorte : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APorte();
	UPROPERTY(BlueprintReadWrite, EditAnywhere) bool isCoinLocked;
	UPROPERTY(BlueprintReadWrite, EditAnywhere) bool isButtonLocked;
	UPROPERTY(BlueprintReadWrite, EditAnywhere) int nmbKeys;
	ACours01Character* MyPlayer;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;

};
