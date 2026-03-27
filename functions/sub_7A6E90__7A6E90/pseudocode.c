double __stdcall sub_7A6E90(float a1)
{
  double v1; // st7
  float v3; // [esp+4h] [ebp+4h]
  float v4; // [esp+4h] [ebp+4h]
  float v5; // [esp+4h] [ebp+4h]

  v1 = a1;
  v3 = fabs(a1);
  if ( v3 > (double)flt_A58E1C )
    return (float)0.0;
  v4 = v1 * -v1 * dbl_A2FAA0;
  v5 = exp(v4);
  return (float)(v5 * dbl_A8CA00);
}
