// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GASTemplate : ModuleRules
{
	public GASTemplate(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "GameplayTags", "GameplayTasks", "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
		
		PrivateDependencyModuleNames.AddRange(new string[] {
			"Slate",
			"SlateCore",
			"GameplayAbilities",
			"GameplayTags",
			"GameplayTasks"
		});
	}
}
