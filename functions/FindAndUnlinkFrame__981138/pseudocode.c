DWORD *__cdecl _FindAndUnlinkFrame(int a1)
{
  DWORD *result; // eax

  if ( a1 == _getptd()[0x26] ) /*0x981148*/
  {
    result = _getptd(); /*0x98114a*/
    result[0x26] = *(_DWORD *)(a1 + 4); /*0x981152*/
  }
  else
  {
    for ( result = (DWORD *)_getptd()[0x26]; ; result = (DWORD *)result[1] ) /*0x98115f*/
    {
      if ( !result[1] ) /*0x981170*/
        _inconsistency(); /*0x981177*/
      if ( a1 == result[1] ) /*0x98116c*/
        break; /*0x98116c*/
    }
    result[1] = *(_DWORD *)(a1 + 4); /*0x98117f*/
  }
  return result; /*0x981158*/
}
