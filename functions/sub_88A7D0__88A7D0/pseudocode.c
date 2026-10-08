void __cdecl sub_88A7D0(_WORD *a1, int a2, void (__cdecl *a3)(int, int))
{
  int v3; // eax
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // esi
  _WORD *i; // eax

  if ( a1 ) /*0x88a7d7*/
  {
    v3 = sub_4A05E0((int)a1); /*0x88a7df*/
    if ( !*(_DWORD *)(a2 + 8) ) /*0x88a7eb*/
      a1[0xC] = a1[0xC] & 0xFFE9 | 6; /*0x88a7fe*/
    if ( v3 ) /*0x88a809*/
      a3(v3, a2); /*0x88a80d*/
    if ( *(_BYTE *)(a2 + 4) ) /*0x88a812*/
    {
      v4 = (*(int (__thiscall **)(_WORD *))(*(_DWORD *)a1 + 8))(a1); /*0x88a820*/
      v5 = v4; /*0x88a822*/
      if ( v4 ) /*0x88a826*/
      {
        v6 = *(unsigned __int16 *)(v4 + 0xB6); /*0x88a828*/
        v7 = 0; /*0x88a82f*/
        if ( *(_WORD *)(v5 + 0xB6) ) /*0x88a828*/
        {
          if ( v6 ) /*0x88a837*/
            goto LABEL_11; /*0x88a837*/
          for ( i = 0; ; i = *(_WORD **)(*(_DWORD *)(v5 + 0xB0) + 4 * v7) ) /*0x88a839*/
          {
            sub_88A7D0(i, a2, a3); /*0x88a849*/
            if ( *(unsigned __int16 *)(v5 + 0xB6) <= (unsigned int)++v7 ) /*0x88a85d*/
              break; /*0x88a85d*/
LABEL_11:
            ; /*0x88a83d*/
          }
        }
      }
    }
  }
}
