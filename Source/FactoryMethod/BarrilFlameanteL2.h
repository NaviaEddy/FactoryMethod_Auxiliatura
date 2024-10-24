// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Barril.h"
#include "BarrilFlameanteL2.generated.h"

UCLASS()
class FACTORYMETHOD_API ABarrilFlameanteL2 : public ABarril
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABarrilFlameanteL2();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Construir() override;
};
