// Initializes Oblivion iLevelUp02Mult; native default 2.
int InitSetting_iLevelUp02Mult()
{
  GameSetting_ConstrAndReg(&g_iLevelUp01Mult[2], (int)"iLevelUp02Mult", 2); /*0x9eb98c*/
  return atexit(sub_A1F370); /*0x9eb99c*/
}
