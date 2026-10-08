// Verified game setting registration: sHitParticleChain default is Effects\DustCloud.NIF.
int sub_9EA090()
{
  GameSetting_ConstrAndReg( /*0x9ea09f*/
    (int *)&g_GameSettingStringPointers_B36CD8[0x132],
    (int)"sHitParticleChain",
    (int)"Effects\\DustCloud.NIF");
  return atexit(sub_A1EA60); /*0x9ea0af*/
}
