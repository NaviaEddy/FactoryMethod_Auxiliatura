// Fill out your copyright notice in the Description page of Project Settings.


#include "BarrilFlameanteL1.h"

// Sets default values
ABarrilFlameanteL1::ABarrilFlameanteL1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	NombreBarril = "Barril flameante l1";
	TMaterial = "Tipo 1";
	TVelocidadRotacion = "500.f";

}

// Called when the game starts or when spawned
void ABarrilFlameanteL1::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABarrilFlameanteL1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABarrilFlameanteL1::Construir()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Emerald,
		FString::Printf(TEXT("Creando Barril flameante")));
}

