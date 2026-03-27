double __cdecl Calc_PowerAttackBonus(int a1, int a2)
{
  int v2; // eax
  double result; // st7

  v2 = Calc_MasteryFromSkill(a1);
  if ( !v2 )
LABEL_12:
    JUMPOUT(0x546C38);
  switch ( a2 )
  {
    case 0x16:
      if ( v2 < 1 )
        goto LABEL_12;
      result = *(float *)GameSetting_GetSafeFloatPointer((int *)&fDamagePowerAttackStandBonus);
      break;
    case 0x17:
      if ( v2 < 4 )
        goto LABEL_12;
      result = *(float *)GameSetting_GetSafeFloatPointer((int *)&fDamagePowerAttackForwardBonus);
      break;
    case 0x18:
      if ( v2 < 3 )
        goto LABEL_12;
      result = *(float *)GameSetting_GetSafeFloatPointer((int *)&fDamagePowerAttackBackBonus);
      break;
    case 0x19:
    case 0x1A:
      if ( v2 < 2 )
        goto LABEL_12;
      result = *(float *)GameSetting_GetSafeFloatPointer((int *)&fDamagePowerAttackSideBonus);
      break;
    default:
      JUMPOUT(0x546C33);
  }
  return result;
}
