
//Incluindo um trecho de codigo

#include "MyTestActor.h"

// "AMyTestActor:: " Para apontar onde estao os valores que serao manipulados

AMyTestActor::AMyTestActor()
{
	PrimaryActorTick.bCanEverTick = true;

	//Passando valor para a variavel declarada em MyTestActor
	ValueA = 0;
	ValueB = 0;

}

//Chamando a funcao declarada em "MyTestActor"


int32 AMyTestActor::CalculateValue() {

	return ValueA + ValueB;
}


// Called when the game starts or when spawned
void AMyTestActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyTestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

