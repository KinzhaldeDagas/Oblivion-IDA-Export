// Construct/register integer game setting iSkillMasterMin with native default 100.
int InitSetting_iSkillMasterMin()
{
  GameSetting_ConstrAndReg(&g_iSkillMasterMin, (int)"iSkillMasterMin", 0x64); /*0x9fab7c*/
  return atexit(sub_A24250); /*0x9fab8c*/
}
