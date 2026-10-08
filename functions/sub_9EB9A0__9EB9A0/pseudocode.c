// Initializes Oblivion iLevelUp03Mult; native default 2.
int InitSetting_iLevelUp03Mult()
{
  GameSetting_ConstrAndReg((int *)&g_iLevelUp03Mult, (int)"iLevelUp03Mult", 2); /*0x9eb9ac*/
  return atexit(sub_A1F380); /*0x9eb9bc*/
}
