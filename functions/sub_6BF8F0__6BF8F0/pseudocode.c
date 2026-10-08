int __cdecl sub_6BF8F0(float a1, int a2, int a3, _DWORD *a4)
{
  float *v4; // eax
  int result; // eax
  int v6[4]; // [esp+Ch] [ebp-10h] BYREF

  v4 = sub_72FC00((float *)v6, a1, (float *)(a2 + 4), (float *)(a3 + 4)); /*0x6bf910*/
  *a4 = *(_DWORD *)v4; /*0x6bf91b*/
  a4[1] = *((_DWORD *)v4 + 1); /*0x6bf920*/
  a4[2] = *((_DWORD *)v4 + 2); /*0x6bf926*/
  result = *((_DWORD *)v4 + 3); /*0x6bf929*/
  a4[3] = result; /*0x6bf92c*/
  return result; /*0x6bf932*/
}
