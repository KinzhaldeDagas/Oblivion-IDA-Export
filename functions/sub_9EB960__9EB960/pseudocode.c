// Initializes Oblivion iLevelUp01Mult; native default 2.
int InitSetting_iLevelUp01Mult()
{
  GameSetting_ConstrAndReg(g_iLevelUp01Mult, (int)"iLevelUp01Mult", 2); /*0x9eb96c*/
  return atexit(sub_A1F360); /*0x9eb97c*/
}
