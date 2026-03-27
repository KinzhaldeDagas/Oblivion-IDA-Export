int __cdecl sub_8E6950(int a1, int a2, int a3, int a4, int *a5, int a6)
{
  signed int v6; // eax
  _DWORD *v7; // esi
  int v8; // eax
  int v9; // esi
  int v10; // ecx
  _DWORD *v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // ecx
  _DWORD *v15; // edx
  __m128 *v16; // ecx
  char v17; // al
  int v18; // edx
  __m128 *v20; // [esp-8h] [ebp-78h]
  _DWORD *v21; // [esp+14h] [ebp-5Ch]
  int v22; // [esp+1Ch] [ebp-54h]
  _DWORD v23[4]; // [esp+20h] [ebp-50h] BYREF
  __m128 v24[4]; // [esp+30h] [ebp-40h] BYREF

  v6 = *(unsigned __int16 *)(a1 + 0x16);
  v22 = *a5;
  if ( *(_DWORD *)(a1 + 0x10) == v6 )
  {
    v7 = sub_8A7560(*(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C), v6, 0x24);
    if ( *(_DWORD *)(a1 + 4) == (*(_DWORD *)(a1 + 8) & 0x3FFFFFFF) )
      sub_8A6EE0((const void **)a1, 4);
    *(_DWORD *)(*(_DWORD *)a1 + 4 * (*(_DWORD *)(a1 + 4))++) = v7;
    *(_DWORD *)(a1 + 0x10) = 0;
  }
  v8 = *(_DWORD *)(a1 + 0x10);
  v9 = v8 + *(_DWORD *)(*(_DWORD *)a1 + 4 * *(_DWORD *)(a1 + 4) - 4);
  v10 = v8 + *(unsigned __int16 *)(a1 + 0x14);
  v11 = (_DWORD *)a2;
  *(_DWORD *)(a1 + 0x10) = v10;
  *(_DWORD *)(v9 + 0x10) = a6;
  *(_DWORD *)(v9 + 0x14) = a2;
  *(_DWORD *)(v9 + 0x18) = a3;
  *(_WORD *)(v9 + 0xC) = *(_WORD *)(a2 + 0x28);
  *(_WORD *)(v9 + 0xE) = *(_WORD *)(a3 + 0x28);
  if ( *(_DWORD *)(a2 + 0x28) == (*(_DWORD *)(a2 + 0x2C) & 0x3FFFFFFF) )
  {
    sub_8A6EE0((const void **)(a2 + 0x24), 8);
    v11 = (_DWORD *)a2;
  }
  v12 = v11[0xA];
  v13 = v11[9] + 8 * v12;
  v11[0xA] = v12 + 1;
  v21 = (_DWORD *)v13;
  if ( *(_DWORD *)(a3 + 0x28) == (*(_DWORD *)(a3 + 0x2C) & 0x3FFFFFFF) )
  {
    sub_8A6EE0((const void **)(a3 + 0x24), 8);
    v11 = (_DWORD *)a2;
  }
  v14 = *(_DWORD *)(a3 + 0x28);
  v15 = (_DWORD *)(*(_DWORD *)(a3 + 0x24) + 8 * v14);
  *(_DWORD *)(a3 + 0x28) = v14 + 1;
  *v21 = v9;
  *v15 = v9;
  v21[1] = a3;
  v15[1] = v11;
  v23[3] = *(_DWORD *)(v9 + 0x10);
  v16 = *(__m128 **)(a3 + 8);
  v23[2] = a5;
  v20 = (__m128 *)v11[2];
  v23[0] = v11;
  v23[1] = a3;
  sub_8B1FF0(v24, v20, v16);
  v17 = *(_BYTE *)(*(unsigned __int16 *)(a3 + 0x1A) + 8 * *(unsigned __int16 *)(a2 + 0x1A) + *a5 + 0x19D4);
  *(_BYTE *)(v9 + 8) = v17;
  a5[0xA] = 0x3C * v17 + *a5 + 0x1A14;
  *(_BYTE *)(v9 + 1) = a4;
  if ( *(_DWORD *)(0x34 * a4 + v22 + 0x16B8) )
  {
    *(_BYTE *)v9 = 4;
    *(_DWORD *)(v9 + 0x1C) = 0xBF800000;
    *(_OWORD *)(v9 + 0x20) = 0;
    v18 = v9 + 0x30;
  }
  else
  {
    *(_BYTE *)v9 = 2;
    v18 = v9 + 0x20;
  }
  (*(void (__cdecl **)(_DWORD *, int, int))(0x34 * (unsigned __int8)a4 + v22 + 0x1694))(v23, v9, v18);
  *(_BYTE *)(v9 + 3) = *(_BYTE *)(a1 + 0x14);
  return v9;
}
