int __cdecl sub_8B4540(char *a1, int a2, int a3, float a4, int a5)
{
  int v7; // ebx
  int v8; // ecx
  unsigned int v9; // esi
  char *v10; // eax
  int v11; // ebx
  char *v12; // eax
  int v13; // ebx
  char *v14; // eax
  int v15; // ecx
  int v16; // esi
  signed int v17; // eax
  _DWORD *ThreadLocalStoragePointer; // ebx
  bool v19; // zf
  int v20; // edi
  int v21; // ecx
  int v22; // ecx
  int v23; // [esp+0h] [ebp-40h]
  char *v24; // [esp+4h] [ebp-3Ch] BYREF
  int v25; // [esp+8h] [ebp-38h]
  unsigned int v26; // [esp+Ch] [ebp-34h]
  _DWORD *v27[2]; // [esp+10h] [ebp-30h] BYREF
  signed int v28; // [esp+18h] [ebp-28h]
  int v29[3]; // [esp+1Ch] [ebp-24h] BYREF
  int v30[6]; // [esp+28h] [ebp-18h] BYREF

  if ( a4 <= (double)*(float *)&SrcStr )
    return 1;
  v24 = 0;
  v25 = 0;
  v26 = 0x80000000;
  if ( a3 > 0 )
    sub_8A6E40((const void **)&v24, a3 < 0 ? 0 : a3, 0x10);
  v7 = 0;
  v25 = a3;
  if ( a3 >= 4 )
  {
    v8 = 0;
    v9 = ((unsigned int)(a3 - 4) >> 2) + 1;
    v23 = 4 * v9;
    do
    {
      *(_DWORD *)&v24[v8] = *(_DWORD *)a1;
      *(_DWORD *)&v24[v8 + 4] = *((_DWORD *)a1 + 1);
      *(_DWORD *)&v24[v8 + 8] = *((_DWORD *)a1 + 2);
      *(_DWORD *)&v24[v8 + 0x10] = *(_DWORD *)&a1[a2];
      *(_DWORD *)&v24[v8 + 0x14] = *(_DWORD *)&a1[a2 + 4];
      *(_DWORD *)&v24[v8 + 0x18] = *(_DWORD *)&a1[a2 + 8];
      v10 = &a1[a2];
      *(_DWORD *)&v24[v8 + 0x20] = *(_DWORD *)&v10[a2];
      v11 = *(_DWORD *)&v10[a2 + 4];
      v12 = &v10[a2];
      *(_DWORD *)&v24[v8 + 0x24] = v11;
      *(_DWORD *)&v24[v8 + 0x28] = *((_DWORD *)v12 + 2);
      v13 = *(_DWORD *)&v12[a2];
      v14 = &v12[a2];
      *(_DWORD *)&v24[v8 + 0x30] = v13;
      *(_DWORD *)&v24[v8 + 0x34] = *((_DWORD *)v14 + 1);
      *(_DWORD *)&v24[v8 + 0x38] = *((_DWORD *)v14 + 2);
      a1 = &v14[a2];
      v8 += 0x40;
      --v9;
    }
    while ( v9 );
    v7 = v23;
  }
  if ( v7 < a3 )
  {
    v15 = 0x10 * v7;
    v16 = a3 - v7;
    do
    {
      *(_DWORD *)&v24[v15] = *(_DWORD *)a1;
      *(_DWORD *)&v24[v15 + 4] = *((_DWORD *)a1 + 1);
      *(_DWORD *)&v24[v15 + 8] = *((_DWORD *)a1 + 2);
      a1 += a2;
      v15 += 0x10;
      --v16;
    }
    while ( v16 );
  }
  v29[0] = (int)v24;
  v29[2] = 0x10;
  v29[1] = a3;
  v30[0] = 0;
  v30[1] = 0;
  v30[2] = 0x80000000;
  v30[3] = 0;
  v30[4] = 0;
  v30[5] = 0x80000000;
  v27[0] = 0;
  v27[1] = 0;
  v28 = 0x80000000;
  sub_8F2010(v29, v30, (int)v27, 1);
  sub_8B43E0((__m128 **)v30, a4, a5);
  v17 = v28;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v19 = v28 >= 0;
  *(float *)(a5 + 4) = a4;
  v20 = TlsIndex;
  if ( v19 )
  {
    v21 = *(_DWORD *)(ThreadLocalStoragePointer[v20] + 0x19C);
    if ( !v21 )
      v21 = dword_BA7D9C;
    sub_8A75D0(v21, v27[0], 0x10 * v17, 0x14);
  }
  sub_8B44C0(v30);
  if ( (v26 & 0x80000000) == 0 )
  {
    v22 = *(_DWORD *)(ThreadLocalStoragePointer[v20] + 0x19C);
    if ( !v22 )
      v22 = dword_BA7D9C;
    sub_8A75D0(v22, v24, 0x10 * v26, 0x14);
  }
  return 0;
}
