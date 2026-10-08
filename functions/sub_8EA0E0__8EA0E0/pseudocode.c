int __cdecl sub_8EA0E0(int a1)
{
  int result; // eax

  result = a1; /*0x8ea0e0*/
  if ( a1 ) /*0x8ea0e6*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x8ea0e8*/
    *(_DWORD *)a1 = &off_A9AD90; /*0x8ea0ee*/
  }
  return result; /*0x8ea0f4*/
}
