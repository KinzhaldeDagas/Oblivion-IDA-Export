double __cdecl Calc_ConstantEffectEnchantmentMagnitude(float a1, float a2, int a3)
{
  double v3; // st7
  double v4; // st6
  double v5; // st7
  float v7; // [esp+4h] [ebp+4h]
  float v8; // [esp+4h] [ebp+4h]

  v7 = a1 * a2 * (double)a3 + fMagicCEEnchantMagOffset + dbl_A2FAA0;
  v3 = v7;
  v8 = (float)Double_To_SInt32(v7);
  v4 = v3 - v8;
  v5 = v8;
  if ( v4 < dbl_A2FC68 )
    return (float)(v5 - dbl_A2F928);
  return (float)v5;
}
