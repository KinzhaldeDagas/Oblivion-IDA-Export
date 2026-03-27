int __cdecl sub_925ED0(int a1, int a2)
{
  int i; // esi
  int result; // eax
  int v5; // ecx
  unsigned int v6; // esi
  int v7; // ebp
  unsigned int v8; // ebp
  int v9; // [esp+40h] [ebp+4h]

  for ( i = 0; i < *(_DWORD *)(a1 + 4) - 1; ++i )
    (*(void (__thiscall **)(int, const char *, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a2 + 4))(
      a2,
      "Sector",
      8,
      *(_DWORD *)(*(_DWORD *)a1 + 4 * i),
      *(unsigned __int16 *)(a1 + 0x16),
      *(unsigned __int16 *)(a1 + 0x16));
  if ( i < *(_DWORD *)(a1 + 4) )
    (*(void (__thiscall **)(int, const char *, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a2 + 4))(
      a2,
      "Sector",
      8,
      *(_DWORD *)(*(_DWORD *)a1 + 4 * i),
      *(_DWORD *)(a1 + 0x10),
      *(unsigned __int16 *)(a1 + 0x16));
  result = *(_DWORD *)(a1 + 4);
  v5 = 0;
  if ( result > 0 )
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(*(_DWORD *)a1 + 4 * v5++);
      v9 = v5;
      v7 = v5 == result ? *(_DWORD *)(a1 + 0x10) : *(unsigned __int16 *)(a1 + 0x16);
      v8 = v6 + v7;
      if ( v6 < v8 )
        break;
LABEL_16:
      result = *(_DWORD *)(a1 + 4);
      if ( v5 >= result )
        return result;
    }
    while ( 1 )
    {
      if ( *(_BYTE *)v6 == 2 || *(_BYTE *)v6 == 4 )
        goto LABEL_14;
      if ( *(_BYTE *)v6 == 6 )
      {
        (*(void (__thiscall **)(int, const char *, int, _DWORD))(*(_DWORD *)a2 + 8))(
          a2,
          "Agent",
          8,
          *(_DWORD *)(v6 + 4));
LABEL_14:
        (*(void (__thiscall **)(int, const char *, int, _DWORD))(*(_DWORD *)a2 + 8))(
          a2,
          "ContactMgr",
          8,
          *(_DWORD *)(v6 + 0x10));
        v5 = v9;
      }
      v6 += *(unsigned __int8 *)(v6 + 3);
      if ( v6 >= v8 )
        goto LABEL_16;
    }
  }
  return result;
}
