// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/AssetUserData.h"
#include "PlayAnimUData.generated.h"

/**
 * 
 */
UCLASS()
class RPGGAME_API UPlayAnimUData : public UAssetUserData
{
	GENERATED_BODY()
	
public:
	uint16 animId;
	uint16 time;//frame count
};
