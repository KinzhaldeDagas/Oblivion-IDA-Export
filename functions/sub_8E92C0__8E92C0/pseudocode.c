int __cdecl sub_8E92C0(int a1)
{
  int result; // eax

  result = a1; /*0x8e92c0*/
  if ( a1 ) /*0x8e92c6*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x8e92c8*/
    *(_DWORD *)a1 = &off_A9ACF4; /*0x8e92ce*/
  }
  return result; /*0x8e92d4*/
}
