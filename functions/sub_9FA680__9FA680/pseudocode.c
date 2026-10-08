// Verified registration: fPathSpaceExitPenalty defaults to 20000.0; actor-aware graph edge cost adds it when adjacent points differ in SubSpace membership (bit 0x40).
int sub_9FA680()
{
  GameSetting_ConstrAndReg_float(&g_fPathSpaceExitPenalty, (int)"fPathSpaceExitPenalty", 20000.0); /*0x9fa694*/
  return atexit(sub_A24080); /*0x9fa6a4*/
}
