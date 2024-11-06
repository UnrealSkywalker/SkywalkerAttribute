// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "SkywalkerAttributeSet.generated.h"

#pragma region AttributeData

UENUM(BlueprintType)
enum class ESkywalkerAttributeType : uint8
{
	Integer,
	Integer64,
	String,
};

USTRUCT(BlueprintType)
struct SKYWALKERATTRIBUTE_API FSkywalkerAttributeData
{
	GENERATED_BODY()

	/**
	 * 属性名称
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	FName Name;

	/**
	 * 属性描述
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	FString Description;

	/**
	 * 属性ID
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	int ID;

	/**
	 * 属性类型
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	ESkywalkerAttributeType Type;
};

#pragma endregion AttributeData

/**
 *
 */
UCLASS()
class SKYWALKERATTRIBUTE_API USkywalkerAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	USkywalkerAttributeSet();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttributeData")
	TArray<FSkywalkerAttributeData> Attributes;
};
