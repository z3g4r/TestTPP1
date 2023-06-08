// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestTPP1GameMode.h"
#include "TestTPP1Character.h"
#include "UObject/ConstructorHelpers.h"

ATestTPP1GameMode::ATestTPP1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
