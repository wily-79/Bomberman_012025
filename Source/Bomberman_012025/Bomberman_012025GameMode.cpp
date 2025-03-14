// Copyright Epic Games, Inc. All Rights Reserved.

#include "Bomberman_012025GameMode.h"
#include "Bomberman_012025Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Bloque.h"
#include "Muro.h"
#include "BloqueLadrillo.h"


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

	/*int numeroBloqueConMovimiento = 0;
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

	
	*/


	/*for (int i = 0; i < 10; i++)
	{

		ABloqueLadrillo* BloqueLadrillo = GetWorld()->SpawnActor<ABloqueLadrillo>(ABloqueLadrillo::StaticClass(), FVector(950.0f, 149.0f + i * 150, 50.0f), FRotator(0.0f, 0.0f, 0.0f));
	}
	*/

	const int32 Filas = 11;
	const int32 Columnas = 11;
	const float Espaciado = 150.0f; // Espacio entre bloques
	FVector PuntoInicial = FVector(0.0f, 0.0f, 50.0f); // Posición inicial de los bloques

	for (int32 i = 0; i < Filas; i++)
	{
		for (int32 j = 0; j < Columnas; j++)
		{
			FVector SpawnLocation = PuntoInicial + FVector(i * Espaciado, j * Espaciado, 0);

			// Genera bloques en los bordes
			if (i == 0 || i == Filas - 1 || j == 0 || j == Columnas - 1)
			{
				GetWorld()->SpawnActor<ABloqueLadrillo>(ABloqueLadrillo::StaticClass(), SpawnLocation, FRotator::ZeroRotator);
			}
			// Genera bloques en patrón intercalado (para caminos)
			else if (i % 2 == 0 && j % 2 == 0)
			{
				GetWorld()->SpawnActor<ABloqueLadrillo>(ABloqueLadrillo::StaticClass(), SpawnLocation, FRotator::ZeroRotator);
			}
			// **Los espacios en blanco son los caminos**
		}
	}


}

 

