// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseActor.h"

ABaseActor::ABaseActor()
{
	bActive = true;
}

void ABaseActor::BeginPlay()
{
	if (!bActive)
		SetActive(bActive);	
	else
		Super::BeginPlay();

}

void ABaseActor::SetActive(bool isActive)
{
	SetActorHiddenInGame(!isActive);
	SetActorEnableCollision(isActive);
	SetActorTickEnabled(isActive);
}
