// Verified GameSettingFloat dynamic initializer: registers fTreeSizeConversion with default 10.0 and registers its destructor via atexit.
int GameSetting_fTreeSizeConversion_ctor()
{
  GameSetting_ConstrAndReg_float(&fTreeSizeConversion, (int)"fTreeSizeConversion", 10.0); /*0x9f8f64*/
  return atexit(GameSetting_fTreeSizeConversion_atexit); /*0x9f8f74*/
}
