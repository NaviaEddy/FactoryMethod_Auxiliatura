// Fill out your copyright notice in the Description page of Project Settings.


#include "BarrilFlameanteL2.h"

// Sets default values
ABarrilFlameanteL2::ABarrilFlameanteL2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	NombreBarril = "Barril flameante l2";
	TMaterial = "Tipo 2";
	TVelocidadRotacion = "200.f";

}

// Called when the game starts or when spawned
void ABarrilFlameanteL2::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABarrilFlameanteL2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABarrilFlameanteL2::Construir()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green,
		FString::Printf(TEXT("Creando Barril flameante")));
}

