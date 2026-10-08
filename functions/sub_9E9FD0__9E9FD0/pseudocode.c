// Verified game setting registration: sHitParticleGrass default is Effects\DustCloud.NIF.
int sub_9E9FD0()
{
  GameSetting_ConstrAndReg( /*0x9e9fdf*/
    (int *)&g_GameSettingStringPointers_B36CD8[0x126],
    (int)"sHitParticleGrass",
    (int)"Effects\\DustCloud.NIF");
  return atexit(sub_A1EA00); /*0x9e9fef*/
}
