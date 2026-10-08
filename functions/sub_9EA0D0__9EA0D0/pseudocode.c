// Verified literal registration: sBloodParticleDefault = Effects\BloodSpray.nif. Runtime fallback for actor-base blood path getter; does not override creature disable flag.
int GameSetting_Init_sBloodParticleDefault()
{
  GameSetting_ConstrAndReg( /*0x9ea0df*/
    (int *)&g_GameSettingStringPointers_B36CD8[0x136],
    (int)"sBloodParticleDefault",
    (int)"Effects\\BloodSpray.nif");
  return atexit(sub_A1EA80); /*0x9ea0ef*/
}
