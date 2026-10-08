int __cdecl sub_6F0040(int a1, int a2, int a3)
{
  int v3; // ecx
  int result; // eax
  int v5; // edx
  int v6; // edi

  v3 = a2; /*0x6f0040*/
  result = a3 - 6 * ((a2 - a1) / 6); /*0x6f0069*/
  if ( a1 != a2 ) /*0x6f006d*/
  {
    v5 = a3 - a2; /*0x6f006f*/
    do /*0x6f0085*/
    {
      v6 = *(_DWORD *)(v3 - 6); /*0x6f0071*/
      v3 -= 6; /*0x6f0074*/
      *(_DWORD *)(v5 + v3) = v6; /*0x6f0079*/
      *(_WORD *)(v5 + v3 + 4) = *(_WORD *)(v3 + 4); /*0x6f0080*/
    }
    while ( v3 != a1 ); /*0x6f0085*/
  }
  return result; /*0x6f0087*/
}
