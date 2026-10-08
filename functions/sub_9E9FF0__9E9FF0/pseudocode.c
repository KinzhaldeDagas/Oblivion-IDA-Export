// Verified game setting registration: sHitParticleMetal default is Effects\DustCloud.NIF.
int sub_9E9FF0()
{
  GameSetting_ConstrAndReg( /*0x9e9fff*/
    (int *)&g_GameSettingStringPointers_B36CD8[0x128],
    (int)"sHitParticleMetal",
    (int)"Effects\\DustCloud.NIF");
  return atexit(sub_A1EA10); /*0x9ea00f*/
}
