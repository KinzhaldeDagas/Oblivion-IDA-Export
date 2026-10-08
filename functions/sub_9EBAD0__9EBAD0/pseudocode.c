// Construct/register fSkillUseMajorMult with Oblivion default 0.75.
int InitSetting_fSkillUseMajorMult()
{
  GameSetting_ConstrAndReg_float(&g_fSkillUseMajorMult.value, (int)"fSkillUseMajorMult", 0.75); /*0x9ebae4*/
  return atexit(sub_A1F410); /*0x9ebaf4*/
}
