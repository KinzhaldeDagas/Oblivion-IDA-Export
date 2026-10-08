int __cdecl sub_8FD710(int a1, int a2, __int16 a3)
{
  int result; // eax
  _WORD *i; // ecx

  result = 0; /*0x8fd719*/
  if ( *(_BYTE *)(a2 + 0x21) ) /*0x8fd715*/
  {
    for ( i = (_WORD *)(a2 + 2); *i != 0xFFFF; i += 2 ) /*0x8fd71f*/
    {
      if ( ++result >= *(unsigned __int8 *)(a2 + 0x21) ) /*0x8fd72f*/
        return result; /*0x8fd72f*/
    }
    *(_WORD *)(a2 + 4 * result + 2) = a3; /*0x8fd738*/
  }
  return result; /*0x8fd731*/
}
