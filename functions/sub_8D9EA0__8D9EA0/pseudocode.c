int __cdecl sub_8D9EA0(int a1)
{
  int result; // eax

  result = a1; /*0x8d9ea0*/
  if ( a1 ) /*0x8d9ea6*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x8d9ea8*/
    *(_DWORD *)a1 = &off_A9A2A0; /*0x8d9eae*/
  }
  return result; /*0x8d9eb4*/
}
