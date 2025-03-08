// Fill out your copyright notice in the Description page of Project Settings.


#include "Bloque.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ABloque::ABloque()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MallaBloque = CreateDefaultSubobject < UStaticMeshComponent > (TEXT("MallaBloque"));
	MallaBloque -> SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaBloque(TEXT("/Script/Engine.StaticMesh'/Game/LevelPrototyping/Meshes/SM_Cube.SM_Cube'"));

	if (ObjetoMallaBloque.Succeeded())
	{
		MallaBloque->SetStaticMesh(ObjetoMallaBloque.Object);

		MallaBloque->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}

	FloatSpeed = 3.0f;
	RotationSpeed = 3.0f;

	bPuedeMoverse = FMath::RandBool();
}

// Called when the game starts or when spawned
void ABloque::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABloque::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(bPuedeMoverse)
	{

	FVector NewLocation = GetActorLocation();
	FRotator NewRotation = GetActorRotation();
	float RunningTime = GetGameTimeSinceCreation();

	//Movimiento aleaetorio en el eje Z
	float DeltaHeight = FMath::FRandRange(-1.0f, 1.0f) * FloatSpeed;

	NewLocation.Z += DeltaHeight;

	//Aleatoriedad de movimiento
	float DeltaRotation = FMath::FRandRange(-1.0f, 1.0f) * RotationSpeed;
	NewRotation.Yaw += DeltaRotation;


	SetActorLocationAndRotation(NewLocation, NewRotation);

    }
}

