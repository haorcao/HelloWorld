// Copyright Epic Games, Inc. All Rights Reserved.

#include "HelloWorldGameMode.h"
#include "HelloWorldCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHelloWorldGameMode::AHelloWorldGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
