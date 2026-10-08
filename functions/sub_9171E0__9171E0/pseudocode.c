int __cdecl sub_9171E0(int a1)
{
  int result; // eax

  result = a1; /*0x9171e0*/
  if ( a1 ) /*0x9171e6*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x9171e8*/
    *(_DWORD *)a1 = &off_A9D068; /*0x9171ee*/
  }
  return result; /*0x9171f4*/
}
