// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Health.h"
#include "BasicFoe.generated.h"
// note we have to include the health header, and it has to be before generated

UCLASS()
class HEALTHDEMO_API ABasicFoe : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABasicFoe();
	// create a static mesh for our oppent, and make it accessible
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components|Character", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* Body;
	// Control the health script
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components|Health") 
	UHealth* Health;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Function to handle character death
	UFUNCTION()
	void Died();
	// Note this is given by default, it wont break anything but if the player isnt controlling it 
	// delete it, as it reduces our visible code.
	//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
