int __cdecl Magic_GetWortcraftMaxEffects(int a1)
{
  int result; // eax

  switch ( Calc_MasteryFromSkill(a1) )
  {
    case 1:
      result = iWortcraftMaxEffectsApprentice;
      break;
    case 2:
      result = iWortcraftMaxEffectsJourneyman;
      break;
    case 3:
      result = iWortcraftMaxEffectsExpert;
      break;
    case 4:
      result = iWortcraftMaxEffectsMaster;
      break;
    default:
      JUMPOUT(0x41BA34);
  }
  return result;
}
