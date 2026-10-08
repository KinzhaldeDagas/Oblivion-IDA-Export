double __cdecl sub_546720(int a1, float a2)
{
  float v3; // [esp+8h] [ebp+4h]
  float v4; // [esp+8h] [ebp+4h]

  v3 = (double)a1 * flt_B36778[0x84] + flt_B36778[0x82]; /*0x546731*/
  v4 = Calc_FatigueFactor(a2) * v3; /*0x546748*/
  return (float)((flt_B36778[0x86] - v4) * dbl_A2FAA0); /*0x546764*/
}
