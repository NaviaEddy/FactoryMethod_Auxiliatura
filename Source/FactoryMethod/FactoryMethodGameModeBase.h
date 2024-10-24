// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FactoryMethodGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class FACTORYMETHOD_API AFactoryMethodGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AFactoryMethodGameModeBase();

protected:
	virtual void BeginPlay() override;

	FTimerHandle TimerHandle;
public:
	virtual void Tick(float DeltaTime) override;
	
};
