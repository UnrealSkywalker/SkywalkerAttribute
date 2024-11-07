// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"

#include "AttributeAsset/SkywalkerAttributeAsset.h"

#include "SkywalkerAttributeSet.generated.h"

/**
 *
 */
UCLASS(Blueprintable, BlueprintType)
class SKYWALKERATTRIBUTE_API USkywalkerAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	/**
	 * 生命值属性
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	FGameplayAttributeData Health;
};
