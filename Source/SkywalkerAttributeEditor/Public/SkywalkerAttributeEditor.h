// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FSkywalkerAttributeEditorModule : public IModuleInterface
{
public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

private:
	/** The category bit for the skywalker asset */
	EAssetTypeCategories::Type SkywalkerAssetCategoryBit;

	/** The asset type actions for the attribute asset */
	TSharedPtr<class FAssetTypeActions_SkywalkerAttributeAsset> SkywalkerAttributeAssetAction;
};
