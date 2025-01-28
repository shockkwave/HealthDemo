// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasicFoe.h"
#include "Materials/Material.h"
#include "ArmouredFoe.generated.h"

/**
 * 
 */
UCLASS()
class HEALTHDEMO_API AArmouredFoe : public ABasicFoe
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AArmouredFoe();

	// for this task look at how we called the died and see if you can recreate it, to change the material
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Material", meta = (AllowPrivateAccess = "true"))
	UMaterial* UnArmouredMaterial;
};
