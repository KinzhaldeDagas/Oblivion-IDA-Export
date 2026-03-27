unsigned int __cdecl sub_715C10(int a1, float a2)
{
  _DWORD *i; // esi
  int v3; // eax
  _DWORD *v4; // esi
  int v5; // eax
  unsigned int result; // eax
  unsigned int j; // esi
  int v8; // eax

  for ( i = *(_DWORD **)(a1 + 0xC); i; i = (_DWORD *)i[0xD] )
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*i + 0x4C))(i, LODWORD(a2));
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1);
  if ( v3 )
  {
    while ( (char *)v3 != dword_B3FA80 )
    {
      v3 = *(_DWORD *)(v3 + 4);
      if ( !v3 )
        goto LABEL_12;
    }
    v4 = *(_DWORD **)(a1 + 0x9C);
    while ( v4 )
    {
      v5 = v4[2];
      v4 = (_DWORD *)*v4;
      if ( v5 )
      {
        if ( *(_DWORD *)(v5 + 0xC) )
          sub_715C10(v5, a2);
      }
    }
  }
LABEL_12:
  result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
  if ( result )
  {
    result = *(unsigned __int16 *)(a1 + 0xB6);
    for ( j = 0; result > j; ++j )
    {
      v8 = *(_DWORD *)(*(_DWORD *)(a1 + 0xB0) + 4 * j);
      if ( v8 )
        sub_715C10(v8, a2);
      result = *(unsigned __int16 *)(a1 + 0xB6);
    }
  }
  return result;
}
