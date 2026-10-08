void __cdecl sub_557030(int a1, int a2)
{
  int v2; // edi
  _DWORD *v3; // esi

  v2 = a1; /*0x557036*/
  if ( a1 != a2 ) /*0x55703c*/
  {
    v3 = (_DWORD *)(a1 + 0x1C); /*0x557040*/
    do /*0x55706a*/
    {
      if ( *v3 >= 0x10u ) /*0x557048*/
        FormHeapFree(v3[0xFFFFFFFB]); /*0x55704e*/
      *v3 = 0xF; /*0x557056*/
      v3[0xFFFFFFFF] = 0; /*0x55705c*/
      *((_BYTE *)v3 + 0xFFFFFFEC) = 0; /*0x55705f*/
      v2 += 0x20; /*0x557062*/
      v3 += 8; /*0x557065*/
    }
    while ( v2 != a2 ); /*0x55706a*/
  }
}
