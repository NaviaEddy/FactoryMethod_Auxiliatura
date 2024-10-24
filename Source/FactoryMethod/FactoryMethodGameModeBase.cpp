// Copyright Epic Games, Inc. All Rights Reserved.


#include "FactoryMethodGameModeBase.h"
#include "FabricaBarrriles.h"
#include "FabricaBarrilesFlameantes.h"

AFactoryMethodGameModeBase::AFactoryMethodGameModeBase()
{
}

void AFactoryMethodGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	AFabricaBarrriles* FabricaFlameante = GetWorld()->
		SpawnActor<AFabricaBarrilesFlameantes>(AFabricaBarrilesFlameantes::StaticClass());
	FabricaFlameante->EncargarTipoBarril("bfl1");
	FabricaFlameante->EncargarTipoBarril("bfl2");
	//AFabricaBarrriles* FabricaToxico = GetWorld()->
	//	SpawnActor<AFabricaBarrilesToxicos>(AFabricaBarrilesFlameantes::StaticClass());
	//FabricaToxico->EncargarTipoBarril("btl1");
	//FabricaToxico->EncargarTipoBarril("btl2");
	//AFabricaBarrriles* FabricaExplosivo = GetWorld()->
	//	SpawnActor<AFabricaBarrilesExplosivos>(AFabricaBarrilesFlameantes::StaticClass());
	//FabricaExplosivo->EncargarTipoBarril("bel1");
	//FabricaExplosivo->EncargarTipoBarril("bel2");
}

void AFactoryMethodGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
