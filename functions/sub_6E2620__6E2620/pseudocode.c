float *__stdcall sub_6E2620(int a1, char a2, int a3, float a4, unsigned __int8 a5)
{
  float *v5; // eax

  v5 = (float *)FormHeapAlloc(0x40u); /*0x6e2643*/
  if ( v5 ) /*0x6e2659*/
    return sub_6EA850(v5, a2, a4, a5); /*0x6e266f*/
  else
    return 0; /*0x6e2686*/
}
