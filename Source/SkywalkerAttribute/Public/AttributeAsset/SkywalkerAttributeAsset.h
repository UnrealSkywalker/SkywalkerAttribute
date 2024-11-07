// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SkywalkerAttributeAsset.generated.h"

UENUM(BlueprintType)
enum class ESkywalkerAttributeType : uint8
{
	Integer,
	Integer64,
	String,
};

/**
 *
 */
UCLASS(Blueprintable, BlueprintType)
class SKYWALKERATTRIBUTE_API USkywalkerAttributeAsset : public UObject
{
	GENERATED_BODY()

	public:

	/** 属性名称 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	FName Name;

	/** 属性描述 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	FString Description;

	/** 属性ID */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	int ID;

	/** 属性类型 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	ESkywalkerAttributeType Type;
};
