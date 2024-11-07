// Copyright Epic Games, Inc. All Rights Reserved.

#include "SkywalkerAttributeEditor.h"

#include "AttributeAssetFactory/AssetTypeActions_SkywalkerAttributeAsset.h"

#define LOCTEXT_NAMESPACE "FSkywalkerAttributeEditorModule"

void FSkywalkerAttributeEditorModule::StartupModule()
{
	FAssetToolsModule &AssetToolsModule = FAssetToolsModule::GetModule();
	IAssetTools &AssetTools = AssetToolsModule.Get();

	// Register custom asset category
	SkywalkerAssetCategoryBit = AssetTools.RegisterAdvancedAssetCategory(FName(TEXT("Skywalker")), LOCTEXT("SkywalkerCategory", "Skywalker"));

	// // Register asset type actions
	// SkywalkerAttributeAssetAction = MakeShared<FAssetTypeActions_SkywalkerAttributeAsset>(SkywalkerAssetCategoryBit);
	// AssetTools.RegisterAssetTypeActions(SkywalkerAttributeAssetAction.ToSharedRef());
}

void FSkywalkerAttributeEditorModule::ShutdownModule()
{
	if (UObjectInitialized())
	{
		FAssetToolsModule &AssetToolsModule = FAssetToolsModule::GetModule();
		IAssetTools &AssetTools = AssetToolsModule.Get();

		// // Unregister asset type actions
		// if (SkywalkerAttributeAssetAction.IsValid())
		// {
		// 	AssetTools.UnregisterAssetTypeActions(SkywalkerAttributeAssetAction.ToSharedRef());
		// }
	}
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FSkywalkerAttributeEditorModule, SkywalkerAttributeEditor)
