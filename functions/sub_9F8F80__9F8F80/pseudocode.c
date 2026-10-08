// Verified GameSettingFloat dynamic initializer: registers fTreeWindVariance with default 0.05 and registers its destructor via atexit. Runtime consumer is Unknown; this setting had no code-use xrefs in the current Oblivion IDB search.
int GameSetting_fTreeWindVariance_ctor()
{
  GameSetting_ConstrAndReg_float(fTreeWindVariance, (int)"fTreeWindVariance", 0.050000001); /*0x9f8f94*/
  return atexit(GameSetting_fTreeWindVariance_atexit); /*0x9f8fa4*/
}
