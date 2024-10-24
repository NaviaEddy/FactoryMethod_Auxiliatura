// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Barril.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FabricaBarrriles.generated.h"

UCLASS()
class FACTORYMETHOD_API AFabricaBarrriles : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFabricaBarrriles();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual ABarril* CrearBarril(FString _Barril) PURE_VIRTUAL(AFabricaBarrriles::CrearBarril, return nullptr;);;
	ABarril* EncargarTipoBarril(FString _TipoBarril);

};
