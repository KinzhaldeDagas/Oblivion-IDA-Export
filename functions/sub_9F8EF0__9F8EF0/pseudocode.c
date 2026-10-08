// Verified GameSettingFloat dynamic initializer: registers fTreeNearDistanceBase with default 2048.0 and registers its destructor via atexit.
int GameSetting_fTreeNearDistanceBase_ctor()
{
  GameSetting_ConstrAndReg_float(&fTreeNearDistanceBase, (int)"fTreeNearDistanceBase", 2048.0); /*0x9f8f04*/
  return atexit(GameSetting_fTreeNearDistanceBase_atexit); /*0x9f8f14*/
}
