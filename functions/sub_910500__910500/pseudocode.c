int __cdecl sub_910500(int a1)
{
  int result; // eax

  result = a1; /*0x910500*/
  if ( a1 ) /*0x910506*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x910508*/
    *(_DWORD *)a1 = &hkMalleableConstraintData::`vftable'; /*0x91050e*/
  }
  return result; /*0x910514*/
}
