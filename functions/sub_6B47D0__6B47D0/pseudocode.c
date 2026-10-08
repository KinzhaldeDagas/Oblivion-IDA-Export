float *__fastcall sub_6B47D0(unsigned int a1)
{
  float *v1; // eax
  float *v2; // edx
  float *result; // eax

  v1 = (float *)(a1 + 0x800); /*0x6b47d3*/
  v2 = (float *)(a1 + 0x1000); /*0x6b47e1*/
  if ( a1 + 0x800 >= a1 ) /*0x6b47e3*/
  {
    do /*0x6b47f1*/
    {
      v2 += 0xFFFFFFFF; /*0x6b47e5*/
      v1 += 0xFFFFFFFF; /*0x6b47e8*/
      *v2 = 0.0; /*0x6b47eb*/
      *v1 = 0.0; /*0x6b47ef*/
    }
    while ( (unsigned int)v1 > a1 ); /*0x6b47f1*/
  }
  result = (float *)(a1 + 0x1088); /*0x6b47f3*/
  if ( a1 + 0x1088 > a1 + 0x1008 ) /*0x6b4801*/
  {
    do /*0x6b480a*/
    {
      result += 0xFFFFFFFF; /*0x6b4803*/
      *result = 0.0; /*0x6b4808*/
    }
    while ( (unsigned int)result > a1 + 0x1008 ); /*0x6b480a*/
  }
  *(_DWORD *)(a1 + 0x1000) = a1; /*0x6b480c*/
  *(_DWORD *)(a1 + 0x1004) = 0xF; /*0x6b4810*/
  return result; /*0x6b481a*/
}
