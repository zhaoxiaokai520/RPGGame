// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Action.generated.h"

UCLASS()
class RPGGAME_API AAction : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAction();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	friend class UPlayAnimMActionComp;
	friend class UTrackMActionComp;

private:
	AActor *m_bindActor;
	uint16 m_currFrame;//frame index
	uint16 m_endFrame;//close this meta action
	FIntVector m_castPos;//cast center position
	FIntVector m_targetPos;
};
