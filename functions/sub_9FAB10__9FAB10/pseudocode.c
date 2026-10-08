// Construct/register integer game setting iSkillApprenticeMin with native default 25.
int InitSetting_iSkillApprenticeMin()
{
  GameSetting_ConstrAndReg(&g_iSkillApprenticeMin, (int)"iSkillApprenticeMin", 0x19); /*0x9fab1c*/
  return atexit(sub_A24220); /*0x9fab2c*/
}
