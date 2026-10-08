// Verified GameSettingFloat dynamic initializer: registers fLeafRustleTimeScale with default 0.5 and registers its destructor via atexit. BSTreeManager_UpdateWindMatrices multiplies the frame delta by this setting before leaf wind scalar dispatch.
int GameSetting_fLeafRustleTimeScale_ctor()
{
  GameSetting_ConstrAndReg_float(&fLeafRustleTimeScale, (int)"fLeafRustleTimeScale", 0.5); /*0x9f8ff4*/
  return atexit(GameSetting_fLeafRustleTimeScale_atexit); /*0x9f9004*/
}
