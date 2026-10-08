double __fastcall sub_4A7130(int a1)
{
  float *v2; // edx
  float v3; // [esp+0h] [ebp-4h]

  v3 = flt_A32048; /*0x4a7137*/
  if ( *(float *)(a1 + 0x10) < dbl_A3A5B0 ) /*0x4a7148*/
    return *(float *)(a1 + 0x10); /*0x4a714a*/
  do /*0x4a716e*/
  {
    v2 = *(float **)a1; /*0x4a7150*/
    if ( !*(_DWORD *)a1 ) /*0x4a7150*/
      break; /*0x4a7154*/
    if ( v3 > (double)*v2 ) /*0x4a7162*/
      v3 = *v2; /*0x4a7166*/
    a1 = *(_DWORD *)(a1 + 4); /*0x4a7169*/
  }
  while ( a1 ); /*0x4a716e*/
  return v3; /*0x4a714e*/
}
