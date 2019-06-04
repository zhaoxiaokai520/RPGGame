// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ActionSystem/MetaActionComp.h"
#include "TrackMActionComp.generated.h"

class UTrackUData;
/**
 * 
 */
UCLASS()
class RPGGAME_API UTrackMActionComp : public UMetaActionComp
{
	GENERATED_BODY()

public:
	UTrackMActionComp();

	virtual void StartMetaAction() override;

protected:

	virtual void DoMetaActionFrame() override;

private:
	FIntVector stepNextPoint(FIntVector sp, FIntVector ep);

private:
	UTrackUData *m_data;
	uint8 m_speed;
};
