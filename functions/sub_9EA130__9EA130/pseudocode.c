// Verified literal registration: sBloodTextureDefault = Effects\blooddecal.dds. Runtime fallback for actor-base blood path getter; does not override creature disable flag.
int GameSetting_Init_sBloodTextureDefault()
{
  GameSetting_ConstrAndReg( /*0x9ea13f*/
    (int *)&g_GameSettingStringPointers_B36CD8[0x13C],
    (int)"sBloodTextureDefault",
    (int)"Effects\\blooddecal.dds");
  return atexit(sub_A1EAB0); /*0x9ea14f*/
}
