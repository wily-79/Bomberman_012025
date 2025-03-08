// Copyright Epic Games, Inc. All Rights Reserved.

#include "Bomberman_012025GameMode.h"
#include "Bomberman_012025Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Bloque.h"
#include "Muro.h"

ABomberman_012025GameMode::ABomberman_012025GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ABomberman_012025GameMode::BeginPlay()
{
	Super::BeginPlay();

	//ABloque* Bloque = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(), FVector(1150.0f, 2050.0f, 200.0f), FRotator(0.0f, 0.0f, 0.0f));

	//FVector(500.0f + i * 150, 2050.0f - i * 50, 20.0f)

	int numeroBloqueConMovimiento = 0;
	int numeroMuroConMovimiento = 0;

	for (int i = 0; i < 10; i++)
	{

		ABloque* Bloque = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(), FVector(950.0f, 149.0f + i * 150, 50.0f), FRotator(0.0f, 0.0f, 0.0f));
		
		if (Bloque ->bPuedeMoverse)
		{
			numeroBloqueConMovimiento++;
		}

		if (numeroBloqueConMovimiento > 1)
		{
			Bloque->bPuedeMoverse = false;
		}
	
	
	}



	for (int j = 0; j < 20; j++)
	{

		AMuro* Muro = GetWorld()->SpawnActor<AMuro>(AMuro::StaticClass(), FVector(750.0f, 149.0f + j * 150, 50.0f), FRotator(0.0f, 0.0f, 0.0f));

		if (Muro->mPuedeMoverse)
		{
			numeroMuroConMovimiento++;
		}

		if (numeroMuroConMovimiento > 3)
		{
			Muro->mPuedeMoverse = false;
		}


	}



}

 

