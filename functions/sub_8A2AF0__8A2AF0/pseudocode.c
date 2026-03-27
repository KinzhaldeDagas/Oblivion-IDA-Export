double __cdecl sub_8A2AF0(float a1)
{
  long double v1; // st7
  bool v2; // c0
  double v3; // st7
  float v5; // [esp+4h] [ebp+4h]

  v1 = a1;
  v5 = fabs(a1);
  if ( v5 < (double)fConstant_1 )
  {
    return (float)acos(v1);
  }
  else
  {
    v2 = v1 > 0.0;
    v3 = 0.0;
    if ( !v2 )
      return flt_A9740C;
    return (float)v3;
  }
}
