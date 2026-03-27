double __fastcall sub_4A7220(float *a1)
{
  int v2; // edx
  float v3; // [esp+0h] [ebp-4h]

  v3 = flt_A3B888;
  if ( a1[7] > dbl_A40398 )
    return a1[7];
  do
  {
    v2 = *(_DWORD *)a1;
    if ( !*(_DWORD *)a1 )
      break;
    if ( v3 < (double)*(float *)(v2 + 4) )
      v3 = *(float *)(v2 + 4);
    a1 = *((float **)a1 + 1);
  }
  while ( a1 );
  return v3;
}
