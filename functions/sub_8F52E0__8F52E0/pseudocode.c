int __cdecl sub_8F52E0(int a1)
{
  int result; // eax

  result = a1; /*0x8f52e0*/
  if ( a1 ) /*0x8f52e6*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x8f52e8*/
    *(_DWORD *)a1 = &off_A9B328; /*0x8f52ee*/
  }
  return result; /*0x8f52f4*/
}
