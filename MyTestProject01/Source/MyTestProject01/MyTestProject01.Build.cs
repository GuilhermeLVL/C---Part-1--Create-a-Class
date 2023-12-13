// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MyTestProject01 : ModuleRules
{
	public MyTestProject01(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
