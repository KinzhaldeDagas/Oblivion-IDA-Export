double __cdecl Calc_ConstantEffectEnchantmentMagnitude(float a1, float a2, int a3)
{
  double v3; // st7
  double v4; // st6
  double v5; // st7
  float v7; // [esp+4h] [ebp+4h]
  float v8; // [esp+4h] [ebp+4h]

  v7 = a1 * a2 * (double)a3 + flt_B37ED0[0x84] + dbl_A2FAA0; /*0x549078*/
  v3 = v7; /*0x54907c*/
  v8 = (float)Double_To_SInt32(v7); /*0x54908f*/
  v4 = v3 - v8; /*0x54909b*/
  v5 = v8; /*0x54909b*/
  if ( v4 < dbl_A2FC68 ) /*0x5490a8*/
    return (float)(v5 - dbl_A2F928); /*0x5490aa*/
  return (float)v5; /*0x5490b8*/
}
