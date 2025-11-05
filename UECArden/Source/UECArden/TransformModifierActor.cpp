// Fill out your copyright notice in the Description page of Project Settings.


#include "TransformModifierActor.h"

// Sets default values
ATransformModifierActor::ATransformModifierActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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


	
}

// Called every frame
void ATransformModifierActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	ModifyTargetTransform();
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
}

void ATransformModifierActor::ChangeMaterial()
{
}

void ATransformModifierActor::DrawDebugSphere() const
{
}

