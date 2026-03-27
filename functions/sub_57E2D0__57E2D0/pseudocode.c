double sub_57E2D0()
{
  double v0; // st7
  float v2; // [esp+0h] [ebp-8h]
  float v3; // [esp+0h] [ebp-8h]
  float v4; // [esp+4h] [ebp-4h]

  v2 = (float)nWidth;
  v4 = (float)nHeight;
  if ( v4 >= (double)v2 )
    v0 = flt_A688A8;
  else
    v0 = v2 / v4 * dbl_A68D70;
  v3 = v0;
  return (float)(-v3 * dbl_A2FAA0);
}
