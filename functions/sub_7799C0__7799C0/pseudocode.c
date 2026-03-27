float *__cdecl sub_7799C0(float *a1, float *a2, int a3, char a4, float *a5)
{
  int v5; // eax

  sub_772FF0(*(_DWORD **)(a3 + 0xC), 0xB, 0x20000, a4);
  v5 = dword_B4215C;
  *(_BYTE *)(a3 + 0x5A) = dword_B4215C && v5 != 0x100;
  sub_772FF0(*(_DWORD **)(a3 + 0xC), 0x18, v5, a4);
  *(float *)(a3 + 0x18) = a5[0x280] * *a1 + a5[0x281] * a1[1] + a5[0x282] * a1[2];
  *(float *)(a3 + 0x28) = a1[1] * a5[0x285] + *a1 * a5[0x284] + a1[2] * a5[0x286];
  *(float *)(a3 + 0x38) = a1[1] * a5[0x289] + *a1 * a5[0x288] + a1[2] * a5[0x28A];
  *(float *)(a3 + 0x1C) = a5[0x280] * a1[3] + a5[0x281] * a1[4] + a1[5] * a5[0x282];
  *(float *)(a3 + 0x2C) = a1[4] * a5[0x285] + a1[3] * a5[0x284] + a1[5] * a5[0x286];
  *(float *)(a3 + 0x3C) = a1[4] * a5[0x289] + a1[3] * a5[0x288] + a1[5] * a5[0x28A];
  *(float *)(a3 + 0x20) = a5[0x280] * a1[6] + a5[0x281] * a1[7] + a1[8] * a5[0x282];
  *(float *)(a3 + 0x30) = a1[6] * a5[0x284] + a5[0x285] * a1[7] + a1[8] * a5[0x286];
  *(float *)(a3 + 0x40) = a1[6] * a5[0x288] + a5[0x289] * a1[7] + a1[8] * a5[0x28A];
  *(float *)(a3 + 0x48) = *a1 * a5[0x28C] + a5[0x28D] * a1[1] + a5[0x28E] * a1[2] + *a2;
  *(float *)(a3 + 0x4C) = a1[3] * a5[0x28C] + a5[0x28D] * a1[4] + a1[5] * a5[0x28E] + a2[1];
  *(float *)(a3 + 0x50) = a5[0x28D] * a1[7] + a1[6] * a5[0x28C] + a5[0x28E] * a1[8] + a2[2];
  *(float *)(a3 + 0x54) = 0.0;
  *(float *)(a3 + 0x44) = 0.0;
  *(float *)(a3 + 0x34) = 0.0;
  *(float *)(a3 + 0x24) = 0.0;
  return a5;
}
