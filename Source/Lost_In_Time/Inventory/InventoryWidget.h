// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InventoryWidget.generated.h"

/**
 * 
 */
UCLASS()
class LOST_IN_TIME_API UInventoryWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:

	void AddItem();

private:

	UPROPERTY(meta = (BindWidget))
	class UHorizontalBox* InventoryBox;
};
