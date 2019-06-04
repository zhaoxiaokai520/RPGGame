// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/HUD.h"
#include "GlobalMacro.h"
using namespace NS_Battle;
#include "ActionDebuger.generated.h"

/**
 * debug action on high level(blueprint)
 * low level meta action debug is responded by sync frame system
 */
UCLASS()
class RPGGAME_API AActionDebuger : public AHUD
{
	GENERATED_BODY()
	
public:
	void DrawMAction(MActionType mtype);
};
