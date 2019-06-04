// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ActorComponent.h"
#include "ActionSystem/Action.h"
#include "MetaActionComp.generated.h"

class AAction;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RPGGAME_API UMetaActionComp : public UActorComponent
{
	GENERATED_BODY()


public:	
	// Sets default values for this component's properties
	UMetaActionComp();
	
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	virtual void StartMetaAction();
	virtual void StopMetaAction();

protected:
	virtual void DoMetaActionFrame();
	virtual bool CheckCondition();

public:

protected:
	uint8 m_frameCount;//frame number count executed
	uint8 m_bActive : 1;//whether metaaction can execution
	uint8 m_bInterrupt : 1;//stopped by other metaaction
	uint8 m_bSuppress : 1;//suppressed by other metaaction
	uint8 m_bDestroy : 1;//should recycle this meta action
	uint8 m_bLoop : 1;//is this meta action need to check condition
	UMetaActionComp *m_sibling;//parallel relation,same time run DoActionFrame
	AAction *m_ownerAction;
	float m_frameTime;
};
