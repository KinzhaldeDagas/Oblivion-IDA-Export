// Registers Oblivion GameSetting fAItalktosameNPCtimer = 120.0 seconds. It governs expiration of the HighProcess recent-social-target list.
int InitSetting::fAItalktosameNPCtimer()
{
  GameSetting_ConstrAndReg_float(&flt_B36A88[8], (int)"fAItalktosameNPCtimer", 120.0); /*0x9e78f4*/
  return atexit(sub_A1DC70); /*0x9e7904*/
}
