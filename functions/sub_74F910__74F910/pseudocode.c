float *__stdcall sub_74F910(__int16 a1, char a2, int a3, float a4, unsigned __int8 a5)
{
  float *v5; // eax
  float *v7; // eax

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v7 = (float *)FormHeapAlloc(0x34u);
      if ( v7 )
        return sub_6EB460(v7, a2, a4, a5);
    }
  }
  else
  {
    v5 = (float *)FormHeapAlloc(0x34u);
    if ( v5 )
      return sub_6D2480(v5, a2, a4, a5);
  }
  return 0;
}
