// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class warriorsRest : ModuleRules
{
	public warriorsRest(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
