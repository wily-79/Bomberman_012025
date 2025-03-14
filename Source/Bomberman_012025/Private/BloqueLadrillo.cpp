// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueLadrillo.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
ABloqueLadrillo::ABloqueLadrillo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MallaBloqueLadrillo = CreateDefaultSubobject < UStaticMeshComponent >(TEXT("MallaBloqueLadrillo"));
	MallaBloqueLadrillo->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaBloqueLadrillo(TEXT("/Script/Engine.StaticMesh'/Game/LevelPrototyping/Meshes/SM_Cube.SM_Cube'"));

	if (ObjetoMallaBloqueLadrillo.Succeeded())
	{
		MallaBloqueLadrillo->SetStaticMesh(ObjetoMallaBloqueLadrillo.Object);

		MallaBloqueLadrillo->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}


}

// Called when the game starts or when spawned
void ABloqueLadrillo::BeginPlay()
{
	Super::BeginPlay();
	



}

// Called every frame
void ABloqueLadrillo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

