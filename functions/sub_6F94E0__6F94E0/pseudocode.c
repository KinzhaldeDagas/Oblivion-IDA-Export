void __cdecl sub_6F94E0(int *a1)
{
  int v1; // edx
  int v2; // eax
  int v3; // edi
  unsigned int v4; // esi

  if ( a1 ) /*0x6f94e6*/
  {
    v1 = *a1; /*0x6f94ec*/
    *((_WORD *)a1 + 0xC) = a1[6] & 0xFFE9 | 6; /*0x6f94f6*/
    v2 = (*(int (**)(void))(v1 + 8))(); /*0x6f94fe*/
    v3 = v2; /*0x6f9500*/
    if ( v2 ) /*0x6f9504*/
    {
      v4 = 0; /*0x6f950e*/
      if ( *(_WORD *)(v2 + 0xB6) ) /*0x6f9506*/
      {
        do /*0x6f953a*/
          sub_6F94E0(*(int **)(*(_DWORD *)(v3 + 0xB0) + 4 * v4++)); /*0x6f9526*/
        while ( *(unsigned __int16 *)(v3 + 0xB6) > v4 ); /*0x6f953a*/
      }
    }
  }
}
