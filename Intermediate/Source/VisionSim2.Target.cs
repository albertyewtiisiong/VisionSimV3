using UnrealBuildTool;

public class VisionSim2Target : TargetRules
{
	public VisionSim2Target(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Game;
		ExtraModuleNames.Add("VisionSim2");
	}
}
