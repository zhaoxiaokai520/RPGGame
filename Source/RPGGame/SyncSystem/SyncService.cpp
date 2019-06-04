// Fill out your copyright notice in the Description page of Project Settings.


#include "SyncService.h"

// Sets default values
ASyncService::ASyncService()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASyncService::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASyncService::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

