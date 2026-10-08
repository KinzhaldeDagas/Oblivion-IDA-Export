int __cdecl sub_556780(int a1, int a2, int a3)
{
  int v3; // ecx
  int result; // eax
  int v5; // edx

  v3 = a1; /*0x556780*/
  result = a3 + 6 * ((a2 - a1) / 6); /*0x5567a4*/
  if ( a1 != a2 ) /*0x5567a7*/
  {
    v5 = a3 - a1; /*0x5567a9*/
    do /*0x5567c3*/
    {
      *(_DWORD *)(v5 + v3) = *(_DWORD *)v3; /*0x5567b2*/
      *(_WORD *)(v5 + v3 + 4) = *(_WORD *)(v3 + 4); /*0x5567b9*/
      v3 += 6; /*0x5567be*/
    }
    while ( v3 != a2 ); /*0x5567c3*/
  }
  return result; /*0x5567c6*/
}
