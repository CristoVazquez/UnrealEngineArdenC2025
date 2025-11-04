// Fill out your copyright notice in the Description page of Project Settings.

#include "PlatformActor.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
#include "Engine/World.h"

APlatformActor::APlatformActor()
{
    PrimaryActorTick.bCanEverTick = true;

    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    RootComponent = MeshComponent;

    MovementSpeed = 100.0f;
    MovementAmplitude = 200.0f;
    bMovingRight = true;
}

void APlatformActor::BeginPlay()
{
    Super::BeginPlay();

    InitialLocation = GetActorLocation();

    if (DefaultMaterial)
    {
        ChangeMaterial(DefaultMaterial);
    }
}

void APlatformActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    FVector CurrentLocation = GetActorLocation();
    float MovementStep = MovementSpeed * DeltaTime;

    if (bMovingRight)
    {
        CurrentLocation.X += MovementStep;
        if (CurrentLocation.X >= InitialLocation.X + MovementAmplitude)
        {
            bMovingRight = false;
        }
    }
    else
    {
        CurrentLocation.X -= MovementStep;
        if (CurrentLocation.X <= InitialLocation.X - MovementAmplitude)
        {
            bMovingRight = true;
        }
    }

    SetActorLocation(CurrentLocation);
}

void APlatformActor::ChangeMaterial(UMaterialInterface* NewMaterial)
{
    if (MeshComponent && NewMaterial)
    {
        MeshComponent->SetMaterial(0, NewMaterial);
    }
}
