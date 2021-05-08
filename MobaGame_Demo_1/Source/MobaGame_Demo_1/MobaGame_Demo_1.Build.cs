// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MobaGame_Demo_1 : ModuleRules
{
	public MobaGame_Demo_1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "NavigationSystem", "AIModule" });
    }
}
