int __cdecl sub_90FDD0(int a1)
{
  int result; // eax

  result = a1; /*0x90fdd0*/
  if ( a1 ) /*0x90fdd6*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x90fdd8*/
    *(_DWORD *)a1 = &off_A9CB64; /*0x90fdde*/
  }
  return result; /*0x90fde4*/
}
