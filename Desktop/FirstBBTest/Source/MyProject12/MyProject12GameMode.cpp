// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "MyProject12GameMode.h"
#include "MyProject12PlayerController.h"
#include "MyProject12Character.h"
#include "UObject/ConstructorHelpers.h"

AMyProject12GameMode::AMyProject12GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AMyProject12PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}