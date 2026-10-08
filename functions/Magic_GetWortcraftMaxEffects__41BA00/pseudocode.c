const char *__cdecl Magic_GetWortcraftMaxEffects(SInt32 skillValue)
{
  const char *result; // eax

  switch ( Calc_MasteryFromSkill(skillValue) ) /*0x41ba15*/
  {
    case kSkillMastery_Apprentice: /*0x41ba15*/
      result = MEMORY[0xB336D4].value; /*0x41ba1c*/
      break; /*0x41ba21*/
    case kSkillMastery_Journeyman: /*0x41ba15*/
      result = MEMORY[0xB336DC].value; /*0x41ba22*/
      break; /*0x41ba27*/
    case kSkillMastery_Expert: /*0x41ba15*/
      result = MEMORY[0xB336E4].value; /*0x41ba28*/
      break; /*0x41ba2d*/
    case kSkillMastery_Master: /*0x41ba15*/
      result = MEMORY[0xB336EC].value; /*0x41ba2e*/
      break; /*0x41ba33*/
    default:
      JUMPOUT(0x41BA34); /*0x41ba34*/
  }
  return result; /*0x41ba21*/
}
