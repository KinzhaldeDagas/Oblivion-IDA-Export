// Initializes Oblivion UI string setting sSpecialization. Its help text says '+10', but it is presentation data only; TESNPC_RecalculateAutoStats authoritatively executes a +5 specialization contribution at level 1 (plus 0.5*(level-1)).
int InitSetting_sSpecialization()
{
  GameSetting_ConstrAndReg( /*0x9f0d5f*/
    &g_sSpecialization,
    (int)"sSpecialization",
    (int)"You will gain +10 in all specialization skills. Those skills will also increase faster.");
  return atexit(sub_A213A0); /*0x9f0d6f*/
}
