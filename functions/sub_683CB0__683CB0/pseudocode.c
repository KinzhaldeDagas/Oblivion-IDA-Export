double __cdecl sub_683CB0(float *a1)
{
  double result; // st7
  double v3; // st7
  double v4; // st6
  float v5; // [esp+8h] [ebp+4h]
  float v6; // [esp+8h] [ebp+4h]
  float v7; // [esp+8h] [ebp+4h]
  float v8; // [esp+8h] [ebp+4h]

  if ( 0.0 == a1[1] )
  {
    if ( *a1 <= 0.0 )
      v3 = flt_A74C88;
    else
      v3 = flt_A3F3E0;
    v8 = v3;
    result = v8;
  }
  else
  {
    v5 = *a1 / a1[1];
    v6 = atan(v5);
    if ( a1[1] < 0.0 )
      v6 = v6 + dbl_A3D5B8;
    result = v6;
    if ( v6 < 0.0 )
    {
      v7 = result + dbl_A3D5B0;
      unknown_libname_14(dbl_A3D5B0, v7);
      return v7;
    }
  }
  v4 = dbl_A3D5B0;
  if ( v4 <= result )
  {
    unknown_libname_14(v4, result);
    return (float)result;
  }
  return result;
}
