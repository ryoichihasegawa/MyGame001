// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyGame001GameMode.h"
#include "MyGame001Character.h"
#include "UObject/ConstructorHelpers.h"

AMyGame001GameMode::AMyGame001GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
