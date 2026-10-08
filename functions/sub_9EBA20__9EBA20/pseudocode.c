// Initializes Oblivion iLevelUp07Mult; native default 3.
int InitSetting_iLevelUp07Mult()
{
  GameSetting_ConstrAndReg(g_iLevelUp07Mult, (int)"iLevelUp07Mult", 3); /*0x9eba2c*/
  return atexit(sub_A1F3C0); /*0x9eba3c*/
}
