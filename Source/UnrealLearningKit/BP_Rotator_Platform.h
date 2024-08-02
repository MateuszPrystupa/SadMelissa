// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BP_Rotator_Platform.generated.h"

UCLASS()
class UNREALLEARNINGKIT_API ABP_Rotator_Platform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABP_Rotator_Platform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category="Rotation")
	FRotator CurrentVelocity = FRotator();

	void RotationPlatform(float DeltaTime);
};
