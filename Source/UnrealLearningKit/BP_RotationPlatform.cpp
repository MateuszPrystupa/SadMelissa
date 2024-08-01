// Fill out your copyright notice in the Description page of Project Settings.


#include "BP_RotationPlatform.h"

// Sets default values
ABP_RotationPlatform::ABP_RotationPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABP_RotationPlatform::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABP_RotationPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	PlatformRotation(DeltaTime);
}

void ABP_RotationPlatform::PlatformRotation(float DeltaTime)
{
	AddActorLocalRotation(RotationVelocity * DeltaTime);
}
