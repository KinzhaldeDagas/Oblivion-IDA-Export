int __cdecl sub_8F1010(int a1, float *a2, int *a3)
{
  int v3; // esi
  int result; // eax

  v3 = *a3 + 0x30; /*0x8f1029*/
  result = a3[1] + 0x1C; /*0x8f102c*/
  *(float *)(result - 0x18) = *(float *)(a1 + 8) * *a2; /*0x8f102f*/
  *(float *)(result - 0x14) = *(float *)(a1 + 0xC) * *a2; /*0x8f1037*/
  *(_DWORD *)(result - 0x10) = *(_DWORD *)(a1 + 4); /*0x8f103d*/
  *(_DWORD *)(result - 4) = *(_DWORD *)(a1 + 0x18); /*0x8f1043*/
  *(_DWORD *)(result - 0xC) = *(_DWORD *)(a1 + 0x10); /*0x8f1049*/
  *(_DWORD *)(result - 8) = *(_DWORD *)(a1 + 0x14); /*0x8f104f*/
  *(_DWORD *)(result - 0x1C) = 0x31C05; /*0x8f1052*/
  *(float *)(v3 - 0x24) = a2[1] * *(float *)a1; /*0x8f105f*/
  *a3 = v3; /*0x8f1062*/
  a3[1] = result; /*0x8f1065*/
  return result; /*0x8f1064*/
}
