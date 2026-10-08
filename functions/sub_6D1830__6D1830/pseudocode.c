float *__stdcall sub_6D1830(int a1, char a2, int a3, float a4, unsigned __int8 a5)
{
  float *v5; // eax
  float *result; // eax

  v5 = (float *)FormHeapAlloc(0x34u); /*0x6d1853*/
  if ( v5 ) /*0x6d1869*/
    result = sub_6D2480(v5, a2, a4, a5); /*0x6d187f*/
  else
    result = 0; /*0x6d1886*/
  *((_BYTE *)result + 0xC) |= 2u; /*0x6d1888*/
  return result; /*0x6d188c*/
}
