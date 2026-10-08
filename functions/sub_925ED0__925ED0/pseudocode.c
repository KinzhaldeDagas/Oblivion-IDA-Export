int __cdecl sub_925ED0(int a1, int a2)
{
  int i; // esi
  int result; // eax
  int v5; // ecx
  unsigned int v6; // esi
  int v7; // ebp
  unsigned int v8; // ebp
  int v9; // [esp+40h] [ebp+4h]

  for ( i = 0; i < *(_DWORD *)(a1 + 4) - 1; ++i ) /*0x925ee3*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a2 + 4))( /*0x925efc*/
      a2,
      "Sector",
      8,
      *(_DWORD *)(*(_DWORD *)a1 + 4 * i),
      *(unsigned __int16 *)(a1 + 0x16),
      *(unsigned __int16 *)(a1 + 0x16));
  if ( i < *(_DWORD *)(a1 + 4) ) /*0x925f0b*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a2 + 4))( /*0x925f27*/
      a2,
      "Sector",
      8,
      *(_DWORD *)(*(_DWORD *)a1 + 4 * i),
      *(_DWORD *)(a1 + 0x10),
      *(unsigned __int16 *)(a1 + 0x16));
  result = *(_DWORD *)(a1 + 4); /*0x925f2a*/
  v5 = 0; /*0x925f2d*/
  if ( result > 0 )
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(*(_DWORD *)a1 + 4 * v5++); /*0x925f36*/
      v9 = v5; /*0x925f3c*/
      v7 = v5 == result ? *(_DWORD *)(a1 + 0x10) : *(unsigned __int16 *)(a1 + 0x16);
      v8 = v6 + v7; /*0x925f4b*/
      if ( v6 < v8 ) /*0x925f4f*/
        break; /*0x925f4f*/
LABEL_16:
      result = *(_DWORD *)(a1 + 4); /*0x925f95*/
      if ( v5 >= result ) /*0x925f9a*/
        return result; /*0x925f9a*/
    }
    while ( 1 ) /*0x925f51*/
    {
      if ( *(_BYTE *)v6 == 2 || *(_BYTE *)v6 == 4 ) /*0x925f5c*/
        goto LABEL_14; /*0x925f5c*/
      if ( *(_BYTE *)v6 == 6 ) /*0x925f61*/
      {
        (*(void (__thiscall **)(int, const char *, int, _DWORD))(*(_DWORD *)a2 + 8))( /*0x925f72*/
          a2,
          "Agent",
          8,
          *(_DWORD *)(v6 + 4));
LABEL_14:
        (*(void (__thiscall **)(int, const char *, int, _DWORD))(*(_DWORD *)a2 + 8))( /*0x925f75*/
          a2,
          "ContactMgr",
          8,
          *(_DWORD *)(v6 + 0x10));
        v5 = v9; /*0x925f87*/
      }
      v6 += *(unsigned __int8 *)(v6 + 3); /*0x925f8b*/
      if ( v6 >= v8 ) /*0x925f93*/
        goto LABEL_16; /*0x925f93*/
    }
  }
  return result; /*0x925f9d*/
}
