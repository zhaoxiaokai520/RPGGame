// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/AssetUserData.h"
#include "TrackUData.generated.h"

/**
 * 
 */
UCLASS()
class RPGGAME_API UTrackUData : public UAssetUserData
{
	GENERATED_BODY()

public:
	TArray<FIntVector> points;
	bool bIsStep;//only calculate next one track point
	uint8 speedMul;
	uint8 acceleration;
	uint8 angleSpeed;
	FIntVector direction;
};
