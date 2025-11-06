// Fill out your copyright notice in the Description page of Project Settings.


#include "TransformModifierActor.h"

// Sets default values
ATransformModifierActor::ATransformModifierActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ATransformModifierActor::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	DrawDSphere();

}

// Called when the game starts or when spawned
void ATransformModifierActor::BeginPlay()
{
	Super::BeginPlay();
	if(TargetActor)
	{
		NewTransform = TargetActor->GetActorTransform();

	}
	else {
		TargetActor = nullptr;
	}
	//Inicializar el indice de la posición actual
	if(Positions.Num() > 0)
	{
		MoveToNextPosition();
	}
	
}

// Called every frame
void ATransformModifierActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//ModifyTargetTransform();

	if(Positions.Num() == 0)
	{
		return;
	}
	//metodo encargado de modificar el transform del actor

	FVector CurrentPosition = TargetActor->GetActorLocation();
	FVector TargetPosition = Positions[CurrentPositionIndex];

	//move towards target position
	FVector Direction = (TargetPosition - CurrentPosition).GetSafeNormal();
	FVector NewPosition = CurrentPosition + Direction * 100 * DeltaTime ; //speed of 100 units per second

	TargetActor->SetActorLocation(NewPosition);
	//check if reached target position
	if(FVector::Dist(NewPosition, TargetPosition) < 10.0f)
	{
		CurrentPositionIndex++;
		ChangeMaterial();
		if(CurrentPositionIndex >= Positions.Num())
		{
			CurrentPositionIndex = 0;
		}

	}
}
void ATransformModifierActor::ModifyTargetTransform()
{
	if(TargetActor)
	{
		TargetActor->SetActorTransform(NewTransform);
	}
}

void ATransformModifierActor::MoveToNextPosition()
{
	if (TargetActor && Positions.IsValidIndex(CurrentPositionIndex))
	{
		FVector TargetPosition = Positions[CurrentPositionIndex];
		TargetActor->SetActorLocation(TargetPosition);
	}
}

void ATransformModifierActor::ChangeMaterial()
{
	
}

void ATransformModifierActor::DrawDSphere() const
{
	for(const FVector& Position : Positions)
	{
		DrawDebugSphere(
			GetWorld(),
			Position,
			25.0f, // radius
			12, // segments
			FColor::Green,
			true, // persistent
			-1.0f, // lifetime
			0, // depth priority
			2.0f // thickness
		);
	}
}

