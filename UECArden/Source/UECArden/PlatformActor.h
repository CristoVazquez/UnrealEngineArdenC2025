// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlatformActor.generated.h"

UCLASS()
class UECARDEN_API APlatformActor : public AActor
{
    GENERATED_BODY()

public:
    // Constructor
    APlatformActor();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    // Componente visual
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* MeshComponent;

    // Material por defecto
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Visual")
    UMaterialInterface* DefaultMaterial;

    // Velocidad y amplitud del movimiento
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
    float MovementSpeed = 100.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
    float MovementAmplitude = 200.0f;

private:
    FVector InitialLocation;
    bool bMovingRight = true;

    void ChangeMaterial(UMaterialInterface* NewMaterial);
};
