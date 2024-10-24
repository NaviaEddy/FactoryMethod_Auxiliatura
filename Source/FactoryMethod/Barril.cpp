// Fill out your copyright notice in the Description page of Project Settings.


#include "Barril.h"

// Sets default values
ABarril::ABarril()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABarril::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABarril::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABarril::Material()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Cyan,
		FString::Printf(TEXT("material del barril %s"), *GetNombreBarril()));
}

void ABarril::Danio()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Cyan,
		FString::Printf(TEXT("Danio del barril %s"), *GetNombreBarril()));
}

void ABarril::VelocidadRotacion()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Cyan,
		FString::Printf(TEXT("velocidad del rotacion del barril %s"), *GetNombreBarril()));
}

void ABarril::Construir()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Cyan,
		FString::Printf(TEXT("construyendo el barril %s"), *GetNombreBarril()));
}

FString ABarril::GetNombreBarril()
{
	return NombreBarril;
}

