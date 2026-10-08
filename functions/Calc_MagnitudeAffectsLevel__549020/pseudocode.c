bool __cdecl Calc_MagnitudeAffectsLevel(int a1, float a2)
{
  float v3; // [esp+8h] [ebp+8h]

  v3 = flt_B37ED0[0x80] * a2; /*0x54902a*/
  return (double)SLODWORD(flt_B37ED0[0xEE]) <= v3 || (double)a1 <= v3; /*0x549045*/
}
