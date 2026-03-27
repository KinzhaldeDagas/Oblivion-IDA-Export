signed int __cdecl sub_744330(int *a1, int a2)
{
  unsigned int v2; // eax
  bool v3; // zf
  int v4; // ecx
  unsigned int v5; // edx
  unsigned int v6; // eax
  _BYTE *v7; // edx
  int v8; // edi
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  _DWORD *v12; // edi
  int v13; // edx
  unsigned int v14; // ecx
  _BYTE *v15; // eax
  int v16; // edi
  int v17; // eax
  unsigned int v18; // ebx
  int v19; // eax
  _DWORD *v20; // edi
  int v22; // ecx
  _BYTE *v23; // eax
  int v24; // eax
  size_t v25; // [esp-4h] [ebp-14h]
  int v26; // [esp+Ch] [ebp-4h]

  v26 = 0xFFFF;
  if ( (unsigned int)(a1[3] - 5) < 0xFFFF )
    v26 = a1[3] - 5;
  while ( 1 )
  {
    v2 = a1[0x1B];
    if ( v2 <= 1 )
    {
      sub_7441E0(a1);
      v2 = a1[0x1B];
      if ( !v2 )
        break;
    }
    v3 = v2 + a1[0x19] == 0;
    a1[0x19] += v2;
    v4 = a1[0x15];
    v5 = a1[0x19];
    a1[0x1B] = 0;
    v6 = v4 + v26;
    if ( !v3 && v5 < v6 )
      goto LABEL_36;
    a1[0x1B] = v5 - v6;
    a1[0x19] = v6;
    v7 = v4 < 0 ? 0 : (_BYTE *)(v4 + a1[0xC]);
    sub_747610((int)a1, v7, v26, 0);
    v8 = *a1;
    a1[0x15] = a1[0x19];
    v9 = *(_DWORD *)(v8 + 0x1C);
    v10 = *(_DWORD *)(v9 + 0x14);
    if ( v10 > *(_DWORD *)(v8 + 0x10) )
      v10 = *(_DWORD *)(v8 + 0x10);
    if ( v10 )
    {
      LODWORD(v25) = v10;
      memcpy(*(void **)(v8 + 0xC), *(const void **)(v9 + 0x10), v25);
      v11 = *(_DWORD *)(v8 + 0x1C);
      *(_DWORD *)(v8 + 0xC) += v10;
      *(_DWORD *)(v11 + 0x10) += v10;
      *(_DWORD *)(v8 + 0x14) += v10;
      *(_DWORD *)(v8 + 0x10) -= v10;
      *(_DWORD *)(*(_DWORD *)(v8 + 0x1C) + 0x14) -= v10;
      v12 = *(_DWORD **)(v8 + 0x1C);
      if ( !v12[5] )
        v12[4] = v12[2];
    }
    if ( *(_DWORD *)(*a1 + 0x10) )
    {
LABEL_36:
      v13 = a1[0x15];
      v14 = a1[0x19] - v13;
      if ( v14 < a1[9] - 0x106 )
        continue;
      v15 = v13 < 0 ? 0 : (_BYTE *)(v13 + a1[0xC]);
      sub_747610((int)a1, v15, v14, 0);
      v16 = *a1;
      a1[0x15] = a1[0x19];
      v17 = *(_DWORD *)(v16 + 0x1C);
      v18 = *(_DWORD *)(v17 + 0x14);
      if ( v18 > *(_DWORD *)(v16 + 0x10) )
        v18 = *(_DWORD *)(v16 + 0x10);
      if ( v18 )
      {
        LODWORD(v25) = v18;
        memcpy(*(void **)(v16 + 0xC), *(const void **)(v17 + 0x10), v25);
        v19 = *(_DWORD *)(v16 + 0x1C);
        *(_DWORD *)(v16 + 0xC) += v18;
        *(_DWORD *)(v19 + 0x10) += v18;
        *(_DWORD *)(v16 + 0x14) += v18;
        *(_DWORD *)(v16 + 0x10) -= v18;
        *(_DWORD *)(*(_DWORD *)(v16 + 0x1C) + 0x14) -= v18;
        v20 = *(_DWORD **)(v16 + 0x1C);
        if ( !v20[5] )
          v20[4] = v20[2];
      }
      if ( *(_DWORD *)(*a1 + 0x10) )
        continue;
    }
    return 0;
  }
  if ( !a2 )
    return 0;
  v22 = a1[0x15];
  if ( v22 < 0 )
    v23 = 0;
  else
    v23 = (_BYTE *)(v22 + a1[0xC]);
  sub_747610((int)a1, v23, a1[0x19] - v22, a2 == 4);
  a1[0x15] = a1[0x19];
  sub_7439F0(*a1);
  v24 = 0;
  if ( !*(_DWORD *)(*a1 + 0x10) )
    return a2 != 4 ? 0 : 2;
  LOBYTE(v24) = a2 == 4;
  return 2 * v24 + 1;
}
