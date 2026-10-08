int __cdecl sub_8CDFC0(int a1)
{
  int result; // eax

  result = a1; /*0x8cdfc0*/
  if ( a1 ) /*0x8cdfc6*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x8cdfc8*/
    *(_DWORD *)a1 = &off_A99D60; /*0x8cdfce*/
  }
  return result; /*0x8cdfd4*/
}
