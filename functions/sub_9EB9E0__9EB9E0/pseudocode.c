// Initializes Oblivion iLevelUp05Mult; native default 3.
int InitSetting_iLevelUp05Mult()
{
  GameSetting_ConstrAndReg((int *)&g_iLevelUp05Mult, (int)"iLevelUp05Mult", 3); /*0x9eb9ec*/
  return atexit(sub_A1F3A0); /*0x9eb9fc*/
}
