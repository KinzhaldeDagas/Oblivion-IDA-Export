// Construct/register fTrainingCostMult with Oblivion default 1.0.
int InitSetting_fTrainingCostMult()
{
  GameSetting_ConstrAndReg_float(&g_fTrainingCostMult.value, (int)"fTrainingCostMult", 1.0); /*0x9ebf40*/
  return atexit(sub_A1F5B0); /*0x9ebf50*/
}
