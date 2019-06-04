// Fill out your copyright notice in the Description page of Project Settings.


#include "TrackMActionComp.h"
#include "UserData/TrackUData.h"

UTrackMActionComp::UTrackMActionComp()
{

}

void UTrackMActionComp::StartMetaAction()
{
	Super::StartMetaAction();
	//speed = data->speedMul * ownerAction->bindActor->
}

void UTrackMActionComp::DoMetaActionFrame()
{
	FIntVector tp, sp;
	tp = m_ownerAction->m_targetPos;
	sp = m_ownerAction->m_castPos;

	if (m_data->bIsStep)
	{
		m_data->points.Add(stepNextPoint(sp, tp));
	}
	else
	{
		while (!(tp == sp))
		{
			sp = stepNextPoint(sp, tp);
			m_data->points.Add(sp);
		}
	}
}

FIntVector UTrackMActionComp::stepNextPoint(FIntVector sp, FIntVector ep)
{
	return FIntVector();
}
