int __cdecl sub_480520(float *a1, float *a2, float a3)
{
  int v4[3]; // [esp+4h] [ebp-Ch] BYREF

  *(float *)v4 = *a1 - *a2; /*0x480530*/
  *(float *)&v4[1] = a1[1] - a2[1]; /*0x48053a*/
  *(float *)&v4[2] = a1[2] - a2[2]; /*0x480548*/
  return sub_47F6F0((float *)v4, a3); /*0x48055c*/
}
