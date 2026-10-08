int __cdecl sub_8E96A0(int a1)
{
  int result; // eax

  result = a1; /*0x8e96a0*/
  if ( a1 ) /*0x8e96a6*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x8e96a8*/
    *(_DWORD *)a1 = &off_A979A8; /*0x8e96ae*/
  }
  return result; /*0x8e96b4*/
}
