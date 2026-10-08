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

  v6 = *(unsigned __int16 *)(a1 + 0x16); /*0x8e6964*/
  v22 = *a5; /*0x8e6968*/
  if ( *(_DWORD *)(a1 + 0x10) == v6 ) /*0x8e696f*/
  {
    v7 = sub_8A7560( /*0x8e6992*/
           *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
           v6,
           0x24);
    if ( *(_DWORD *)(a1 + 4) == (*(_DWORD *)(a1 + 8) & 0x3FFFFFFF) ) /*0x8e699e*/
      sub_8A6EE0((const void **)a1, 4); /*0x8e69a3*/
    *(_DWORD *)(*(_DWORD *)a1 + 4 * (*(_DWORD *)(a1 + 4))++) = v7; /*0x8e69b0*/
    *(_DWORD *)(a1 + 0x10) = 0; /*0x8e69b6*/
  }
  v8 = *(_DWORD *)(a1 + 0x10); /*0x8e69c6*/
  v9 = v8 + *(_DWORD *)(*(_DWORD *)a1 + 4 * *(_DWORD *)(a1 + 4) - 4); /*0x8e69d3*/
  v10 = v8 + *(unsigned __int16 *)(a1 + 0x14); /*0x8e69d5*/
  v11 = (_DWORD *)a2; /*0x8e69d7*/
  *(_DWORD *)(a1 + 0x10) = v10; /*0x8e69da*/
  *(_DWORD *)(v9 + 0x10) = a6; /*0x8e69dd*/
  *(_DWORD *)(v9 + 0x14) = a2; /*0x8e69e0*/
  *(_DWORD *)(v9 + 0x18) = a3; /*0x8e69e3*/
  *(_WORD *)(v9 + 0xC) = *(_WORD *)(a2 + 0x28); /*0x8e69ea*/
  *(_WORD *)(v9 + 0xE) = *(_WORD *)(a3 + 0x28); /*0x8e69f2*/
  if ( *(_DWORD *)(a2 + 0x28) == (*(_DWORD *)(a2 + 0x2C) & 0x3FFFFFFF) ) /*0x8e6a05*/
  {
    sub_8A6EE0((const void **)(a2 + 0x24), 8); /*0x8e6a0a*/
    v11 = (_DWORD *)a2; /*0x8e6a0f*/
  }
  v12 = v11[0xA]; /*0x8e6a15*/
  v13 = v11[9] + 8 * v12; /*0x8e6a1b*/
  v11[0xA] = v12 + 1; /*0x8e6a1f*/
  v21 = (_DWORD *)v13; /*0x8e6a25*/
  if ( *(_DWORD *)(a3 + 0x28) == (*(_DWORD *)(a3 + 0x2C) & 0x3FFFFFFF) ) /*0x8e6a35*/
  {
    sub_8A6EE0((const void **)(a3 + 0x24), 8); /*0x8e6a3a*/
    v11 = (_DWORD *)a2; /*0x8e6a3f*/
  }
  v14 = *(_DWORD *)(a3 + 0x28); /*0x8e6a45*/
  v15 = (_DWORD *)(*(_DWORD *)(a3 + 0x24) + 8 * v14); /*0x8e6a4b*/
  *(_DWORD *)(a3 + 0x28) = v14 + 1; /*0x8e6a4f*/
  *v21 = v9; /*0x8e6a5e*/
  *v15 = v9; /*0x8e6a60*/
  v21[1] = a3; /*0x8e6a62*/
  v15[1] = v11; /*0x8e6a68*/
  v23[3] = *(_DWORD *)(v9 + 0x10); /*0x8e6a6e*/
  v16 = *(__m128 **)(a3 + 8); /*0x8e6a72*/
  v23[2] = a5; /*0x8e6a75*/
  v20 = (__m128 *)v11[2]; /*0x8e6a7d*/
  v23[0] = v11; /*0x8e6a82*/
  v23[1] = a3; /*0x8e6a86*/
  sub_8B1FF0(v24, v20, v16); /*0x8e6a8a*/
  v17 = *(_BYTE *)(*(unsigned __int16 *)(a3 + 0x1A) + 8 * *(unsigned __int16 *)(a2 + 0x1A) + *a5 + 0x19D4); /*0x8e6aa2*/
  *(_BYTE *)(v9 + 8) = v17; /*0x8e6aa9*/
  a5[0xA] = 0x3C * v17 + *a5 + 0x1A14; /*0x8e6abb*/
  *(_BYTE *)(v9 + 1) = a4; /*0x8e6aca*/
  if ( *(_DWORD *)(0x34 * a4 + v22 + 0x16B8) ) /*0x8e6acd*/
  {
    *(_BYTE *)v9 = 4; /*0x8e6adb*/
    *(_DWORD *)(v9 + 0x1C) = 0xBF800000; /*0x8e6ade*/
    *(_OWORD *)(v9 + 0x20) = 0; /*0x8e6ae5*/
    v18 = v9 + 0x30; /*0x8e6ae9*/
  }
  else
  {
    *(_BYTE *)v9 = 2; /*0x8e6aee*/
    v18 = v9 + 0x20; /*0x8e6af1*/
  }
  (*(void (__cdecl **)(_DWORD *, int, int))(0x34 * (unsigned __int8)a4 + v22 + 0x1694))(v23, v9, v18); /*0x8e6b01*/
  *(_BYTE *)(v9 + 3) = *(_BYTE *)(a1 + 0x14); /*0x8e6b0e*/
  return v9; /*0x8e6b11*/
}
