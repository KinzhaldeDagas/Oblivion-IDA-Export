int __cdecl sub_8E9CE0(int a1)
{
  int result; // eax

  result = a1; /*0x8e9ce0*/
  if ( a1 ) /*0x8e9ce6*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x8e9ce8*/
    *(_DWORD *)a1 = &off_A97A20; /*0x8e9cee*/
  }
  return result; /*0x8e9cf4*/
}
