// Fill out your copyright notice in the Description page of Project Settings.

#include "AttributeAssetFactory/SkywalkerAttributeAssetFactory.h"
#include "AssetTypeCategories.h"

#include "AttributeAsset/SkywalkerAttributeAsset.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(SkywalkerAttributeAssetFactory)

USkywalkerAttributeAssetFactory::USkywalkerAttributeAssetFactory(const FObjectInitializer &ObjectInitializer)
    : Super(ObjectInitializer)
{
    SupportedClass = USkywalkerAttributeAsset::StaticClass();
    bCreateNew = true;
}

UObject *USkywalkerAttributeAssetFactory::FactoryCreateNew(UClass *Class, UObject *InParent, FName InName, EObjectFlags Flags, UObject *Context, FFeedbackContext *Warn)
{
    return NewObject<USkywalkerAttributeAsset>(InParent, Class, InName, Flags);
}
