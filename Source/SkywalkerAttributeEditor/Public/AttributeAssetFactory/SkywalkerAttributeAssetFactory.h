// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "SkywalkerAttributeAssetFactory.generated.h"

/**
 *
 */
UCLASS()
class SKYWALKERATTRIBUTEEDITOR_API USkywalkerAttributeAssetFactory : public UFactory
{
	GENERATED_UCLASS_BODY()

#pragma region UFactory Interface

	virtual UObject *FactoryCreateNew(UClass *Class, UObject *InParent, FName InName, EObjectFlags Flags, UObject *Context, FFeedbackContext *Warn) override;

#pragma endregion UFactory Interface
};
