int __cdecl sub_6BD2D0(int a1, int a2, int a3, _DWORD *a4)
{
  float *v4; // eax
  int result; // eax
  float v6[4]; // [esp+10h] [ebp-10h] BYREF

  v4 = sub_714C40(v6, 1.0, 0.0, 0.0, 0.0); /*0x6bd2ed*/
  *a4 = *(_DWORD *)v4; /*0x6bd2f8*/
  a4[1] = *((_DWORD *)v4 + 1); /*0x6bd2fd*/
  a4[2] = *((_DWORD *)v4 + 2); /*0x6bd303*/
  result = *((_DWORD *)v4 + 3); /*0x6bd306*/
  a4[3] = result; /*0x6bd309*/
  return result; /*0x6bd30c*/
}
