// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TestTPP1 : ModuleRules
{
	public TestTPP1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
