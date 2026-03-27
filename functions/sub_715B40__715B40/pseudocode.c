unsigned int __cdecl sub_715B40(int a1)
{
  _DWORD *i; // esi
  int v2; // eax
  _DWORD *v3; // esi
  int v4; // eax
  unsigned int result; // eax
  unsigned int j; // esi
  float v7; // [esp+0h] [ebp-Ch]

  for ( i = *(_DWORD **)(a1 + 0xC); i; i = (_DWORD *)i[0xD] )
  {
    v7 = -flt_A7DEB4;
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*i + 0x4C))(i, LODWORD(v7));
  }
  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1);
  if ( v2 )
  {
    while ( (char *)v2 != dword_B3FA80 )
    {
      v2 = *(_DWORD *)(v2 + 4);
      if ( !v2 )
        goto LABEL_12;
    }
    v3 = *(_DWORD **)(a1 + 0x9C);
    while ( v3 )
    {
      v4 = v3[2];
      v3 = (_DWORD *)*v3;
      if ( v4 )
      {
        if ( *(_DWORD *)(v4 + 0xC) )
          sub_715B40(v4);
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
      if ( *(_DWORD *)(*(_DWORD *)(a1 + 0xB0) + 4 * j) )
        sub_715B40(*(_DWORD *)(*(_DWORD *)(a1 + 0xB0) + 4 * j));
      result = *(unsigned __int16 *)(a1 + 0xB6);
    }
  }
  return result;
}
