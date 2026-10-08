int __cdecl sub_929820(int a1)
{
  int result; // eax

  result = a1; /*0x929820*/
  if ( a1 ) /*0x929826*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x929828*/
    *(_DWORD *)a1 = &off_AA1A18; /*0x92982e*/
  }
  return result; /*0x929834*/
}
