int __cdecl sub_90FA50(int a1)
{
  int result; // eax

  result = a1; /*0x90fa50*/
  if ( a1 ) /*0x90fa56*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x90fa58*/
    *(_DWORD *)a1 = &off_A9CB30; /*0x90fa5e*/
  }
  return result; /*0x90fa64*/
}
