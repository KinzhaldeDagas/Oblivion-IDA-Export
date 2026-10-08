int __cdecl sub_926C60(int a1)
{
  int result; // eax

  result = a1; /*0x926c60*/
  if ( a1 ) /*0x926c66*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x926c68*/
    *(_DWORD *)a1 = &hkMoppCode::`vftable'; /*0x926c6e*/
  }
  return result; /*0x926c74*/
}
