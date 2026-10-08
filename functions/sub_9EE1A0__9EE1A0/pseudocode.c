// Construct/register fSkillUseFactor with Oblivion default 1.0.
int InitSetting_fSkillUseFactor()
{
  GameSetting_ConstrAndReg_float(&g_fSkillUseFactor.value, (int)"fSkillUseFactor", 1.0); /*0x9ee1b0*/
  return atexit(sub_A20250); /*0x9ee1c0*/
}
