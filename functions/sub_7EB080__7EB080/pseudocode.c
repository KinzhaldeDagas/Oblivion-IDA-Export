void __cdecl sub_7EB080(float a1)
{
  double v1; // st7
  float v2; // [esp+0h] [ebp-4h]

  if ( byte_B2D91C )
  {
    v2 = (a1 - 1.0) * dbl_A2FC80 + 1.0;
    v1 = a1 * flt_B46128;
    if ( flt_B46124 > v1 )
      v1 = flt_B46124;
    flt_B46124 = v1;
    flt_B46120 = v2;
    flt_B2D918 = v2;
  }
}
