float *__stdcall sub_75F570(int a1, char a2, int a3, float a4, unsigned __int8 a5)
{
  float *v5; // eax

  v5 = (float *)FormHeapAlloc(0x34u); /*0x75f572*/
  if ( v5 ) /*0x75f57c*/
    return sub_6D2480(v5, a2, a4, a5); /*0x75f592*/
  else
    return 0; /*0x75f59a*/
}
