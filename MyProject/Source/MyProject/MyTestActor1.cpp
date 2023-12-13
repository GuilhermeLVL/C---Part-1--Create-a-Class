
//Incluindo um trecho de codigo

#include "MyTestActor1.h"

// "AMyTestActor:: " Para apontar onde estao os valores que serao manipulados

AMyTestActor1::AMyTestActor1()
{
	PrimaryActorTick.bCanEverTick = true;

	//Passando valor para a variavel declarada em MyTestActor
	ValueA = 0;
	ValueB = 0;

}

//Chamando a funcao declarada em "MyTestActor"


int32 AMyTestActor1::CalculateValue() {

	return ValueA + ValueB;
}

void AMyTestActor1::OnValueCalculate() {

}


// Called when the game starts or when spawned
void AMyTestActor1::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMyTestActor1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

