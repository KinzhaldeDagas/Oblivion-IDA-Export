int __cdecl Magic_GetSchoolFailureSound(int a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 0:
      result = MagicFailureSoundAlteration;
      break;
    case 1:
      result = MagicFailureSoundConjuration;
      break;
    case 2:
      result = MagicFailureSoundDestruction;
      break;
    case 3:
      result = MagicFailureSoundIllusion;
      break;
    case 4:
      result = MagicFailureSoundMysticism;
      break;
    case 5:
      result = MagicFailureSoundRestoration;
      break;
    default:
      JUMPOUT(0x41B854);
  }
  return result;
}
