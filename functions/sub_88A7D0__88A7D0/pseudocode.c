void __cdecl sub_88A7D0(_WORD *a1, int a2, void (__cdecl *a3)(int, int))
{
  int v3; // eax
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // esi
  _WORD *i; // eax

  if ( a1 )
  {
    v3 = sub_4A05E0((int)a1);
    if ( !*(_DWORD *)(a2 + 8) )
      a1[0xC] = a1[0xC] & 0xFFE9 | 6;
    if ( v3 )
      a3(v3, a2);
    if ( *(_BYTE *)(a2 + 4) )
    {
      v4 = (*(int (__thiscall **)(_WORD *))(*(_DWORD *)a1 + 8))(a1);
      v5 = v4;
      if ( v4 )
      {
        v6 = *(unsigned __int16 *)(v4 + 0xB6);
        v7 = 0;
        if ( *(_WORD *)(v5 + 0xB6) )
        {
          if ( v6 )
            goto LABEL_11;
          for ( i = 0; ; i = *(_WORD **)(*(_DWORD *)(v5 + 0xB0) + 4 * v7) )
          {
            sub_88A7D0(i, a2, a3);
            if ( *(unsigned __int16 *)(v5 + 0xB6) <= (unsigned int)++v7 )
              break;
LABEL_11:
            ;
          }
        }
      }
    }
  }
}
