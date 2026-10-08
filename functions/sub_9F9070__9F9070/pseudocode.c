// Verified GameSettingFloat registration: fLeafRockAmountSwayInfluence defaults to 1.0 and registers its atexit destructor.
int GameSetting_fLeafRockAmountSwayInfluence_ctor()
{
  GameSetting_ConstrAndReg_float(&fLeafRockAmountSwayInfluence, (int)"fLeafRockAmountSwayInfluence", 1.0); /*0x9f9080*/
  return atexit(GameSetting_fLeafRockAmountSwayInfluence_atexit); /*0x9f9090*/
}
