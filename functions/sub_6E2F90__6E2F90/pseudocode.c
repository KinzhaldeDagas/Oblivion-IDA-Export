float *__stdcall sub_6E2F90(int a1, char a2, int a3, float a4, unsigned __int8 a5)
{
  float *v5; // eax

  v5 = (float *)FormHeapAlloc(0x34u);
  if ( v5 )
    return sub_6D2480(v5, a2, a4, a5);
  else
    return 0;
}
