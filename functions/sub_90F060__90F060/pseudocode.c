int __cdecl sub_90F060(int a1)
{
  int result; // eax

  result = a1; /*0x90f060*/
  if ( a1 ) /*0x90f066*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x90f068*/
    *(_DWORD *)a1 = &off_A9CAA8; /*0x90f06e*/
  }
  return result; /*0x90f074*/
}
