// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabricaBarrriles.h"
#include "FabricaBarrilesFlameantes.generated.h"

UCLASS()
class FACTORYMETHOD_API AFabricaBarrilesFlameantes : public AFabricaBarrriles
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFabricaBarrilesFlameantes();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	ABarril* CrearBarril(FString _barril) override;

};
