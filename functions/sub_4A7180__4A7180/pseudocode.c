double __fastcall sub_4A7180(int a1)
{
  float *v2; // edx
  float v3; // [esp+0h] [ebp-4h]

  v3 = flt_A3B888; /*0x4a7187*/
  if ( *(float *)(a1 + 0x18) > dbl_A40398 ) /*0x4a7198*/
    return *(float *)(a1 + 0x18); /*0x4a719a*/
  do /*0x4a71be*/
  {
    v2 = *(float **)a1; /*0x4a71a0*/
    if ( !*(_DWORD *)a1 ) /*0x4a71a0*/
      break; /*0x4a71a4*/
    if ( v3 < (double)*v2 ) /*0x4a71b2*/
      v3 = *v2; /*0x4a71b6*/
    a1 = *(_DWORD *)(a1 + 4); /*0x4a71b9*/
  }
  while ( a1 ); /*0x4a71be*/
  return v3; /*0x4a719e*/
}
