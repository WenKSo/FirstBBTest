// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LightSwitchCodeOnly.generated.h"

UCLASS()
class MYPROJECT12_API ALightSwitchCodeOnly : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALightSwitchCodeOnly();
    
    UPROPERTY(VisibleAnywhere, Category = "Switch Components")
    class UPointLightComponent* PointLight1;
    
    UPROPERTY(VisibleAnywhere, Category = "Switch Components")
    class USphereComponent* Sphere1;
    
    UFUNCTION()
    void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION()
    void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void ToggleLight();
    
    UFUNCTION()
    bool GetVisibility();

	UPROPERTY(VisibleAnywhere, Category = "Switch Variables")
    float DesiredIntensity;
	
};
