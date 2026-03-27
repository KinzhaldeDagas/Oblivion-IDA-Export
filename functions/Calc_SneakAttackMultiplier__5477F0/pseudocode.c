double __cdecl Calc_SneakAttackMultiplier(int a1, int a2)
{
  double result; // st7

  result = 1.0;
  if ( a2 == 0xFFFFFFFF || !a2 || a2 == 2 )
  {
    Calc_SneakAttackMultiplier_::SetMelee();
  }
  else if ( a2 == 5 )
  {
    switch ( a1 )
    {
      case 0:
        result = *(float *)GameSetting_GetSafeFloatPointer((int *)&fPerkSneakAttackMarksmanNoviceMult);
        break;
      case 1:
        result = *(float *)GameSetting_GetSafeFloatPointer((int *)&fPerkSneakAttackMarksmanApprenticeMult);
        break;
      case 2:
        result = *(float *)GameSetting_GetSafeFloatPointer((int *)&fPerkSneakAttackMarksmanJourneymanMult);
        break;
      case 3:
        result = *(float *)GameSetting_GetSafeFloatPointer((int *)&fPerkSneakAttackMarksmanExpertMult);
        break;
      case 4:
        result = *(float *)GameSetting_GetSafeFloatPointer((int *)&fPerkSneakAttackMarksmanMasterMult);
        Calc_SneakAttackMultiplier_::Retn(result);
        break;
      default:
        JUMPOUT(0x5478F5);
    }
  }
  else
  {
    Calc_SneakAttackMultiplier_::Done();
  }
  return result;
}
