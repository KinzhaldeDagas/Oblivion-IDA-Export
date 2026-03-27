double __fastcall sub_4A7180(int a1)
{
  float *v2; // edx
  float v3; // [esp+0h] [ebp-4h]

  v3 = flt_A3B888;
  if ( *(float *)(a1 + 0x18) > dbl_A40398 )
    return *(float *)(a1 + 0x18);
  do
  {
    v2 = *(float **)a1;
    if ( !*(_DWORD *)a1 )
      break;
    if ( v3 < (double)*v2 )
      v3 = *v2;
    a1 = *(_DWORD *)(a1 + 4);
  }
  while ( a1 );
  return v3;
}
