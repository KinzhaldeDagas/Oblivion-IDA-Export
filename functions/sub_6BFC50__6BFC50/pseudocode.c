int __cdecl sub_6BFC50(int a1, int a2)
{
  int result; // eax

  *(float *)a1 = *(float *)a2; /*0x6bfc5a*/
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4); /*0x6bfc5f*/
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8); /*0x6bfc65*/
  *(_DWORD *)(a1 + 0xC) = *(_DWORD *)(a2 + 0xC); /*0x6bfc6b*/
  *(float *)(a1 + 0x10) = *(float *)(a2 + 0x10); /*0x6bfc71*/
  *(float *)(a1 + 0x14) = *(float *)(a2 + 0x14); /*0x6bfc7d*/
  *(float *)(a1 + 0x18) = *(float *)(a2 + 0x18); /*0x6bfc83*/
  *(_DWORD *)(a1 + 0x1C) = *(_DWORD *)(a2 + 0x1C); /*0x6bfc89*/
  *(_DWORD *)(a1 + 0x20) = *(_DWORD *)(a2 + 0x20); /*0x6bfc8f*/
  *(_DWORD *)(a1 + 0x24) = *(_DWORD *)(a2 + 0x24); /*0x6bfc95*/
  *(_DWORD *)(a1 + 0x28) = *(_DWORD *)(a2 + 0x28); /*0x6bfc9b*/
  *(_DWORD *)(a1 + 0x2C) = *(_DWORD *)(a2 + 0x2C); /*0x6bfca1*/
  *(_DWORD *)(a1 + 0x30) = *(_DWORD *)(a2 + 0x30); /*0x6bfca7*/
  *(_DWORD *)(a1 + 0x34) = *(_DWORD *)(a2 + 0x34); /*0x6bfcad*/
  *(_DWORD *)(a1 + 0x38) = *(_DWORD *)(a2 + 0x38); /*0x6bfcb3*/
  *(_DWORD *)(a1 + 0x3C) = *(_DWORD *)(a2 + 0x3C); /*0x6bfcb9*/
  *(_DWORD *)(a1 + 0x40) = *(_DWORD *)(a2 + 0x40); /*0x6bfcbe*/
  *(_DWORD *)(a1 + 0x44) = *(_DWORD *)(a2 + 0x44); /*0x6bfcc3*/
  result = *(_DWORD *)(a2 + 0x48); /*0x6bfcc6*/
  *(_DWORD *)(a1 + 0x48) = result; /*0x6bfcc9*/
  return result; /*0x6bfccc*/
}
