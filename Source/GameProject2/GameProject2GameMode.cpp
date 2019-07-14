// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "GameProject2GameMode.h"
#include "GameProject2Character.h"
#include "UObject/ConstructorHelpers.h"

AGameProject2GameMode::AGameProject2GameMode()
{
	// set default pawn class to our Blueprinted character
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/GameProject2/Blueprints/ThirdPersonCharacter"));
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/Characters/BP_Base_Character.BP_Base_Character_C"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
