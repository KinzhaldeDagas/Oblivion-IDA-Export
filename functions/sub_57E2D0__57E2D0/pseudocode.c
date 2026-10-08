double sub_57E2D0()
{
  double v0; // st7
  float v2; // [esp+0h] [ebp-8h]
  float v3; // [esp+0h] [ebp-8h]
  float v4; // [esp+4h] [ebp-4h]

  v2 = (float)nWidth; /*0x57e2d9*/
  v4 = (float)nHeight; /*0x57e2e2*/
  if ( v4 >= (double)v2 ) /*0x57e2f4*/
    v0 = flt_A688A8; /*0x57e304*/
  else
    v0 = v2 / v4 * dbl_A68D70; /*0x57e2f8*/
  v3 = v0; /*0x57e30a*/
  return (float)(-v3 * dbl_A2FAA0); /*0x57e320*/
}
