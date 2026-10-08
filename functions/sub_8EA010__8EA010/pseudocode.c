int __cdecl sub_8EA010(int a1)
{
  int result; // eax

  result = a1; /*0x8ea010*/
  if ( a1 ) /*0x8ea016*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x8ea018*/
    *(_DWORD *)a1 = &off_A9AD5C; /*0x8ea01e*/
  }
  return result; /*0x8ea024*/
}
