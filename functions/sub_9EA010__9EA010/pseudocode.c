// Verified game setting registration: sHitParticleOrganic default is Effects\DustCloud.NIF.
int sub_9EA010()
{
  GameSetting_ConstrAndReg( /*0x9ea01f*/
    (int *)&g_GameSettingStringPointers_B36CD8[0x12A],
    (int)"sHitParticleOrganic",
    (int)"Effects\\DustCloud.NIF");
  return atexit(sub_A1EA20); /*0x9ea02f*/
}
