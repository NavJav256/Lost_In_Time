// Fill out your copyright notice in the Description page of Project Settings.


#include "LITPlayerController.h"
#include "Lost_In_Time/HUD/LITHUD.h"

void ALITPlayerController::BeginPlay()
{
	Super::BeginPlay();

	LITHUD = Cast<ALITHUD>(GetHUD());
}
