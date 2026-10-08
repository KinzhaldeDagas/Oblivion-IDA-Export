// Initializes Oblivion iLevelUp04Mult; native default 2.
int InitSetting_iLevelUp04Mult()
{
  GameSetting_ConstrAndReg((int *)&g_iLevelUp04Mult, (int)"iLevelUp04Mult", 2); /*0x9eb9cc*/
  return atexit(sub_A1F390); /*0x9eb9dc*/
}
