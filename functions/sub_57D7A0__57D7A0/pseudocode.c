double sub_57D7A0()
{
  float v1; // [esp+0h] [ebp-8h]
  float v2; // [esp+4h] [ebp-4h]

  v1 = (float)nWidth;
  v2 = (float)nHeight;
  if ( v2 >= (double)v1 )
    return flt_A688A8;
  return (float)(v1 / v2 * dbl_A68D70);
}
