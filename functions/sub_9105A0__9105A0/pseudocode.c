int __cdecl sub_9105A0(int a1)
{
  int result; // eax

  result = a1; /*0x9105a0*/
  if ( a1 ) /*0x9105a6*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x9105a8*/
    *(_DWORD *)a1 = &hkBreakableConstraintData::`vftable'; /*0x9105ae*/
  }
  return result; /*0x9105b4*/
}
