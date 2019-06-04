#pragma once

#include "Blueprint/UserWidget.h"
#include "GameFramework/GameModeBase.h"
#include "RPGGameGameMode.generated.h"

/**
 *
 */
UCLASS()
class RPGGAME_API ARPGGameGameMode : public AGameModeBase
{
	GENERATED_BODY()

	ARPGGameGameMode();

protected:
	/** Called when the game starts. */
	virtual void BeginPlay() override;

	/** The widget class we will use as our menu when the game starts. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UMG Game")
	TSubclassOf<UUserWidget> StartingWidgetClass;

	/** The widget instance that we are using as our menu. */
	UPROPERTY()
	UUserWidget* CurrentWidget;

public:
	virtual void StartPlay() override;

	/** Remove the current menu widget and create a new one from the specified class, if provided. */
	//UFUNCTION(BlueprintCallable, Category = "UMG Game")
	//void ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass);
};
