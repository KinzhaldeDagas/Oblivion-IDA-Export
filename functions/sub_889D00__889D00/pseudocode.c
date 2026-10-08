int __cdecl sub_889D00(int a1, int a2)
{
  int result; // eax

  result = a1; /*0x889d08*/
  if ( *(_DWORD *)(a2 + 0xC) ) /*0x889d04*/
    *(_WORD *)(a1 + 0xC) |= 1u; /*0x889d0e*/
  else
    *(_WORD *)(a1 + 0xC) &= ~1u; /*0x889d14*/
  return result; /*0x889d13*/
}
