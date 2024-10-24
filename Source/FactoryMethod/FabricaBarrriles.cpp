// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaBarrriles.h"

// Sets default values
AFabricaBarrriles::AFabricaBarrriles()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFabricaBarrriles::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFabricaBarrriles::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ABarril* AFabricaBarrriles::EncargarTipoBarril(FString _TipoBarril)
{
	ABarril* barril = CrearBarril(_TipoBarril);
	barril->Material();
	barril->Danio();
	barril->VelocidadRotacion();
	barril->Construir();
	return barril;
}

