_WORD *__usercall sub_94BC40@<eax>(_DWORD *a1@<ecx>, int a2@<edi>, __m128 *a3)
{
  int v3; // ecx
  int v5; // edi
  int v6; // esi
  int *v7; // eax
  int *v8; // esi
  _WORD *v9; // eax
  _WORD *v10; // eax
  int v11; // esi
  _DWORD *ThreadLocalStoragePointer; // edi
  _WORD *v13; // ebx
  int v14; // ecx
  int v15; // ecx
  char *v17; // [esp+10h] [ebp-24h] BYREF
  int v18; // [esp+14h] [ebp-20h]
  int v19; // [esp+18h] [ebp-1Ch]
  _DWORD *v20; // [esp+1Ch] [ebp-18h] BYREF
  int v21; // [esp+20h] [ebp-14h]
  int v22; // [esp+24h] [ebp-10h]
  int v23[2]; // [esp+2Ch] [ebp-8h] BYREF
  int retaddr; // [esp+34h] [ebp+0h]

  v20 = 0;
  v21 = 0;
  v22 = 0x80000000;
  sub_8F1EC0(a1, (const void **)&v20);
  if ( v21 >= 1 )
  {
    v17 = 0;
    v18 = 0;
    v19 = 0x80000000;
    v5 = v21;
    sub_8A6E40((const void **)&v17, v21 < 0 ? 0 : v21, 0x10);
    v18 = v5;
    v6 = 0;
    do
    {
      sub_88FCC0((__m128 *)&v17[v6 * 4], a3, (__m128 *)&v20[v6]);
      v6 += 4;
      --v5;
    }
    while ( v5 );
    v7 = (int *)(*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(
                  dword_BA7D98,
                  0x18,
                  0x24,
                  a2);
    if ( v7 )
    {
      v7[2] = 0x80000000;
      *v7 = 0;
      v7[1] = 0;
      v7[5] = 0x80000000;
      v7[3] = 0;
      v7[4] = 0;
      v8 = v7;
    }
    else
    {
      v8 = 0;
    }
    v23[1] = v19;
    retaddr = 0x10;
    v23[0] = v18;
    sub_8F21E0(v23, v8, 1);
    v9 = (_WORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x60);
    v9[2] = 0x60;
    v10 = sub_94CCB0(v9, (int)v8);
    v11 = TlsIndex;
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
    v13 = v10;
    if ( v19 >= 0 )
    {
      v14 = *(_DWORD *)(ThreadLocalStoragePointer[v11] + 0x19C);
      if ( !v14 )
        v14 = dword_BA7D9C;
      sub_8A75D0(v14, v17, 0x10 * v19, 0x14);
    }
    if ( v22 >= 0 )
    {
      v15 = *(_DWORD *)(ThreadLocalStoragePointer[v11] + 0x19C);
      if ( !v15 )
        v15 = dword_BA7D9C;
      sub_8A75D0(v15, v20, 0x10 * v22, 0x14);
    }
    return v13;
  }
  else
  {
    if ( (v22 & 0x80000000) == 0 )
    {
      v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
      if ( !v3 )
        v3 = dword_BA7D9C;
      sub_8A75D0(v3, v20, 0x10 * v22, 0x14);
    }
    return 0;
  }
}
