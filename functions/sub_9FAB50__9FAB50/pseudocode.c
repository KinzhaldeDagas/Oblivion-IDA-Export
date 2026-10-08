// Construct/register integer game setting iSkillExpertMin with native default 75.
int InitSetting_iSkillExpertMin()
{
  GameSetting_ConstrAndReg(&g_iSkillExpertMin, (int)"iSkillExpertMin", 0x4B); /*0x9fab5c*/
  return atexit(sub_A24240); /*0x9fab6c*/
}
