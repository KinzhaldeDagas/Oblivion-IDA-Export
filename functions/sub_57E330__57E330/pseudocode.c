double sub_57E330()
{
  double v0; // st7
  float v2; // [esp+0h] [ebp-8h]
  float v3; // [esp+0h] [ebp-8h]
  float v4; // [esp+4h] [ebp-4h]

  v2 = (float)nWidth; /*0x57e339*/
  v4 = (float)nHeight; /*0x57e342*/
  if ( v4 >= (double)v2 ) /*0x57e354*/
    v0 = flt_A688A8; /*0x57e364*/
  else
    v0 = v2 / v4 * dbl_A68D70; /*0x57e358*/
  v3 = v0; /*0x57e36a*/
  return (float)(v3 * dbl_A2FAA0); /*0x57e37e*/
}
