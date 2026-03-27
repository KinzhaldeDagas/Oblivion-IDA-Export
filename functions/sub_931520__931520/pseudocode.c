_BYTE *__cdecl sub_931520(_BYTE *a1, int a2, int a3, int a4)
{
  int v4; // ebp
  int v5; // ebx
  int v6; // esi
  int v7; // eax
  int v8; // edi
  _BYTE *v9; // esi
  int v11; // [esp+10h] [ebp-210h]
  int *v12; // [esp+14h] [ebp-20Ch] BYREF
  int v13; // [esp+18h] [ebp-208h]
  unsigned int v14; // [esp+1Ch] [ebp-204h]
  int v15; // [esp+20h] [ebp-200h] BYREF

  v4 = *(_DWORD *)(a2 + 4);
  v5 = 0x80000080;
  v12 = &v15;
  v14 = 0x80000080;
  v15 = a3;
  v13 = 1;
LABEL_2:
  v6 = v12[--v13];
  v11 = v6;
  v7 = v6;
  while ( 1 )
  {
    v7 = v4 + 8 * *(unsigned __int16 *)(v7 + 4);
    if ( *(_WORD *)(v7 + 6) == 1 )
      goto LABEL_6;
    if ( *(_WORD *)(v7 + 6) == 2 )
    {
      if ( a4 == 3 )
        goto LABEL_8;
      goto LABEL_7;
    }
    if ( *(_WORD *)(v7 + 6) == 3 )
    {
LABEL_6:
      if ( *(unsigned __int16 *)(v7 + 6) != a4 )
        break;
    }
LABEL_7:
    *(_WORD *)(v7 + 6) = a4;
    v5 = v14;
LABEL_8:
    if ( v7 == v6 )
    {
      do
      {
        v6 = v4 + 8 * *(unsigned __int16 *)(v6 + 4);
        v8 = v4 + 8 * *(unsigned __int16 *)(v6 + 2);
        if ( !*(_WORD *)(v8 + 6) )
        {
          if ( v13 == (v5 & 0x3FFFFFFF) )
            sub_8A6EE0((const void **)&v12, 4);
          v12[v13] = v8;
          v5 = v14;
          ++v13;
        }
      }
      while ( v6 != v11 );
      if ( !v13 )
      {
        v9 = a1;
        *a1 = 1;
        if ( v5 >= 0 )
          sub_8A75D0(
            *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
            v12,
            4 * v5,
            0x14);
        return v9;
      }
      goto LABEL_2;
    }
  }
  v9 = a1;
  *a1 = 0;
  if ( v5 < 0 )
    return v9;
  sub_8A75D0(*(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C), v12, 4 * v5, 0x14);
  return a1;
}
