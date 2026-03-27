float *__fastcall sub_6B47D0(unsigned int a1)
{
  float *v1; // eax
  float *v2; // edx
  float *result; // eax

  v1 = (float *)(a1 + 0x800);
  v2 = (float *)(a1 + 0x1000);
  if ( a1 + 0x800 >= a1 )
  {
    do
    {
      v2 += 0xFFFFFFFF;
      v1 += 0xFFFFFFFF;
      *v2 = 0.0;
      *v1 = 0.0;
    }
    while ( (unsigned int)v1 > a1 );
  }
  result = (float *)(a1 + 0x1088);
  if ( a1 + 0x1088 > a1 + 0x1008 )
  {
    do
    {
      result += 0xFFFFFFFF;
      *result = 0.0;
    }
    while ( (unsigned int)result > a1 + 0x1008 );
  }
  *(_DWORD *)(a1 + 0x1000) = a1;
  *(_DWORD *)(a1 + 0x1004) = 0xF;
  return result;
}
