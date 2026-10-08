int __cdecl sub_8F0FB0(int a1, float *a2, int *a3)
{
  int v3; // esi
  int result; // eax

  v3 = *a3 + 0x20; /*0x8f0fc9*/
  result = a3[1] + 0x1C; /*0x8f0fcc*/
  *(float *)(result - 0x18) = *(float *)(a1 + 8) * *a2; /*0x8f0fcf*/
  *(float *)(result - 0x14) = *(float *)(a1 + 0xC) * *a2; /*0x8f0fd7*/
  *(_DWORD *)(result - 0x10) = *(_DWORD *)(a1 + 4); /*0x8f0fdd*/
  *(_DWORD *)(result - 4) = *(_DWORD *)(a1 + 0x18); /*0x8f0fe3*/
  *(_DWORD *)(result - 0xC) = *(_DWORD *)(a1 + 0x10); /*0x8f0fe9*/
  *(_DWORD *)(result - 8) = *(_DWORD *)(a1 + 0x14); /*0x8f0fef*/
  *(_DWORD *)(result - 0x1C) = 0x41C04; /*0x8f0ff2*/
  *(float *)(v3 - 4) = a2[1] * *(float *)a1; /*0x8f0fff*/
  *a3 = v3; /*0x8f1002*/
  a3[1] = result; /*0x8f1005*/
  return result; /*0x8f1004*/
}
