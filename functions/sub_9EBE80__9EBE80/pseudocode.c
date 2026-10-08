// Construct/register iTrainingSkills with Oblivion default 5 sessions per player level.
int InitSetting_iTrainingSkills()
{
  GameSetting_ConstrAndReg(&g_iTrainingSkills.value, (int)"iTrainingSkills", 5); /*0x9ebe8c*/
  return atexit(sub_A1F570); /*0x9ebe9c*/
}
