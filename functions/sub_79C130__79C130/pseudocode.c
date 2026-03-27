void __cdecl sub_79C130(
        int a1,
        int a2,
        int a3,
        char a4,
        unsigned int a5,
        int a6,
        int a7,
        float a8,
        float a9,
        char a10,
        float a11,
        float a12,
        float a13,
        int a14,
        int a15,
        char *a16)
{
  int v16; // edi
  int v17; // eax
  int v18; // ebx
  bool v19; // zf
  int v20; // esi
  int v21; // edi
  int v22; // ebx
  int v23; // esi
  char *v24[21]; // [esp-34h] [ebp-54h] BYREF

  v16 = a2;
  v17 = a3;
  v18 = 2 * a2 + 2;
  v19 = v18 == a3;
  v24[0x14] = 0;
  if ( v18 < a3 )
  {
    do
    {
      if ( *(float *)(a1 + 0x30 * v18 - 0xC) < (double)*(float *)(0x30 * v18 + a1 + 0x24) )
        --v18;
      v20 = a1 + 0x30 * v18;
      v21 = a1 + 0x30 * v16;
      sub_79B160((char **)v21, (char **)v20);
      *(float *)(v21 + 0x10) = *(float *)(v20 + 0x10);
      *(float *)(v21 + 0x14) = *(float *)(v20 + 0x14);
      *(_BYTE *)(v21 + 0x18) = *(_BYTE *)(v20 + 0x18);
      *(float *)(v21 + 0x1C) = *(float *)(v20 + 0x1C);
      *(float *)(v21 + 0x20) = *(float *)(v20 + 0x20);
      *(float *)(v21 + 0x24) = *(float *)(v20 + 0x24);
      *(_DWORD *)(v21 + 0x28) = *(_DWORD *)(v20 + 0x28);
      *(_DWORD *)(v21 + 0x2C) = *(_DWORD *)(v20 + 0x2C);
      v16 = v18;
      v18 = 2 * v18 + 2;
    }
    while ( v18 < a3 );
    v17 = a3;
    v19 = v18 == a3;
  }
  if ( v19 )
  {
    v22 = 0x30 * v17 + a1 - 0x30;
    v23 = a1 + 0x30 * v16;
    sub_79B160((char **)v23, (char **)v22);
    *(float *)(v23 + 0x10) = *(float *)(v22 + 0x10);
    *(float *)(v23 + 0x14) = *(float *)(v22 + 0x14);
    *(_BYTE *)(v23 + 0x18) = *(_BYTE *)(v22 + 0x18);
    *(float *)(v23 + 0x1C) = *(float *)(v22 + 0x1C);
    v16 = a3 - 1;
    *(float *)(v23 + 0x20) = *(float *)(v22 + 0x20);
    *(float *)(v23 + 0x24) = *(float *)(v22 + 0x24);
    *(_DWORD *)(v23 + 0x28) = *(_DWORD *)(v22 + 0x28);
    *(_DWORD *)(v23 + 0x2C) = *(_DWORD *)(v22 + 0x2C);
  }
  v24[0xC] = a16;
  sub_79AD70(v24, (int)&a4);
  sub_79B9F0(a1, v16, a2, v24[0], (unsigned int)v24[1], (int)v24[2], (int)v24[3], a8, a9, a10, a11, a12, a13, a14, a15);
  if ( a5 )
    FormHeapFree(a5);
}
