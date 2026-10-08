// Verified GameSettingFloat dynamic initializer: registers fTreeFarDistanceBase with default 16384.0 and registers its destructor via atexit.
int GameSetting_fTreeFarDistanceBase_ctor()
{
  GameSetting_ConstrAndReg_float(&fTreeFarDistanceBase, (int)"fTreeFarDistanceBase", 16384.0); /*0x9f8f34*/
  return atexit(GameSetting_fTreeFarDistanceBase_atexit); /*0x9f8f44*/
}
