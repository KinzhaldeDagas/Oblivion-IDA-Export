double sub_57E3F0()
{
  double v0; // st7
  float v2; // [esp+0h] [ebp-8h]
  float v3; // [esp+0h] [ebp-8h]
  float v4; // [esp+4h] [ebp-4h]

  v4 = (float)nWidth; /*0x57e3f9*/
  v2 = (float)nHeight; /*0x57e403*/
  if ( v4 >= (double)v2 ) /*0x57e414*/
    v0 = flt_A68D78; /*0x57e424*/
  else
    v0 = v2 / v4 * dbl_A688A0; /*0x57e418*/
  v3 = v0; /*0x57e42a*/
  return (float)(v3 * dbl_A2FAA0); /*0x57e43e*/
}
