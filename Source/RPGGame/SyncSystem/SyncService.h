// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "SyncService.generated.h"

/*
* 1.sync network function
* 2.sync debugger function
* 2.1 each action hand a folder,within a frame list with all its meta actions command
*/
UCLASS()
class RPGGAME_API ASyncService : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASyncService();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
