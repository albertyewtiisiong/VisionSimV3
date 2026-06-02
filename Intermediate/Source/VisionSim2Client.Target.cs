using UnrealBuildTool;

public class VisionSim2ClientTarget : TargetRules
{
	public VisionSim2ClientTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Client;
		ExtraModuleNames.Add("VisionSim2");
	}
}
