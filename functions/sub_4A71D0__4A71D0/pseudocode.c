double __fastcall sub_4A71D0(float *a1)
{
  int v2; // edx
  float v3; // [esp+0h] [ebp-4h]

  v3 = flt_A32048; /*0x4a71d7*/
  if ( a1[5] < dbl_A3A5B0 ) /*0x4a71e8*/
    return a1[5]; /*0x4a71ea*/
  do /*0x4a7210*/
  {
    v2 = *(_DWORD *)a1; /*0x4a71f0*/
    if ( !*(_DWORD *)a1 ) /*0x4a71f0*/
      break; /*0x4a71f4*/
    if ( v3 > (double)*(float *)(v2 + 4) ) /*0x4a7203*/
      v3 = *(float *)(v2 + 4); /*0x4a7208*/
    a1 = *((float **)a1 + 1); /*0x4a720b*/
  }
  while ( a1 ); /*0x4a7210*/
  return v3; /*0x4a71ee*/
}
