// Fill out your copyright notice in the Description page of Project Settings.


#include "Soldier.h"
#include "Components/CapsuleComponent.h"
#include "Engine/CollisionProfile.h"
#include "Components/SkeletalMeshComponent.h"

FName ASoldier::s_meshComponentName(TEXT("SoldierMesh0"));
FName ASoldier::s_capsuleComponentName(TEXT("CollisionCylinder"));

// Sets default values
ASoldier::ASoldier()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_capsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(ASoldier::s_capsuleComponentName);
	m_capsuleComponent->InitCapsuleSize(34.0f, 88.0f);
	m_capsuleComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);

	m_capsuleComponent->CanCharacterStepUpOn = ECB_No;
	m_capsuleComponent->SetShouldUpdatePhysicsVolume(true);
	m_capsuleComponent->SetCanEverAffectNavigation(false);
	m_capsuleComponent->bDynamicObstacle = true;
	RootComponent = m_capsuleComponent;

	m_mesh = CreateOptionalDefaultSubobject<USkeletalMeshComponent>(ASoldier::s_meshComponentName);
	if (m_mesh)
	{
		m_mesh->AlwaysLoadOnClient = true;
		m_mesh->AlwaysLoadOnServer = true;
		m_mesh->bOwnerNoSee = false;
		m_mesh->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPose;
		m_mesh->bCastDynamicShadow = true;
		m_mesh->bAffectDynamicIndirectLighting = true;
		m_mesh->PrimaryComponentTick.TickGroup = TG_PrePhysics;
		m_mesh->SetupAttachment(m_capsuleComponent);
		static FName MeshCollisionProfileName(TEXT("SoldierMesh"));
		m_mesh->SetCollisionProfileName(MeshCollisionProfileName);
		m_mesh->SetGenerateOverlapEvents(false);
		m_mesh->SetCanEverAffectNavigation(false);
	}

}

// Called when the game starts or when spawned
void ASoldier::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASoldier::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASoldier::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

