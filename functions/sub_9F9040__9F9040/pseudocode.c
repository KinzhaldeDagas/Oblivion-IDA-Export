// Verified GameSettingFloat registration: fLeafRustleSpeedSwayInfluence defaults to 1.0 and registers its atexit destructor.
int GameSetting_fLeafRustleSpeedSwayInfluence_ctor()
{
  GameSetting_ConstrAndReg_float(&fLeafRustleSpeedSwayInfluence, (int)"fLeafRustleSpeedSwayInfluence", 1.0); /*0x9f9050*/
  return atexit(GameSetting_fLeafRustleSpeedSwayInfluence_atexit); /*0x9f9060*/
}
