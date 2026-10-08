double __fastcall sub_4A7220(float *a1)
{
  int v2; // edx
  float v3; // [esp+0h] [ebp-4h]

  v3 = flt_A3B888; /*0x4a7227*/
  if ( a1[7] > dbl_A40398 ) /*0x4a7238*/
    return a1[7]; /*0x4a723a*/
  do /*0x4a7260*/
  {
    v2 = *(_DWORD *)a1; /*0x4a7240*/
    if ( !*(_DWORD *)a1 ) /*0x4a7240*/
      break; /*0x4a7244*/
    if ( v3 < (double)*(float *)(v2 + 4) ) /*0x4a7253*/
      v3 = *(float *)(v2 + 4); /*0x4a7258*/
    a1 = *((float **)a1 + 1); /*0x4a725b*/
  }
  while ( a1 ); /*0x4a7260*/
  return v3; /*0x4a723e*/
}
