float *__stdcall sub_6E4000(int a1, char a2, int a3, float a4, unsigned __int8 a5)
{
  float *v5; // eax

  v5 = (float *)FormHeapAlloc(0x44u); /*0x6e4023*/
  if ( v5 ) /*0x6e4039*/
    return sub_6EAE20(v5, a2, a4, a5); /*0x6e404f*/
  else
    return 0; /*0x6e4066*/
}
