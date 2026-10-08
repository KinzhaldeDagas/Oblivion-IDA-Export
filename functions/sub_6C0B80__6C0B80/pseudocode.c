int __cdecl sub_6C0B80(int a1, int a2)
{
  int result; // eax

  *(float *)a1 = *(float *)a2; /*0x6c0b8a*/
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4); /*0x6c0b8f*/
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8); /*0x6c0b95*/
  *(_DWORD *)(a1 + 0xC) = *(_DWORD *)(a2 + 0xC); /*0x6c0b9b*/
  *(_DWORD *)(a1 + 0x10) = *(_DWORD *)(a2 + 0x10); /*0x6c0ba1*/
  *(float *)(a1 + 0x14) = *(float *)(a2 + 0x14); /*0x6c0ba7*/
  *(float *)(a1 + 0x18) = *(float *)(a2 + 0x18); /*0x6c0bb3*/
  *(float *)(a1 + 0x1C) = *(float *)(a2 + 0x1C); /*0x6c0bb9*/
  *(_DWORD *)(a1 + 0x20) = *(_DWORD *)(a2 + 0x20); /*0x6c0bbf*/
  *(_DWORD *)(a1 + 0x24) = *(_DWORD *)(a2 + 0x24); /*0x6c0bc5*/
  *(_DWORD *)(a1 + 0x28) = *(_DWORD *)(a2 + 0x28); /*0x6c0bcb*/
  *(_DWORD *)(a1 + 0x2C) = *(_DWORD *)(a2 + 0x2C); /*0x6c0bd1*/
  *(_DWORD *)(a1 + 0x30) = *(_DWORD *)(a2 + 0x30); /*0x6c0bd6*/
  *(_DWORD *)(a1 + 0x34) = *(_DWORD *)(a2 + 0x34); /*0x6c0bdb*/
  *(_DWORD *)(a1 + 0x38) = *(_DWORD *)(a2 + 0x38); /*0x6c0be1*/
  result = *(_DWORD *)(a2 + 0x3C); /*0x6c0be4*/
  *(_DWORD *)(a1 + 0x3C) = result; /*0x6c0be7*/
  return result; /*0x6c0bea*/
}
