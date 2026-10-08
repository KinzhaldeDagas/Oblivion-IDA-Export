int __cdecl sub_8F1ED0(int *a1, int *a2, const void **a3, int a4)
{
  int v5; // eax
  int result; // eax
  int v7; // edx
  int v8; // esi
  unsigned int v9; // ecx
  int v10; // eax
  int v11; // ebx
  int v12; // ecx
  int v13; // eax
  __int128 *v14; // edx
  __int128 *v15; // ebp
  int v16; // esi
  __int128 *v17; // esi
  int v18; // [esp+4h] [ebp-10h]
  __int128 *v19; // [esp+8h] [ebp-Ch] BYREF
  int v20; // [esp+Ch] [ebp-8h]
  int v21; // [esp+10h] [ebp-4h]
  int v22; // [esp+18h] [ebp+4h]

  v5 = a1[2]; /*0x8f1ed8*/
  if ( v5 == 0x10 && (*a1 & 0xF) == 0 ) /*0x8f1ee5*/
    return sub_9333B0((__int128 *)*a1, a1[1], a2, a3, a4); /*0x8f1efb*/
  v7 = a1[1]; /*0x8f1f0e*/
  v8 = 0; /*0x8f1f12*/
  v9 = 0x80000000; /*0x8f1f14*/
  v10 = v5 / 4; /*0x8f1f19*/
  v19 = 0; /*0x8f1f1e*/
  v20 = 0; /*0x8f1f22*/
  v21 = 0x80000000; /*0x8f1f26*/
  v22 = 0; /*0x8f1f2a*/
  if ( v7 > 0 ) /*0x8f1f2e*/
  {
    v11 = 0; /*0x8f1f31*/
    v18 = 4 * v10; /*0x8f1f37*/
    while ( 1 ) /*0x8f1f48*/
    {
      v12 = v9 & 0x3FFFFFFF; /*0x8f1f48*/
      if ( v12 < v8 + 1 ) /*0x8f1f50*/
      {
        v13 = 2 * v12; /*0x8f1f52*/
        if ( v8 + 1 >= 2 * v12 ) /*0x8f1f57*/
          v13 = v8 + 1; /*0x8f1f59*/
        sub_8A6E40((const void **)&v19, v13, 0x10); /*0x8f1f63*/
      }
      v14 = (__int128 *)*a1; /*0x8f1f6b*/
      v20 = v8 + 1; /*0x8f1f6d*/
      v15 = v19; /*0x8f1f74*/
      v16 = v8; /*0x8f1f78*/
      LODWORD(v19[v16]) = *(_DWORD *)((char *)v14 + v11); /*0x8f1f7b*/
      v17 = &v15[v16]; /*0x8f1f84*/
      *((_DWORD *)v17 + 1) = *(_DWORD *)(*a1 + v11 + 4); /*0x8f1f86*/
      *((_DWORD *)v17 + 2) = *(_DWORD *)(*a1 + v11 + 8); /*0x8f1f97*/
      v11 += v18; /*0x8f1f9e*/
      if ( ++v22 >= a1[1] ) /*0x8f1fa6*/
        break; /*0x8f1fa6*/
      v9 = v21; /*0x8f1f3d*/
      v8 = v20; /*0x8f1f41*/
    }
  }
  sub_9333B0(v19, a1[1], a2, a3, a4); /*0x8f1fc2*/
  result = v21; /*0x8f1fc7*/
  if ( v21 >= 0 ) /*0x8f1fd1*/
    return sub_8A75D0( /*0x8f1ff8*/
             *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
             v19,
             0x10 * v21,
             0x14);
  return result; /*0x8f1f03*/
}
