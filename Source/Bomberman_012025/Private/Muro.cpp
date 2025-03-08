// Fill out your copyright notice in the Description page of Project Settings.


#include "Muro.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AMuro::AMuro()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MallaMuro = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaMuro"));

	MallaMuro->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaMuro(TEXT("/Script/Engine.StaticMesh'/Game/LevelPrototyping/Meshes/SM_Cylinder.SM_Cylinder'"));


	if (ObjetoMallaMuro.Succeeded())
	{
		MallaMuro->SetStaticMesh(ObjetoMallaMuro.Object);

		MallaMuro->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}

	FloatSpeed = 3.0f;
	RotationSpeed = 3.0f;
	mPuedeMoverse = FMath::RandBool();
}

// Called when the game starts or when spawned
void AMuro::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMuro::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (mPuedeMoverse)
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

