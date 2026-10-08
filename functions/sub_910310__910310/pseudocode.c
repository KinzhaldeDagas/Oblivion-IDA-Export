int __cdecl sub_910310(int a1)
{
  int result; // eax

  result = a1; /*0x910310*/
  if ( a1 ) /*0x910316*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x910318*/
    *(_DWORD *)a1 = &hkMotorAction::`vftable'; /*0x91031e*/
  }
  return result; /*0x910324*/
}
