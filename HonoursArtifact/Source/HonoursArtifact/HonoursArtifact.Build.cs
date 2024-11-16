// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HonoursArtifact : ModuleRules
{
	public HonoursArtifact(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
