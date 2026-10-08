int __cdecl sub_8F8D20(int a1, int a2, __int16 a3)
{
  int result; // eax

  result = 0; /*0x8f8d29*/
  while ( *(_WORD *)(a2 + 2 * result) != a3 ) /*0x8f8d34*/
  {
    if ( ++result >= 3 ) /*0x8f8d3a*/
      return result; /*0x8f8d3a*/
  }
  *(_WORD *)(a2 + 2 * result) = 0xFFFF; /*0x8f8d3d*/
  return result; /*0x8f8d3c*/
}
