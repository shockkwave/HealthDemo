// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Health.generated.h"

/**
* Now we can do this in multiple ways
* this is to aid you in code modularistion 
* in other words  our health script will use a delagte function to tell others when it's dead
* Health will focus on its self 
* scripts that need to be concerned with health will bind to the function so when 
*/
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FYouDied);// ironic that functions start with F right

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class HEALTHDEMO_API UHealth : public UActorComponent
{
	GENERATED_BODY()
	
private:
	// make our variables private only the health script shoudl deal with the health values
	UPROPERTY(VisibleAnywhere, Category ="Health|MaxHealth")
	int MaxHealth = 100;
	UPROPERTY(VisibleAnywhere, Category ="Health|HP")
	int HP;

public:	
	// Sets default values for this component's properties
	UHealth();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UFUNCTION(BlueprintCallable)
	// function to take damage
	virtual void TakeDamage(int damage);
	UFUNCTION(BlueprintCallable)
	virtual void Heal(int Heal); 
	UPROPERTY(BlueprintAssignable, Category="Health")
	FYouDied Died;

};
