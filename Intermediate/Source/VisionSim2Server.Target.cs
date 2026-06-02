using UnrealBuildTool;

public class VisionSim2ServerTarget : TargetRules
{
	public VisionSim2ServerTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Server;
		ExtraModuleNames.Add("VisionSim2");
	}
}
