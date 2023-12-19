// Fill out your copyright notice in the Description page of Project Settings.


#include "CuboGiratorio.h"

// Sets default values
ACuboGiratorio::ACuboGiratorio()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	float VariavelFloat = 0;
	int32 VariavelInt32 = 0;
	bool bVariavelBool = false;


	CuboMesh = CreateDefaultSubobject<UStaticMeshComponent>("MeshDoCubo");
}



// Called when the game starts or when spawned
void ACuboGiratorio::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACuboGiratorio::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	CuboMesh->AddWorldRotation(FRotator(0.0, DeltaTime*30.0, 0.0));
		CuboMesh->AddLocalRotation(FRotator(DeltaTime*15.0,0.0,0.0));

		FuncaoExemplo();
}

bool ACuboGiratorio::FuncaoExemplo(int32 Parametro1, float Parametro2)
{
	return true;
}
