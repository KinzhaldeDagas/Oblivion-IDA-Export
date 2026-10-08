int __cdecl sub_910DE0(int a1)
{
  int result; // eax

  result = a1; /*0x910de0*/
  if ( a1 ) /*0x910de6*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x910de8*/
    *(_DWORD *)a1 = &off_A9CC6C; /*0x910dee*/
  }
  return result; /*0x910df4*/
}
