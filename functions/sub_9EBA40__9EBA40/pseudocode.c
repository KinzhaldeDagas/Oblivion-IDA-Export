// Initializes Oblivion iLevelUp08Mult; native default 4.
int InitSetting_iLevelUp08Mult()
{
  GameSetting_ConstrAndReg(&g_iLevelUp07Mult[2], (int)"iLevelUp08Mult", 4); /*0x9eba4c*/
  return atexit(sub_A1F3D0); /*0x9eba5c*/
}
