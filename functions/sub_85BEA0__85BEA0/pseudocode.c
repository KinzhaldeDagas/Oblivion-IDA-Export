float *__stdcall sub_85BEA0(int a1, int a2, int a3)
{
  unsigned int v3; // ecx
  double v4; // st7
  unsigned int v6; // [esp+8h] [ebp-8h]

  v3 = dword_B25AD4; /*0x85beb5*/
  if ( a2 ) /*0x85becc*/
    *(float *)&v3 = 1.0; /*0x85bed2*/
  if ( a3 ) /*0x85bee0*/
    v4 = *(float *)(a3 + 0x4C); /*0x85bee2*/
  else
    v4 = flt_A37CC8; /*0x85bee7*/
  *(float *)&v6 = v4; /*0x85bef1*/
  return OB_BSShader_SetSharedFloat4Constant_010201A0(0x1Fu, COERCE_UNSIGNED_INT(1.0), v3, v6, dword_B25ADC); /*0x85bf14*/
}
