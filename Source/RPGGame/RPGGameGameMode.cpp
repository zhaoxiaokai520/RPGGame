#include "RPGGameGameMode.h"
//#include "RPGGameCharacter.h"
#include "Engine.h"
#include "UObject/ConstructorHelpers.h"

ARPGGameGameMode::ARPGGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/Avatar_BP"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ARPGGameGameMode::StartPlay()
{
	Super::StartPlay();
	if (GEngine)
	{
		// Display a debug message for five seconds. 
		// The -1 "Key" value (first argument) indicates that we will never need to update or refresh this message.
		//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello World, this is FPSGameMode!"));
	}
}

void ARPGGameGameMode::BeginPlay()
{
	Super::BeginPlay();
}
