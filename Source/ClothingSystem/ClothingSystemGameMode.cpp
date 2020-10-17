// Copyright Epic Games, Inc. All Rights Reserved.

#include "ClothingSystemGameMode.h"
#include "ClothingSystemCharacter.h"
#include "UObject/ConstructorHelpers.h"

AClothingSystemGameMode::AClothingSystemGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
