double sub_57D7F0()
{
  float v1; // [esp+0h] [ebp-8h]
  float v2; // [esp+4h] [ebp-4h]

  v2 = (float)nWidth;
  v1 = (float)nHeight;
  if ( v2 >= (double)v1 )
    return flt_A68D78;
  return (float)(v1 / v2 * dbl_A688A0);
}
