// Verified game setting registration: sHitParticleSnow default is Effects\DustCloud.NIF.
int sub_9EA0B0()
{
  GameSetting_ConstrAndReg( /*0x9ea0bf*/
    (int *)&g_GameSettingStringPointers_B36CD8[0x134],
    (int)"sHitParticleSnow",
    (int)"Effects\\DustCloud.NIF");
  return atexit(sub_A1EA70); /*0x9ea0cf*/
}
