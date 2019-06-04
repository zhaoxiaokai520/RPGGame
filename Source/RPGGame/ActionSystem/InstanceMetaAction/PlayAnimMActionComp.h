// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ActionSystem/MetaActionComp.h"
#include "PlayAnimMActionComp.generated.h"

class UPlayAnimUData;
/**
 * 
 */
UCLASS()
class RPGGAME_API UPlayAnimMActionComp : public UMetaActionComp
{
	GENERATED_BODY()

public:
	UPlayAnimMActionComp();

protected:
	virtual void DoMetaActionFrame() override;
	
private:
	//CRASH if missing pointer:UPlayAnimUData data
	UPlayAnimUData *m_data;
};
