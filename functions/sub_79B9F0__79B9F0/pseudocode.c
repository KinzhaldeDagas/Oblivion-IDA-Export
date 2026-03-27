void __cdecl sub_79B9F0(
        int a1,
        int a2,
        int a3,
        char *a4,
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
        int a15)
{
  int v15; // ecx
  int v16; // ebx
  int v17; // edi
  int v18; // esi
  bool v19; // cc
  int v20; // esi
  int v21; // eax
  char v22; // dl
  int v23; // ecx
  double v24; // st7
  unsigned int v25; // eax
  double v26; // st7

  v15 = a2;
  v16 = (a2 - 1) / 2;
  if ( a3 < a2 )
  {
    do
    {
      v17 = 0x30 * v16 + a1;
      if ( a13 >= (double)*(float *)(v17 + 0x24) )
        break;
      v18 = a1 + 0x30 * v15;
      sub_79B160((char **)v18, (char **)(0x30 * v16 + a1));
      *(float *)(v18 + 0x10) = *(float *)(v17 + 0x10);
      *(float *)(v18 + 0x14) = *(float *)(v17 + 0x14);
      *(_BYTE *)(v18 + 0x18) = *(_BYTE *)(v17 + 0x18);
      *(float *)(v18 + 0x1C) = *(float *)(v17 + 0x1C);
      v15 = v16;
      *(float *)(v18 + 0x20) = *(float *)(v17 + 0x20);
      *(float *)(v18 + 0x24) = *(float *)(v17 + 0x24);
      *(_DWORD *)(v18 + 0x28) = *(_DWORD *)(v17 + 0x28);
      *(_DWORD *)(v18 + 0x2C) = *(_DWORD *)(v17 + 0x2C);
      v19 = a3 < v16;
      v16 = (v16 - 1) / 2;
    }
    while ( v19 );
  }
  v20 = a1 + 0x30 * v15;
  sub_79B160((char **)v20, &a4);
  v21 = a14;
  *(float *)(v20 + 0x10) = a8;
  v22 = a10;
  v23 = a15;
  *(float *)(v20 + 0x14) = a9;
  v24 = a11;
  *(_DWORD *)(v20 + 0x28) = v21;
  v25 = a5;
  *(float *)(v20 + 0x1C) = v24;
  *(float *)(v20 + 0x20) = a12;
  *(_BYTE *)(v20 + 0x18) = v22;
  v26 = a13;
  *(_DWORD *)(v20 + 0x2C) = v23;
  *(float *)(v20 + 0x24) = v26;
  if ( v25 )
    FormHeapFree(v25);
}
