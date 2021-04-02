// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Tank_War_2D : ModuleRules
{
	public Tank_War_2D(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "Paper2D" });
	}
}
