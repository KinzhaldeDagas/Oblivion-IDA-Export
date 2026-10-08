int __cdecl sub_914FB0(int a1)
{
  int result; // eax

  result = a1; /*0x914fb0*/
  if ( a1 ) /*0x914fb6*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x914fb8*/
    *(_DWORD *)a1 = &off_A9CF48; /*0x914fbe*/
  }
  return result; /*0x914fc4*/
}
