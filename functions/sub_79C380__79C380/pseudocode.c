void __cdecl sub_79C380(
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
  char *v16; // eax
  double v17; // st7
  _DWORD v18[12]; // [esp-34h] [ebp-4Ch] BYREF
  char *v19; // [esp-4h] [ebp-1Ch]
  int v20; // [esp+14h] [ebp-4h]

  v20 = 0;
  sub_79B160((char **)a3, (char **)a1);
  *(float *)(a3 + 0x10) = *(float *)(a1 + 0x10);
  *(float *)(a3 + 0x14) = *(float *)(a1 + 0x14);
  *(_BYTE *)(a3 + 0x18) = *(_BYTE *)(a1 + 0x18);
  v16 = a16;
  *(float *)(a3 + 0x1C) = *(float *)(a1 + 0x1C);
  v17 = *(float *)(a1 + 0x20);
  v19 = v16;
  *(float *)(a3 + 0x20) = v17;
  *(float *)(a3 + 0x24) = *(float *)(a1 + 0x24);
  *(_DWORD *)(a3 + 0x28) = *(_DWORD *)(a1 + 0x28);
  *(_DWORD *)(a3 + 0x2C) = *(_DWORD *)(a1 + 0x2C);
  sub_79AD70(v18, (int)&a4);
  sub_79C130(a1, 0, (a2 - a1) / 0x30, v18[0], v18[1], v18[2], v18[3], a8, a9, a10, a11, a12, a13, a14, a15, v19);
  if ( a5 )
    FormHeapFree(a5);
}
