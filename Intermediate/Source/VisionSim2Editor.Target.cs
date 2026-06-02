using UnrealBuildTool;

public class VisionSim2EditorTarget : TargetRules
{
	public VisionSim2EditorTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Editor;
		ExtraModuleNames.Add("VisionSim2");
	}
}
