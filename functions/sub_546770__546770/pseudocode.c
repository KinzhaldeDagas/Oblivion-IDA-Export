double __cdecl sub_546770(signed int a1)
{
  double result; // st7
  float v2; // [esp+4h] [ebp+4h]
  float v3; // [esp+4h] [ebp+4h]
  float v4; // [esp+4h] [ebp+4h]
  float v5; // [esp+4h] [ebp+4h]
  float v6; // [esp+4h] [ebp+4h]

  v2 = (double)a1 * flt_B36988 + flt_B36980;
  v3 = v2 + flt_B36998;
  v4 = (fCostant_100 - v3) / fCostant_100;
  v5 = fabs(v4);
  result = 0.0;
  if ( v5 > 0.0 )
  {
    v6 = dbl_A2FCC8 - v5 * dbl_A49360;
    if ( v6 < 0.0 )
      return (float)0.0;
    return v6;
  }
  return result;
}
