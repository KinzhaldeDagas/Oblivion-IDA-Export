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
      v2 = (*(int (__thiscall **)(_DWORD *))(*i + 4))(i); /*0x47313c*/
      if ( v2 ) /*0x473140*/
      {
        while ( (char *)v2 != stru_B3CCB0 ) /*0x473147*/
        {
          v2 = *(_DWORD *)(v2 + 4); /*0x473149*/
          if ( !v2 ) /*0x47314e*/
            goto LABEL_6; /*0x47314e*/
        }
        v3 = 1; /*0x47316c*/
      }
      else
      {
LABEL_6:
        v3 = 0; /*0x473150*/
      }
      v4 = v3 != 0 ? i : 0;
      if ( v4 )
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v4 + 0x84))(v4, 0, 0); /*0x473168*/
      }
      else
      {
        v5 = (*(int (__thiscall **)(_DWORD *))(*i + 4))(i); /*0x473177*/
        if ( v5 ) /*0x47317b*/
        {
          while ( (char *)v5 != stru_B3CD7C ) /*0x473185*/
          {
            v5 = *(_DWORD *)(v5 + 4); /*0x473187*/
            if ( !v5 ) /*0x47318c*/
              goto LABEL_13; /*0x47318c*/
          }
          v6 = 1; /*0x4731ca*/
        }
        else
        {
LABEL_13:
          v6 = 0; /*0x47318e*/
        }
        v7 = v6 != 0 ? (unsigned int)i : 0;
        if ( v7 ) /*0x473196*/
          sub_6CFF00(v7); /*0x47319a*/
      }
    }
    v8 = (*(int (__thiscall **)(_DWORD *))(*a1 + 8))(a1); /*0x4731ad*/
    v9 = v8; /*0x4731af*/
    if ( v8 ) /*0x4731b3*/
    {
      v10 = *(unsigned __int16 *)(v8 + 0xB6); /*0x4731b5*/
      v11 = 0; /*0x4731bc*/
      if ( *(_WORD *)(v9 + 0xB6) ) /*0x4731b5*/
      {
        if ( v10 ) /*0x4731c4*/
          goto LABEL_22; /*0x4731c4*/
        for ( j = 0; ; j = *(_DWORD **)(*(_DWORD *)(v9 + 0xB0) + 4 * v11) ) /*0x4731c6*/
        {
          sub_473120(j); /*0x4731d8*/
          if ( *(unsigned __int16 *)(v9 + 0xB6) <= (unsigned int)++v11 ) /*0x4731ec*/
            break; /*0x4731ec*/
LABEL_22:
          ; /*0x4731ce*/
        }
      }
    }
  }
}
