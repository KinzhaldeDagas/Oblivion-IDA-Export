// Verified GameSettingFloat registration: fLeafRustleAmountSwayInfluence defaults to 1.0 and registers its atexit destructor.
int GameSetting_fLeafRustleAmountSwayInfluence_ctor()
{
  GameSetting_ConstrAndReg_float(&MEMORY[0xB39E50], (int)"fLeafRustleAmountSwayInfluence", 1.0); /*0x9f90b0*/
  return atexit(GameSetting_fLeafRustleAmountSwayInfluence_atexit); /*0x9f90c0*/
}
