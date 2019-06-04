// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "BaseActor.generated.h"

UCLASS()
class RPGGAME_API ABaseActor : public AActor
{
	GENERATED_BODY()

protected:
	// Sets default values for this actor's properties
	ABaseActor();
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	// enable or disable its all function
	UPROPERTY(EditAnywhere)
	bool bActive;

public:	
	UFUNCTION(BlueprintCallable)
	void SetActive(bool isActive);
};
