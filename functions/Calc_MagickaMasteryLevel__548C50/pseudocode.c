int __cdecl Calc_MagickaMasteryLevel(float a1)
{
  double v1; // st7
  int result; // eax
  float v3; // [esp+4h] [ebp+4h]

  v3 = flt_B37E00 * a1 + flt_B37DF8;
  v1 = v3;
  if ( flt_B37E08 > (double)v3 )
    return 0;
  if ( flt_B37E10 > v1 )
    return 1;
  if ( flt_B37E18 > v1 )
    return 2;
  result = 3;
  if ( flt_B37E20 <= v1 )
    return 4;
  return result;
}
