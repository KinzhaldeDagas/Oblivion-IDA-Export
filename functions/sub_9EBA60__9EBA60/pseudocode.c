// Initializes Oblivion iLevelUp09Mult; native default 4.
int InitSetting_iLevelUp09Mult()
{
  GameSetting_ConstrAndReg(g_iLevelUp09Mult, (int)"iLevelUp09Mult", 4); /*0x9eba6c*/
  return atexit(sub_A1F3E0); /*0x9eba7c*/
}
