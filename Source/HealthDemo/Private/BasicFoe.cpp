// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicFoe.h"




// Sets default values
ABasicFoe::ABasicFoe()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// note we have to set the root component and create our mesh
	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
	SetRootComponent(Body);
	// attach the health
	Health = CreateDefaultSubobject<UHealth>(TEXT("Health"));
}

// Called when the game starts or when spawned
void ABasicFoe::BeginPlay()
{
	Super::BeginPlay();
	
	// bind our death function to the healths
	if (Health)
	{
		// this attaches the healths died to the ondeath
		Health->Died.AddDynamic(this, &ABasicFoe::Died);
	}else{
		UE_LOG(LogTemp, Error, TEXT("Health component is NULL in BeginPlay"));
	}
}

// Called every frame
void ABasicFoe::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
/*void ABasicFoe::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}*/

void ABasicFoe::Died()
{
	UE_LOG(LogTemp, Warning, TEXT("MURDER!"));
	Destroy();
}

