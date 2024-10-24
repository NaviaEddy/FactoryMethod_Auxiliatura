// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaBarrilesFlameantes.h"
#include "BarrilFlameanteL1.h"
#include "BarrilFlameanteL2.h"

// Sets default values
AFabricaBarrilesFlameantes::AFabricaBarrilesFlameantes()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFabricaBarrilesFlameantes::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFabricaBarrilesFlameantes::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ABarril* AFabricaBarrilesFlameantes::CrearBarril(FString _barril)
{
	if (_barril.Equals("bfl1")) {
		return GetWorld()->SpawnActor<ABarrilFlameanteL1>(ABarrilFlameanteL1::StaticClass());
	}
	else if (_barril.Equals("bfl2")) {
		return GetWorld()->SpawnActor<ABarrilFlameanteL2>(ABarrilFlameanteL2::StaticClass());
	}
	else return nullptr;
}

