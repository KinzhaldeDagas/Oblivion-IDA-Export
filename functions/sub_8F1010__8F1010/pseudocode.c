int __cdecl sub_8F1010(int a1, float *a2, int *a3)
{
  int v3; // esi
  int result; // eax

  v3 = *a3 + 0x30;
  result = a3[1] + 0x1C;
  *(float *)(result - 0x18) = *(float *)(a1 + 8) * *a2;
  *(float *)(result - 0x14) = *(float *)(a1 + 0xC) * *a2;
  *(_DWORD *)(result - 0x10) = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(result - 4) = *(_DWORD *)(a1 + 0x18);
  *(_DWORD *)(result - 0xC) = *(_DWORD *)(a1 + 0x10);
  *(_DWORD *)(result - 8) = *(_DWORD *)(a1 + 0x14);
  *(_DWORD *)(result - 0x1C) = 0x31C05;
  *(float *)(v3 - 0x24) = a2[1] * *(float *)a1;
  *a3 = v3;
  a3[1] = result;
  return result;
}
