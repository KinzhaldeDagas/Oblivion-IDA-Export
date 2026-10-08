int __cdecl sub_9280A0(int a1)
{
  int result; // eax

  result = a1; /*0x9280a0*/
  if ( a1 ) /*0x9280a6*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x9280a8*/
    *(_DWORD *)a1 = &off_AA1938; /*0x9280ae*/
  }
  return result; /*0x9280b4*/
}
