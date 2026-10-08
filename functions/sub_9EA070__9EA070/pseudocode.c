// Verified game setting registration: sHitParticleWood default is Effects\DustCloud.NIF.
int sub_9EA070()
{
  GameSetting_ConstrAndReg( /*0x9ea07f*/
    (int *)&g_GameSettingStringPointers_B36CD8[0x130],
    (int)"sHitParticleWood",
    (int)"Effects\\DustCloud.NIF");
  return atexit(sub_A1EA50); /*0x9ea08f*/
}
