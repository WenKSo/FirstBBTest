// Fill out your copyright notice in the Description page of Project Settings.xx

#include "LightSwitchCodeOnly.h"
#include "MyProject12.h"
#include "Components/PointLightComponent.h"
#include "Components/SphereComponent.h"

// Sets default values
ALightSwitchCodeOnly::ALightSwitchCodeOnly()
{
    DesiredIntensity = 3000.0f;
    PointLight1 = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight1"));
    PointLight1 -> Intensity = DesiredIntensity;
    PointLight1->bVisible = true;
    RootComponent = PointLight1;
    Sphere1 = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere1"));
    Sphere1->InitSphereRadius(250.f);
    Sphere1->SetupAttachment(RootComponent);
    Sphere1->OnComponentBeginOverlap.AddDynamic(this, &ALightSwitchCodeOnly::OnOverlapBegin);
    Sphere1->OnComponentEndOverlap.AddDynamic(this, &ALightSwitchCodeOnly::OnOverlapEnd);
}

void ALightSwitchCodeOnly::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (OtherActor && (OtherActor != this) && OtherComp)
    {
        ToggleLight();
    }
}

void ALightSwitchCodeOnly::OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
    if (OtherActor && (OtherActor != this) && OtherComp)
    {
        ToggleLight();
    }
}

bool ALightSwitchCodeOnly::GetVisibility()
{
    return PointLight1 -> bVisible;
}

void ALightSwitchCodeOnly::ToggleLight()
{
    PointLight1->ToggleVisibility();
}
