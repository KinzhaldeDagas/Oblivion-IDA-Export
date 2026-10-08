int __cdecl sub_8E89B0(int a1)
{
  int result; // eax

  result = a1; /*0x8e89b0*/
  if ( a1 ) /*0x8e89b6*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x8e89b8*/
    *(_DWORD *)a1 = &off_A9AC24; /*0x8e89be*/
  }
  return result; /*0x8e89c4*/
}
