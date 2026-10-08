float *__stdcall sub_4AEB40(float *a1, int a2, float a3)
{
  float *result; // eax
  float y; // edx
  float z; // ecx
  int v6; // ecx
  float *v7; // edx
  double v8; // st6
  float *v9; // edx
  float *v10; // ecx

  result = a1; /*0x4aeb40*/
  y = g_zeroNiPoint3.y; /*0x4aeb4a*/
  *a1 = g_zeroNiPoint3.x; /*0x4aeb50*/
  z = g_zeroNiPoint3.z; /*0x4aeb52*/
  a1[1] = y; /*0x4aeb58*/
  a1[2] = z; /*0x4aeb5b*/
  if ( (unsigned int)(a2 - 1) <= 0x13 ) /*0x4aeb68*/
  {
    v6 = 0x10 * a2; /*0x4aeb6c*/
    v7 = *(float **)(0x10 * a2 + 0xB07F38); /*0x4aeb6f*/
    if ( !v7 ) /*0x4aeb77*/
    {
      flt_B35464[0] = 0.0; /*0x4aeb79*/
      v7 = flt_B35464; /*0x4aeb7f*/
    }
    v8 = *v7; /*0x4aeb84*/
    v9 = *(float **)(v6 + 0xB07F3C); /*0x4aeb86*/
    *a1 = v8; /*0x4aeb8e*/
    if ( !v9 ) /*0x4aeb90*/
    {
      flt_B35464[0] = 0.0; /*0x4aeb92*/
      v9 = flt_B35464; /*0x4aeb98*/
    }
    v10 = *(float **)(v6 + 0xB07F40); /*0x4aeb9d*/
    a1[1] = *v9; /*0x4aeba7*/
    if ( v10 ) /*0x4aebaa*/
    {
      a1[2] = (a3 - dbl_A2F928) * *v10; /*0x4aebba*/
    }
    else
    {
      flt_B35464[0] = 0.0; /*0x4aebc0*/
      a1[2] = (a3 - dbl_A2F928) * flt_B35464[0]; /*0x4aebd7*/
    }
  }
  return result; /*0x4aebbd*/
}
