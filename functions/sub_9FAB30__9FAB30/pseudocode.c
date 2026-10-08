// Construct/register integer game setting iSkillJourneymanMin with native default 50.
int InitSetting_iSkillJourneymanMin()
{
  GameSetting_ConstrAndReg(&g_iSkillJourneymanMin, (int)"iSkillJourneymanMin", 0x32); /*0x9fab3c*/
  return atexit(sub_A24230); /*0x9fab4c*/
}
