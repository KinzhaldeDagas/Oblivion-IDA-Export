void __cdecl sub_473120(_DWORD *a1)
{
  _DWORD *i; // esi
  int v2; // eax
  char v3; // al
  _DWORD *v4; // eax
  int v5; // eax
  char v6; // al
  int v7; // eax
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // esi
  _DWORD *j; // eax

  if ( a1 )
  {
    for ( i = (_DWORD *)a1[3]; i; i = (_DWORD *)i[0xD] )
    {
      v2 = (*(int (__thiscall **)(_DWORD *))(*i + 4))(i);
      if ( v2 )
      {
        while ( (char *)v2 != dword_B3CCB0 )
        {
          v2 = *(_DWORD *)(v2 + 4);
          if ( !v2 )
            goto LABEL_6;
        }
        v3 = 1;
      }
      else
      {
LABEL_6:
        v3 = 0;
      }
      v4 = v3 != 0 ? i : 0;
      if ( v4 )
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v4 + 0x84))(v4, 0, 0);
      }
      else
      {
        v5 = (*(int (__thiscall **)(_DWORD *))(*i + 4))(i);
        if ( v5 )
        {
          while ( (char *)v5 != dword_B3CD7C )
          {
            v5 = *(_DWORD *)(v5 + 4);
            if ( !v5 )
              goto LABEL_13;
          }
          v6 = 1;
        }
        else
        {
LABEL_13:
          v6 = 0;
        }
        v7 = v6 != 0 ? (unsigned int)i : 0;
        if ( v7 )
          sub_6CFF00(v7);
      }
    }
    v8 = (*(int (__thiscall **)(_DWORD *))(*a1 + 8))(a1);
    v9 = v8;
    if ( v8 )
    {
      v10 = *(unsigned __int16 *)(v8 + 0xB6);
      v11 = 0;
      if ( *(_WORD *)(v9 + 0xB6) )
      {
        if ( v10 )
          goto LABEL_22;
        for ( j = 0; ; j = *(_DWORD **)(*(_DWORD *)(v9 + 0xB0) + 4 * v11) )
        {
          sub_473120(j);
          if ( *(unsigned __int16 *)(v9 + 0xB6) <= (unsigned int)++v11 )
            break;
LABEL_22:
          ;
        }
      }
    }
  }
}
