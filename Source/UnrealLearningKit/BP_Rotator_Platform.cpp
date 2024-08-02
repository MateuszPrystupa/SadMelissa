// Fill out your copyright notice in the Description page of Project Settings.


#include "BP_Rotator_Platform.h"

// Sets default values
ABP_Rotator_Platform::ABP_Rotator_Platform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABP_Rotator_Platform::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABP_Rotator_Platform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	RotationPlatform(DeltaTime);
}

void ABP_Rotator_Platform::RotationPlatform(float DeltaTime)
{
	AddActorLocalRotation(CurrentVelocity * DeltaTime);
}