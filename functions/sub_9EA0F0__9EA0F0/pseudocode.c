// Verified sBloodParticleExtra1 default registration is Effects\lichBloodSpray.nif at string-setting slot 0x138. The setting is inserted in g_GameSettingsByName and is reachable through generic name-keyed settings-file/SetGameSetting paths. No direct reference from the inspected Actor/TESCreature blood-particle resolution or particle-spawn callers was found; runtime selection/use remains Unknown.
int GameSetting_Init_sBloodParticleExtra1()
{
  GameSetting_ConstrAndReg( /*0x9ea0ff*/
    (int *)&g_GameSettingStringPointers_B36CD8[0x138],
    (int)"sBloodParticleExtra1",
    (int)"Effects\\lichBloodSpray.nif");
  return atexit(sub_A1EA90); /*0x9ea10f*/
}
