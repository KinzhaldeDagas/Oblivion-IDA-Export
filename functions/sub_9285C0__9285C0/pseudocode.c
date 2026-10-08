int __cdecl sub_9285C0(int a1)
{
  int result; // eax

  result = a1; /*0x9285c0*/
  if ( a1 ) /*0x9285c6*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x9285c8*/
    *(_DWORD *)a1 = &off_AA1990; /*0x9285ce*/
  }
  return result; /*0x9285d4*/
}
