int __cdecl sub_9148C0(int a1)
{
  int result; // eax

  result = a1; /*0x9148c0*/
  if ( a1 ) /*0x9148c6*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x9148c8*/
    *(_DWORD *)a1 = &hkTriangleShape::`vftable'; /*0x9148ce*/
  }
  return result; /*0x9148d4*/
}
