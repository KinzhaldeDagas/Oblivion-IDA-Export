BSStringT *__stdcall Magic_CastFailureMsg(BSStringT *a1, int a2)
{
  BSStringT *result; // eax

  switch ( a2 )
  {
    case 1:
      BSStringT_constr_str(a1, (char *)sMagicCastInsufficientMagicka);
      result = a1;
      break;
    case 2:
      BSStringT_constr_str(a1, (char *)sMagicCastSilenced);
      result = a1;
      break;
    case 3:
      BSStringT_constr_str(a1, (char *)sMagicCastInsufficientSkill);
      result = a1;
      break;
    case 4:
      BSStringT_constr_str(a1, (char *)sMagicCastPowerUsed);
      result = a1;
      break;
    case 5:
      BSStringT_constr_str(a1, (char *)sMagicCastMultipleBoundEffects);
      result = a1;
      break;
    case 6:
      BSStringT_constr_str(a1, (char *)sMagicCastRangedUnderwater);
      result = a1;
      break;
    default:
      JUMPOUT(0x41A563);
  }
  return result;
}
