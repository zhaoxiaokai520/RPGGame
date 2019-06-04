// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayAnimMActionComp.h"
#include "UserData/PlayAnimUData.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "Animation/AnimInstance.h"

UPlayAnimMActionComp::UPlayAnimMActionComp()
{

}

void UPlayAnimMActionComp::DoMetaActionFrame()
{
	USkeletalMeshComponent *meshComp = m_ownerAction->m_bindActor->FindComponentByClass<USkeletalMeshComponent>();
	meshComp->GetAnimInstance()->Montage_Play(nullptr);
	//meshComp->GetAnimInstance()->PlaySlotAnimation
}
