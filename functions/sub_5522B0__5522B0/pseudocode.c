void __cdecl sub_5522B0(int a1, int a2)
{
  int v2; // edi
  _DWORD *v3; // esi

  v2 = a1; /*0x5522b6*/
  if ( a1 != a2 ) /*0x5522bc*/
  {
    v3 = (_DWORD *)(a1 + 0x30); /*0x5522c0*/
    do /*0x552303*/
    {
      if ( *v3 >= 0x10u ) /*0x5522c8*/
        FormHeapFree(v3[0xFFFFFFFB]); /*0x5522ce*/
      *v3 = 0xF; /*0x5522d6*/
      v3[0xFFFFFFFF] = 0; /*0x5522dc*/
      *((_BYTE *)v3 + 0xFFFFFFEC) = 0; /*0x5522df*/
      if ( v3[0xFFFFFFF7] ) /*0x5522e2*/
        FormHeapFree(v3[0xFFFFFFF7]); /*0x5522ea*/
      v3[0xFFFFFFF7] = 0; /*0x5522f2*/
      v3[0xFFFFFFF8] = 0; /*0x5522f5*/
      v3[0xFFFFFFF9] = 0; /*0x5522f8*/
      v2 += 0x34; /*0x5522fb*/
      v3 += 0xD; /*0x5522fe*/
    }
    while ( v2 != a2 ); /*0x552303*/
  }
}
