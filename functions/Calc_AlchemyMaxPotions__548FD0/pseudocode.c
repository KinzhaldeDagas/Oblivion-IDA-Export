int __cdecl Calc_AlchemyMaxPotions(SInt32 skillValue)
{
  int result; // eax

  switch ( Calc_MasteryFromSkill(skillValue) ) /*0x548fe5*/
  {
    case kSkillMastery_Apprentice: /*0x548fe5*/
      result = LODWORD(flt_B37ED0[0x78]); /*0x548fec*/
      break; /*0x548ff1*/
    case kSkillMastery_Journeyman: /*0x548fe5*/
      result = LODWORD(flt_B37ED0[0x7A]); /*0x548ff2*/
      break; /*0x548ff7*/
    case kSkillMastery_Expert: /*0x548fe5*/
      result = LODWORD(flt_B37ED0[0x7C]); /*0x548ff8*/
      break; /*0x548ffd*/
    case kSkillMastery_Master: /*0x548fe5*/
      result = LODWORD(flt_B37ED0[0x7E]); /*0x548ffe*/
      break; /*0x549003*/
    default:
      JUMPOUT(0x549004); /*0x549004*/
  }
  return result; /*0x548ff1*/
}
