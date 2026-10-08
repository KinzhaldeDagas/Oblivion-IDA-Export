// Construct/register fSkillUseExp with Oblivion default 1.0.
int InitSetting_fSkillUseExp()
{
  GameSetting_ConstrAndReg_float(&g_fSkillUseExp.value, (int)"fSkillUseExp", 1.0); /*0x9ee180*/
  return atexit(sub_A20240); /*0x9ee190*/
}
