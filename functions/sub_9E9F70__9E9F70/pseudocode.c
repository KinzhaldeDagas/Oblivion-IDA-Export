// Verified game setting registration: sHitParticleCloth default is Effects\DustCloud.NIF.
int sub_9E9F70()
{
  GameSetting_ConstrAndReg( /*0x9e9f7f*/
    (int *)&g_GameSettingStringPointers_B36CD8[0x120],
    (int)"sHitParticleCloth",
    (int)"Effects\\DustCloud.NIF");
  return atexit(sub_A1E9D0); /*0x9e9f8f*/
}
