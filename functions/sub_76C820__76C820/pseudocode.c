float *__stdcall sub_76C820(float *a1, int a2)
{
  _DWORD *v2; // ecx

  v2 = *(_DWORD **)(a2 + 0xC);
  *(_BYTE *)(a2 + 0x5A) = 1;
  sub_772FF0(v2, 0x18, 2, 0);
  *(float *)(a2 + 0x18) = *a1;
  *(float *)(a2 + 0x28) = a1[1];
  *(float *)(a2 + 0x38) = a1[2];
  *(float *)(a2 + 0x48) = 0.0;
  *(float *)(a2 + 0x1C) = a1[3];
  *(float *)(a2 + 0x2C) = a1[4];
  *(float *)(a2 + 0x3C) = a1[5];
  *(float *)(a2 + 0x4C) = 0.0;
  *(float *)(a2 + 0x50) = 0.0;
  *(float *)(a2 + 0x40) = 0.0;
  *(float *)(a2 + 0x30) = 0.0;
  *(float *)(a2 + 0x20) = 0.0;
  *(float *)(a2 + 0x54) = 0.0;
  *(float *)(a2 + 0x44) = 0.0;
  *(float *)(a2 + 0x34) = 0.0;
  *(float *)(a2 + 0x24) = 0.0;
  return a1;
}
