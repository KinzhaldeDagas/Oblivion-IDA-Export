double __cdecl Calc_DiseaseTransferPercent(signed int a1)
{
  signed int v1; // eax

  v1 = a1; /*0x5490c0*/
  if ( a1 >= 0x64 ) /*0x5490c7*/
    v1 = 0x64; /*0x5490c9*/
  return (float)((double)(0x64 - v1) * flt_B37ED0[0x88] + flt_B37ED0[0x86]); /*0x5490f1*/
}
