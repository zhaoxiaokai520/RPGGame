// Fill out your copyright notice in the Description page of Project Settings.

#include "MetaActionComp.h"

// Sets default values for this component's properties
UMetaActionComp::UMetaActionComp()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	m_bActive = false;
	m_bInterrupt = false;
	m_bSuppress = false;
	m_bDestroy = false;
	m_bLoop = false;
	m_frameTime = 0.0f;
	// ...
}


// Called when the game starts
void UMetaActionComp::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
void UMetaActionComp::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
	
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (m_bActive && !m_bSuppress)
	{
		m_frameTime += DeltaTime;
		if (m_frameTime >= 0.3f)
		{
			bool checkSucc = false;
			if (!m_bInterrupt)
			{
				DoMetaActionFrame();

				if (m_bLoop)
				{
					checkSucc = CheckCondition();
				}
				m_frameTime -= 0.3f;
			}
			if (!checkSucc)
				StopMetaAction();
		}
	}
}

void UMetaActionComp::StartMetaAction()
{
	m_bActive = true;
}

void UMetaActionComp::StopMetaAction()
{
	m_bActive = false;
	m_bDestroy = true;
}

void UMetaActionComp::DoMetaActionFrame()
{
}

bool UMetaActionComp::CheckCondition()
{
	return true;
}

