// Verified game setting registration: sHitParticleSkin default is Effects\DustCloud.NIF.
int sub_9EA030()
{
  GameSetting_ConstrAndReg( /*0x9ea03f*/
    (int *)&g_GameSettingStringPointers_B36CD8[0x12C],
    (int)"sHitParticleSkin",
    (int)"Effects\\DustCloud.NIF");
  return atexit(sub_A1EA30); /*0x9ea04f*/
}
