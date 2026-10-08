// Verified game setting registration: sHitParticleStone default is Effects\DustCloud.NIF.
int sub_9E9F50()
{
  GameSetting_ConstrAndReg( /*0x9e9f5f*/
    (int *)&g_GameSettingStringPointers_B36CD8[0x11E],
    (int)"sHitParticleStone",
    (int)"Effects\\DustCloud.NIF");
  return atexit(sub_A1E9C0); /*0x9e9f6f*/
}
