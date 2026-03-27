void __cdecl sub_480930(_DWORD *a1)
{
  _DWORD *i; // esi
  int v2; // eax
  int v3; // edi
  int v4; // eax
  int v5; // esi
  _DWORD *j; // eax

  if ( a1 )
  {
    for ( i = (_DWORD *)a1[3]; i; i = (_DWORD *)i[0xD] )
      (*(void (__thiscall **)(_DWORD *))(*i + 0x68))(i);
    v2 = (*(int (__thiscall **)(_DWORD *))(*a1 + 8))(a1);
    v3 = v2;
    if ( v2 )
    {
      v4 = *(unsigned __int16 *)(v2 + 0xB6);
      v5 = 0;
      if ( *(_WORD *)(v3 + 0xB6) )
      {
        if ( v4 )
          goto LABEL_8;
        for ( j = 0; ; j = *(_DWORD **)(*(_DWORD *)(v3 + 0xB0) + 4 * v5) )
        {
          sub_480930(j);
          if ( *(unsigned __int16 *)(v3 + 0xB6) <= (unsigned int)++v5 )
            break;
LABEL_8:
          ;
        }
      }
    }
  }
}
