// Verified game setting registration: sHitParticleWater default is Effects\DustCloud.NIF.
int sub_9EA050()
{
  GameSetting_ConstrAndReg( /*0x9ea05f*/
    (int *)&g_GameSettingStringPointers_B36CD8[0x12E],
    (int)"sHitParticleWater",
    (int)"Effects\\DustCloud.NIF");
  return atexit(sub_A1EA40); /*0x9ea06f*/
}
