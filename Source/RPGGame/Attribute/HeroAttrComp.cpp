// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroAttrComp.h"
#include "PawnAttrComp.h"

// Sets default values for this component's properties
UHeroAttrComp::UHeroAttrComp()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UHeroAttrComp::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UHeroAttrComp::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

