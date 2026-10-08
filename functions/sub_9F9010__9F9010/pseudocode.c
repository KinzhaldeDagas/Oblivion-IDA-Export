// Verified GameSettingFloat registration: fLeafRockSpeedSwayInfluence defaults to 1.0 and registers its atexit destructor.
int GameSetting_fLeafRockSpeedSwayInfluence_ctor()
{
  GameSetting_ConstrAndReg_float(&fLeafRockSpeedSwayInfluence, (int)"fLeafRockSpeedSwayInfluence", 1.0); /*0x9f9020*/
  return atexit(GameSetting_fLeafRockSpeedSwayInfluence_atexit); /*0x9f9030*/
}
