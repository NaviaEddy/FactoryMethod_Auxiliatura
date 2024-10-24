// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Barril.generated.h"

UCLASS()
class FACTORYMETHOD_API ABarril : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABarril();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FString NombreBarril;
	FString TMaterial;
	FString TDanio;
	FString TVelocidadRotacion;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Material();
	void Danio();
	void VelocidadRotacion();
	virtual void Construir();

	FORCEINLINE FString GetNombreBarril();

};
