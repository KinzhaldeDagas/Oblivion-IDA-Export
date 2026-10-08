float *__stdcall sub_6E2F90(int a1, char a2, int a3, float a4, unsigned __int8 a5)
{
  float *v5; // eax

  v5 = (float *)FormHeapAlloc(0x34u); /*0x6e2fb3*/
  if ( v5 ) /*0x6e2fc9*/
    return sub_6D2480(v5, a2, a4, a5); /*0x6e2fdf*/
  else
    return 0; /*0x6e2ff6*/
}
