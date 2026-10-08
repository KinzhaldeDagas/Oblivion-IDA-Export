// Construct/register fSkillUseSpecMult with Oblivion default 0.75.
int InitSetting_fSkillUseSpecMult()
{
  GameSetting_ConstrAndReg_float(&g_fSkillUseSpecMult.value, (int)"fSkillUseSpecMult", 0.75); /*0x9ebab4*/
  return atexit(sub_A1F400); /*0x9ebac4*/
}
