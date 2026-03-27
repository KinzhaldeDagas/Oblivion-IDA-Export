float *__stdcall sub_6D1830(int a1, char a2, int a3, float a4, int a5)
{
  float *v5; // eax
  float *result; // eax

  v5 = (float *)FormHeapAlloc(0x34u);
  if ( v5 )
    result = sub_6D2480(v5, a2, a4, a5);
  else
    result = 0;
  *((_BYTE *)result + 0xC) |= 2u;
  return result;
}
