// Verified sBloodParticleExtra2 default registration is Effects\skeletonBloodSpray.nif at string-setting slot 0x13A. The setting is inserted in g_GameSettingsByName and is reachable through generic name-keyed settings-file/SetGameSetting paths. No direct reference from the inspected Actor/TESCreature blood-particle resolution or particle-spawn callers was found; runtime selection/use remains Unknown.
int GameSetting_Init_sBloodParticleExtra2()
{
  GameSetting_ConstrAndReg( /*0x9ea11f*/
    (int *)&g_GameSettingStringPointers_B36CD8[0x13A],
    (int)"sBloodParticleExtra2",
    (int)"Effects\\skeletonBloodSpray.nif");
  return atexit(sub_A1EAA0); /*0x9ea12f*/
}
