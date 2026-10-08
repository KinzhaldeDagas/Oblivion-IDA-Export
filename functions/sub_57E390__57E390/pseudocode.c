double sub_57E390()
{
  double v0; // st7
  float v2; // [esp+0h] [ebp-8h]
  float v3; // [esp+0h] [ebp-8h]
  float v4; // [esp+4h] [ebp-4h]

  v4 = (float)nWidth; /*0x57e399*/
  v2 = (float)nHeight; /*0x57e3a3*/
  if ( v4 >= (double)v2 ) /*0x57e3b4*/
    v0 = flt_A68D78; /*0x57e3c4*/
  else
    v0 = v2 / v4 * dbl_A688A0; /*0x57e3b8*/
  v3 = v0; /*0x57e3ca*/
  return (float)(-v3 * dbl_A2FAA0); /*0x57e3e0*/
}
