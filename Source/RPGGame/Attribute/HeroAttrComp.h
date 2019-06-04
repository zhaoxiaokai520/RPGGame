// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ActorComponent.h"
#include "AttrStrength.h"
#include "AttrAgility.h"
#include "AttrWisdom.h"
#include "AttrLuck.h"
#include "HeroAttrComp.generated.h"

class UPawnAttrComp;


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RPGGAME_API UHeroAttrComp : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHeroAttrComp();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	UPROPERTY(EditAnywhere)
	UAttrStrength *str;
	UPROPERTY(EditAnywhere)
	UAttrAgility *agi;
	UPROPERTY(EditAnywhere)
	UAttrWisdom *wis;
	UPROPERTY(EditAnywhere)
	UAttrLuck *luk;
	UPROPERTY(EditAnywhere)
	int8 good;//…∆∂Ò÷µ
	UPROPERTY(EditAnywhere)
	UPawnAttrComp *pawnAttr;
};
