// Verified registration: fPathWaterExitPenalty defaults to 20000.0; actor-aware graph edge cost adds it when adjacent points differ in the below-water flag (bit 0x08).
int sub_9FA650()
{
  GameSetting_ConstrAndReg_float(&g_fPathWaterExitPenalty, (int)"fPathWaterExitPenalty", 20000.0); /*0x9fa664*/
  return atexit(sub_A24070); /*0x9fa674*/
}
