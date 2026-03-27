int __cdecl Calc_AlchemyMaxPotions(int a1)
{
  int result; // eax

  switch ( Calc_MasteryFromSkill(a1) )
  {
    case 1:
      result = iMagicMaxPotionsApprentice;
      break;
    case 2:
      result = iMagicMaxPotionsJourneyman;
      break;
    case 3:
      result = iMagicMaxPotionsExpert;
      break;
    case 4:
      result = iMagicMaxPotionsMaster;
      break;
    default:
      JUMPOUT(0x549004);
  }
  return result;
}
