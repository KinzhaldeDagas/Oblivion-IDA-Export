// Initializes Oblivion iLevelUp10Mult; native default 5.
int InitSetting_iLevelUp10Mult()
{
  GameSetting_ConstrAndReg(&g_iLevelUp09Mult[2], (int)"iLevelUp10Mult", 5); /*0x9eba8c*/
  return atexit(sub_A1F3F0); /*0x9eba9c*/
}
