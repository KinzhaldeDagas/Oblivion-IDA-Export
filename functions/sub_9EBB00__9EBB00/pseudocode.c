// Construct/register fSkillUseMinorMult with Oblivion default 1.25. 'Minor' here is the fallback for any native skill absent from majorSkills[7].
int InitSetting_fSkillUseMinorMult()
{
  GameSetting_ConstrAndReg_float(&g_fSkillUseMinorMult.value, (int)"fSkillUseMinorMult", 1.25); /*0x9ebb14*/
  return atexit(sub_A1F420); /*0x9ebb24*/
}
