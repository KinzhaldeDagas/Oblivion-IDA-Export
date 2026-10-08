// Returns virtual UI height: 960 for landscape/square, otherwise (height/width)*1280.
double sub_57D7F0()
{
  float v1; // [esp+0h] [ebp-8h]
  float v2; // [esp+4h] [ebp-4h]

  v2 = (float)nWidth; /*0x57d7f9*/
  v1 = (float)nHeight; /*0x57d803*/
  if ( v2 >= (double)v1 ) /*0x57d814*/
    return flt_A68D78; /*0x57d82e*/
  return (float)(v1 / v2 * dbl_A688A0); /*0x57d826*/
}
