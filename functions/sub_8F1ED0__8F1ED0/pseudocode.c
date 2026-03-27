int __cdecl sub_8F1ED0(int *a1, int *a2, int *a3, int a4)
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

  v5 = a1[2];
  if ( v5 == 0x10 && (*a1 & 0xF) == 0 )
    return sub_9333B0((__int128 *)*a1, a1[1], a2, a3, a4);
  v7 = a1[1];
  v8 = 0;
  v9 = 0x80000000;
  v10 = v5 / 4;
  v19 = 0;
  v20 = 0;
  v21 = 0x80000000;
  v22 = 0;
  if ( v7 > 0 )
  {
    v11 = 0;
    v18 = 4 * v10;
    while ( 1 )
    {
      v12 = v9 & 0x3FFFFFFF;
      if ( v12 < v8 + 1 )
      {
        v13 = 2 * v12;
        if ( v8 + 1 >= 2 * v12 )
          v13 = v8 + 1;
        sub_8A6E40((const void **)&v19, v13, 0x10);
      }
      v14 = (__int128 *)*a1;
      v20 = v8 + 1;
      v15 = v19;
      v16 = v8;
      LODWORD(v19[v16]) = *(_DWORD *)((char *)v14 + v11);
      v17 = &v15[v16];
      *((_DWORD *)v17 + 1) = *(_DWORD *)(*a1 + v11 + 4);
      *((_DWORD *)v17 + 2) = *(_DWORD *)(*a1 + v11 + 8);
      v11 += v18;
      if ( ++v22 >= a1[1] )
        break;
      v9 = v21;
      v8 = v20;
    }
  }
  sub_9333B0(v19, a1[1], a2, a3, a4);
  result = v21;
  if ( v21 >= 0 )
    return sub_8A75D0(
             *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
             v19,
             0x10 * v21,
             0x14);
  return result;
}
