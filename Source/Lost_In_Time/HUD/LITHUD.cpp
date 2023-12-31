// Fill out your copyright notice in the Description page of Project Settings.


#include "LITHUD.h"
#include "GameFramework/PlayerController.h"

void ALITHUD::BeginPlay()
{
	Super::BeginPlay();
}


void ALITHUD::DrawHUD()
{
	Super::DrawHUD();

	FVector2D ViewportSize;
	if (GEngine)
	{
		GEngine->GameViewport->GetViewportSize(ViewportSize);
		const FVector2D ViewportCenter(ViewportSize.X / 2.f, ViewportSize.Y / 2.f);

		if (Crosshair)
		{
			DrawCrosshair(Crosshair, ViewportCenter, CrosshairColor);
		}
	}
}

void ALITHUD::DrawCrosshair(UTexture2D* Texture, FVector2D ViewportCenter, FLinearColor Color)
{
	const float TextureWidth = Texture->GetSizeX();
	const float TextureHeight = Texture->GetSizeY();
	const FVector2D TextureDrawPoint(ViewportCenter.X - (TextureWidth / 2.f), ViewportCenter.Y - (TextureHeight / 2.f));

	DrawTexture(
		Texture,
		TextureDrawPoint.X,
		TextureDrawPoint.Y,
		TextureWidth,
		TextureHeight,
		0.f,
		0.f,
		1.f,
		1.f,
		Color
	);
}