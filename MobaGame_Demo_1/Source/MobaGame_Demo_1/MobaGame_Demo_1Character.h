// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MobaGame_Demo_1Character.generated.h"

UCLASS(Blueprintable)
class AMobaGame_Demo_1Character : public ACharacter
{
	GENERATED_BODY()

public:
	AMobaGame_Demo_1Character();

	// Called every frame.
	virtual void Tick(float DeltaSeconds) override;
	virtual void BeginPlay() override;

};

