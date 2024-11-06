// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AssetTypeActions_Base.h"
#include "AttributeAsset/SkywalkerAttributeAsset.h"

class FAssetTypeActions_SkywalkerAttributeAsset : public FAssetTypeActions_Base
{
public:
	FAssetTypeActions_SkywalkerAttributeAsset(EAssetTypeCategories::Type InAssetCategory)
		: AssetCategory(InAssetCategory)
	{
	}

#pragma region IAssetTypeActions Implementation

	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_SkywalkerAttributeAsset", "Skywalker Attribute Asset"); }
	virtual FColor GetTypeColor() const override { return FColor(63, 126, 255); }
	virtual UClass *GetSupportedClass() const override { return USkywalkerAttributeAsset::StaticClass(); }
	virtual uint32 GetCategories() override { return AssetCategory; }

#pragma endregion IAssetTypeActions Implementation

private:
	/** The category bit for the skywalker asset */
	EAssetTypeCategories::Type AssetCategory;
};
