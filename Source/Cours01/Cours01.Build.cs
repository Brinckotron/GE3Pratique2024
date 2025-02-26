// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Cours01 : ModuleRules
{
	public Cours01(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
