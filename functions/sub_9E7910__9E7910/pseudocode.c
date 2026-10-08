// Registers Oblivion GameSetting fAItalktoNPCtimer = 60.0 seconds. It is the ambient conversation-scan retry cooldown: the first trigger resets it after any start attempt, while the second resets it only after a successful start.
int InitSetting::fAItalktoNPCtimer()
{
  GameSetting_ConstrAndReg_float(&flt_B36A88[0xA], (int)"fAItalktoNPCtimer", 60.0); /*0x9e7924*/
  return atexit(sub_A1DC80); /*0x9e7934*/
}
