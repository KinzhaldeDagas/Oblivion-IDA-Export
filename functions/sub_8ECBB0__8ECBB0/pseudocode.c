double __cdecl sub_8ECBB0(float a1, float a2)
{
  long double v2; // st7
  long double v3; // st6
  long double v4; // st7
  double v5; // st6
  long double v6; // st7
  double result; // st7

  v2 = fabs(a1);
  v3 = fabs(a2);
  if ( v2 > v3 )
  {
    v6 = v3 / (v2 + flt_A9AFE0);
    v5 = flt_A3F3E0 - (v6 - flt_A9AFF0 * (v6 * v6) - v6 * v6 * v6 * flt_A9AFEC);
  }
  else
  {
    v4 = v2 / (v3 + flt_A9AFE0);
    v5 = v4 - flt_A9AFF0 * (v4 * v4) - v4 * v4 * v4 * flt_A9AFEC;
  }
  result = v5;
  if ( a2 < (double)*(float *)&SrcStr )
    result = flt_A9AFE4 - v5;
  if ( a1 < (double)*(float *)&SrcStr )
    return -result;
  return result;
}
