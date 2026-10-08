double __stdcall sub_5BE780(int a1)
{
  double result; // st7

  switch ( a1 ) /*0x5be78c*/
  {
    case 1: /*0x5be78c*/
      result = MEMORY[0xB38E58]; /*0x5be793*/
      break; /*0x5be799*/
    case 2: /*0x5be78c*/
      result = MEMORY[0xB38E60]; /*0x5be79c*/
      break; /*0x5be7a2*/
    case 3: /*0x5be78c*/
      result = MEMORY[0xB38E68]; /*0x5be7a5*/
      break; /*0x5be7ab*/
    case 4: /*0x5be78c*/
      if ( Actor_GetSkillMasteryLevel((Actor *)reference, kSkillAV_Speechcraft) == kSkillMastery_Expert /*0x5be7d0*/
        || Actor_GetSkillMasteryLevel((Actor *)reference, kSkillAV_Speechcraft) == kSkillMastery_Master )
      {
        result = unk_B38E78; /*0x5be7e1*/
      }
      else
      {
        result = *GameSetting_GetSafeFloatPointer(MEMORY[0xB38E70]); /*0x5be7dc*/
      }
      break; /*0x5be7de*/
    default:
      JUMPOUT(0x5BE7EA); /*0x5be7ea*/
  }
  return result; /*0x5be799*/
}
