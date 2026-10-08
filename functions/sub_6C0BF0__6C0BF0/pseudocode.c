int __cdecl sub_6C0BF0(float a1, int a2, int a3, _DWORD *a4)
{
  float *v4; // eax
  int result; // eax
  int v6[4]; // [esp+14h] [ebp-10h] BYREF

  v4 = sub_714F80((float *)v6, a1, (float *)(a2 + 4), (float *)(a2 + 0x20), (float *)(a3 + 0x30), (float *)(a3 + 4)); /*0x6c0c18*/
  *a4 = *(_DWORD *)v4; /*0x6c0c23*/
  a4[1] = *((_DWORD *)v4 + 1); /*0x6c0c28*/
  a4[2] = *((_DWORD *)v4 + 2); /*0x6c0c2e*/
  result = *((_DWORD *)v4 + 3); /*0x6c0c31*/
  a4[3] = result; /*0x6c0c34*/
  return result; /*0x6c0c3a*/
}
