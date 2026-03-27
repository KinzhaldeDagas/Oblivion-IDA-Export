double __fastcall sub_4A7130(int a1)
{
  float *v2; // edx
  float v3; // [esp+0h] [ebp-4h]

  v3 = flt_A32048;
  if ( *(float *)(a1 + 0x10) < dbl_A3A5B0 )
    return *(float *)(a1 + 0x10);
  do
  {
    v2 = *(float **)a1;
    if ( !*(_DWORD *)a1 )
      break;
    if ( v3 > (double)*v2 )
      v3 = *v2;
    a1 = *(_DWORD *)(a1 + 4);
  }
  while ( a1 );
  return v3;
}
