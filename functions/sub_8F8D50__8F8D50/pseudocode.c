int __cdecl sub_8F8D50(int a1, int a2, __int16 a3)
{
  int result; // eax

  result = 0; /*0x8f8d54*/
  while ( *(_WORD *)(a2 + 2 * result) != 0xFFFF ) /*0x8f8d5c*/
  {
    if ( ++result >= 3 ) /*0x8f8d62*/
      return result; /*0x8f8d62*/
  }
  *(_WORD *)(a2 + 2 * result) = a3; /*0x8f8d6a*/
  return result; /*0x8f8d64*/
}
