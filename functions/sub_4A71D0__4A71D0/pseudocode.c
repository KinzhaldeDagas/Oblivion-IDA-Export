double __fastcall sub_4A71D0(float *a1)
{
  int v2; // edx
  float v3; // [esp+0h] [ebp-4h]

  v3 = flt_A32048;
  if ( a1[5] < dbl_A3A5B0 )
    return a1[5];
  do
  {
    v2 = *(_DWORD *)a1;
    if ( !*(_DWORD *)a1 )
      break;
    if ( v3 > (double)*(float *)(v2 + 4) )
      v3 = *(float *)(v2 + 4);
    a1 = *((float **)a1 + 1);
  }
  while ( a1 );
  return v3;
}
