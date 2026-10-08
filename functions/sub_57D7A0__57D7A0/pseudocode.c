// Returns virtual UI width: 1280 for portrait/square, otherwise aspect*960. Layout coordinates are independent of output pixel resolution.
double sub_57D7A0()
{
  float v1; // [esp+0h] [ebp-8h]
  float v2; // [esp+4h] [ebp-4h]

  v1 = (float)nWidth; /*0x57d7a9*/
  v2 = (float)nHeight; /*0x57d7b2*/
  if ( v2 >= (double)v1 ) /*0x57d7c4*/
    return flt_A688A8; /*0x57d7de*/
  return (float)(v1 / v2 * dbl_A68D70); /*0x57d7d6*/
}
