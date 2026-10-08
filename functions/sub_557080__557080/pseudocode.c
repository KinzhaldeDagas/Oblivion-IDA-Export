void __cdecl sub_557080(int a1, int a2)
{
  int v2; // edi
  _DWORD *v3; // esi

  v2 = a1; /*0x557086*/
  if ( a1 != a2 ) /*0x55708c*/
  {
    v3 = (_DWORD *)(a1 + 0x28); /*0x557090*/
    do /*0x5570ba*/
    {
      if ( *v3 >= 0x10u ) /*0x557098*/
        FormHeapFree(v3[0xFFFFFFFB]); /*0x55709e*/
      *v3 = 0xF; /*0x5570a6*/
      v3[0xFFFFFFFF] = 0; /*0x5570ac*/
      *((_BYTE *)v3 + 0xFFFFFFEC) = 0; /*0x5570af*/
      v2 += 0x2C; /*0x5570b2*/
      v3 += 0xB; /*0x5570b5*/
    }
    while ( v2 != a2 ); /*0x5570ba*/
  }
}
