// Fill out your copyright notice in the Description page of Project Settings.

#include "DependentSwitch.h"
#include "Components/PointLightComponent.h"
#include "Components/SphereComponent.h"

// Sets default values
ADependentSwitch::ADependentSwitch()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    DesiredIntensity = 3000.0f;
    PointLight1 = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight1"));
    PointLight1 -> Intensity = DesiredIntensity;
    PointLight1->bVisible = true;
    RootComponent = PointLight1;
    Sphere1 = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere1"));
    Sphere1->InitSphereRadius(250.f);
    Sphere1->SetupAttachment(RootComponent);
}

// Called every frame
void ADependentSwitch::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    
}

