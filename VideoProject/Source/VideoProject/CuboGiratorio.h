// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CuboGiratorio.generated.h"

UCLASS()
class VIDEOPROJECT_API ACuboGiratorio : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACuboGiratorio();

	//Criando um cubo 
	UStaticMeshComponent* CuboMesh;

	//Criando tipos de variaveis
	float VariavelFloat	;
	int32 VariavelInt32 ;
	bool bVariavelBool ;

	

	//Funcao boolean com parametros
	bool FuncaoExemplo(int32 Parametro1=0,float Parametro2=0.0f );

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
