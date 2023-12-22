// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MCharacter.generated.h"

UCLASS()
class CPP_API AMCharacter : public ACharacter
{
	GENERATED_BODY()


public:
	UPROPERTY(BlueprintReadWrite,EditAnywhere) int intTypeVariable = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere) float floatTypeVariable = 0.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere) bool booltypeVariable = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere) FString stringTypeVariable = "stringTypeVariable";
	UPROPERTY(BlueprintReadWrite, EditAnywhere) FVector vectorTypeVariable = FVector(0,0,0);
	UPROPERTY(BlueprintReadWrite, EditAnywhere) FRotator RoatatoTypeVariable = FRotator(0, 0, 0);
	UPROPERTY(BlueprintReadWrite, EditAnywhere) FTransform transformTypeVariable = FTransform::Identity;

	

public:
	// Sets default values for this character's properties
	AMCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
