// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Soldier.h"
#include "Attribute/HeroAttrComp.h"
#include "Hero.generated.h"

UCLASS()
class RPGGAME_API AHero : public ASoldier
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AHero();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	UHeroAttrComp *m_heroAttr;
};
