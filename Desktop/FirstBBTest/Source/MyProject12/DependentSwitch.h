// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DependentSwitch.generated.h"

UCLASS()
class MYPROJECT12_API ADependentSwitch : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADependentSwitch();
    
    UPROPERTY(VisibleAnywhere, Category = "Switch Components")
    class UPointLightComponent* PointLight1;
    
    UPROPERTY(VisibleAnywhere, Category = "Switch Variables")
    float DesiredIntensity;
    
    UPROPERTY(VisibleAnywhere, Category = "Switch Components")
    class USphereComponent* Sphere1;

	// Called every frame
	virtual void Tick(float DeltaTime) override;
    
    UFUNCTION()
    virtual void ToggleLight();
    
    UFUNCTION()
    virtual void GetValue();

	
	
};
