// Verified GameSettingFloat dynamic initializer: registers fLeafRockTimeScale with default 2.0 and registers its destructor via atexit. BSTreeManager_UpdateWindMatrices multiplies the frame delta by this setting before leaf wind scalar dispatch.
int GameSetting_fLeafRockTimeScale_ctor()
{
  GameSetting_ConstrAndReg_float(&fLeafRockTimeScale, (int)"fLeafRockTimeScale", 2.0); /*0x9f8fc4*/
  return atexit(GameSetting_fLeafRockTimeScale_atexit); /*0x9f8fd4*/
}
