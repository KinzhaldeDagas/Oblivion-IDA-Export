double __cdecl sub_546720(int a1, float a2)
{
  float v3; // [esp+8h] [ebp+4h]
  float v4; // [esp+8h] [ebp+4h]

  v3 = (double)a1 * flt_B36988 + flt_B36980;
  v4 = Calc_FatigueFactor(a2) * v3;
  return (float)((flt_B36990 - v4) * dbl_A2FAA0);
}
