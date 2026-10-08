int __cdecl sub_8ED3F0(int a1)
{
  int result; // eax

  result = a1; /*0x8ed3f0*/
  if ( a1 ) /*0x8ed3f6*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x8ed3f8*/
    *(_DWORD *)a1 = &off_A9B078; /*0x8ed3fe*/
  }
  return result; /*0x8ed404*/
}
