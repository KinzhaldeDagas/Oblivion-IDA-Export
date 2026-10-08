int __cdecl sub_9282A0(int a1)
{
  int result; // eax

  result = a1; /*0x9282a0*/
  if ( a1 ) /*0x9282a6*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x9282a8*/
    *(_DWORD *)a1 = &off_AA1958; /*0x9282ae*/
  }
  return result; /*0x9282b4*/
}
