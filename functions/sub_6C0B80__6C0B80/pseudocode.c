int __cdecl sub_6C0B80(int a1, int a2)
{
  int result; // eax

  *(float *)a1 = *(float *)a2;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 0xC) = *(_DWORD *)(a2 + 0xC);
  *(_DWORD *)(a1 + 0x10) = *(_DWORD *)(a2 + 0x10);
  *(float *)(a1 + 0x14) = *(float *)(a2 + 0x14);
  *(float *)(a1 + 0x18) = *(float *)(a2 + 0x18);
  *(float *)(a1 + 0x1C) = *(float *)(a2 + 0x1C);
  *(_DWORD *)(a1 + 0x20) = *(_DWORD *)(a2 + 0x20);
  *(_DWORD *)(a1 + 0x24) = *(_DWORD *)(a2 + 0x24);
  *(_DWORD *)(a1 + 0x28) = *(_DWORD *)(a2 + 0x28);
  *(_DWORD *)(a1 + 0x2C) = *(_DWORD *)(a2 + 0x2C);
  *(_DWORD *)(a1 + 0x30) = *(_DWORD *)(a2 + 0x30);
  *(_DWORD *)(a1 + 0x34) = *(_DWORD *)(a2 + 0x34);
  *(_DWORD *)(a1 + 0x38) = *(_DWORD *)(a2 + 0x38);
  result = *(_DWORD *)(a2 + 0x3C);
  *(_DWORD *)(a1 + 0x3C) = result;
  return result;
}
