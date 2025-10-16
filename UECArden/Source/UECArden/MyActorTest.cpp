// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorTest.h"


// Sets default values
AMyActorTest::AMyActorTest()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MyFloatVariable = 50.0f; // Initialize the float variable
	edad = 21;
	esInstructor = false;
	nombre = "Oliver";
	DemostrateFundamentals();
}



// Called when the game starts or when spawned
void AMyActorTest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActorTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyActorTest::DemostrateFundamentals()
{
	//operadores aritmeticos
	int32 sum = edad + 30;
	float product = MyFloatVariable * 2.0f;

	//estructuras de control
	if (esInstructor)
	{
		//imprime en consola
		UE_LOG(LogTemp, Warning, TEXT("%s es un instructor."), *nombre);
		//imprime en pantalla
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, 
			FString::Printf(TEXT("%s es un instructor y tiene %d años."), *nombre,edad));

	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("%s no es un instructor."), *nombre);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red,
			FString::Printf(TEXT("%s no es un instructor y tiene %d años."), *nombre, edad));
	}
	//bucles o ciclos
	for (int i = 0; i < 5; i++)
	{
		FString DEbugMessage = FString::Printf(TEXT("Loop interation: %d"), i);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, DEbugMessage);

	
	}
	//bucle while
	int count = 0;
	while (count < 3)
	{
		FString DebugMessage = FString::Printf(TEXT("While loop iteration: %d"), count);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, DebugMessage);
		count++;
	}
}

