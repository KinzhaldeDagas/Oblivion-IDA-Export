// Verified game setting registration: sHitParticleGlass default is Effects\DustCloud.NIF.
int sub_9E9FB0()
{
  GameSetting_ConstrAndReg( /*0x9e9fbf*/
    (int *)&g_GameSettingStringPointers_B36CD8[0x124],
    (int)"sHitParticleGlass",
    (int)"Effects\\DustCloud.NIF");
  return atexit(sub_A1E9F0); /*0x9e9fcf*/
}
