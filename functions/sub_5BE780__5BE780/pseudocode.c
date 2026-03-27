double __stdcall sub_5BE780(int a1)
{
  double result; // st7

  switch ( a1 )
  {
    case 1:
      result = fPersuasionReactionLove;
      break;
    case 2:
      result = fPersuasionReactionLike;
      break;
    case 3:
      result = fPersuasionReactionDislike;
      break;
    case 4:
      if ( Actor_GetSkillMasteryLevel(0x20) == 3 || Actor_GetSkillMasteryLevel(0x20) == 4 )
        result = flt_B38E78;
      else
        result = *(float *)GameSetting_GetSafeFloatPointer((int *)&fPersuasionReactionHate);
      break;
    default:
      JUMPOUT(0x5BE7EA);
  }
  return result;
}
