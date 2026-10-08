// Sidecar decode: Calc_PowerAttackBonus derives mastery from skill and gates standing/sidestep/backward/forward AttackPower groups. BladeSkillsRestored substitutes only skill level after consuming the exact 0x5FF4A2 -> 0x5FF4E6 per-thread token; unmatched or overflowed contexts use native skill.
double __cdecl Calc_PowerAttackBonus(int a1, int a2)
{
  int v2; // eax
  double result; // st7

  v2 = Calc_MasteryFromSkill(a1); /*0x546bb0*/
  if ( !v2 ) /*0x546bba*/
LABEL_12:
    JUMPOUT(0x546C38); /*0x546c38*/
  switch ( a2 ) /*0x546bc8*/
  {
    case 0x16: /*0x546bc8*/
      if ( v2 < 1 ) /*0x546bd2*/
        goto LABEL_12; /*0x546bd2*/
      result = *(float *)GameSetting_GetSafeFloatPointer((int *)&g_GameSettingStringPointers_B36CD8[0x54]); /*0x546be3*/
      break; /*0x546be7*/
    case 0x17: /*0x546bc8*/
      if ( v2 < 4 ) /*0x546beb*/
        goto LABEL_12; /*0x546beb*/
      result = *(float *)GameSetting_GetSafeFloatPointer((int *)&g_GameSettingStringPointers_B36CD8[0x5A]); /*0x546bfc*/
      break; /*0x546c00*/
    case 0x18: /*0x546bc8*/
      if ( v2 < 3 ) /*0x546c04*/
        goto LABEL_12; /*0x546c04*/
      result = *(float *)GameSetting_GetSafeFloatPointer((int *)&g_GameSettingStringPointers_B36CD8[0x58]); /*0x546c15*/
      break; /*0x546c19*/
    case 0x19: /*0x546bc8*/
    case 0x1A: /*0x546bc8*/
      if ( v2 < 2 ) /*0x546c1d*/
        goto LABEL_12; /*0x546c1d*/
      result = *(float *)GameSetting_GetSafeFloatPointer((int *)&g_GameSettingStringPointers_B36CD8[0x56]); /*0x546c2e*/
      break; /*0x546c32*/
    default:
      JUMPOUT(0x546C33); /*0x546c33*/
  }
  return result; /*0x546be7*/
}
