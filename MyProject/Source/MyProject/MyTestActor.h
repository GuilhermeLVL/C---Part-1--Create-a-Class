// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyTestActor.generated.h"

UCLASS()
class MYPROJECT_API AMyTestActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyTestActor();


	//Definindo variaveis que podem ser visualizadas e manipuladas pelo BluePrint "BlueprintReadWrite"
	UPROPERTY(EditAnywhere, BlueprintReadWrite , Category = "TesteValues") int32 ValueA;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TesteValues") int32 ValueB;

	//Declarando funcao que calcula os valores das variaveis acima
	UFUNCTION(BlueprintCallable, Category = "TextFunctions") int32 CalculateValue();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
