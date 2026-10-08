// Initializes Oblivion iLevelUp06Mult; native default 3.
int InitSetting_iLevelUp06Mult()
{
  GameSetting_ConstrAndReg((int *)&g_iLevelUp06Mult, (int)"iLevelUp06Mult", 3); /*0x9eba0c*/
  return atexit(sub_A1F3B0); /*0x9eba1c*/
}
