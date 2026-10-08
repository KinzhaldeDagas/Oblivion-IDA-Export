// Verified game setting registration: sHitParticleDirt default is Effects\DustCloud.NIF.
int sub_9E9F90()
{
  GameSetting_ConstrAndReg( /*0x9e9f9f*/
    (int *)&g_GameSettingStringPointers_B36CD8[0x122],
    (int)"sHitParticleDirt",
    (int)"Effects\\DustCloud.NIF");
  return atexit(sub_A1E9E0); /*0x9e9faf*/
}
