double __cdecl sub_683AD0(float a1, float a2, float *a3)
{
  double v3; // st6
  double result; // st7
  float v5; // [esp+8h] [ebp+8h]

  v5 = a2 - a1;
  *a3 = 0.0;
  v3 = v5;
  if ( v5 == 0.0 )
    return v5;
  *a3 = 1.0;
  result = v5;
  if ( v3 >= 0.0 )
  {
    if ( v3 > dbl_A3D5B8 )
    {
      *a3 = flt_A30634;
      return (float)(dbl_A3D5B0 - v3);
    }
  }
  else if ( v3 <= dbl_A491E0 )
  {
    return (float)(v3 + dbl_A3D5B0);
  }
  else
  {
    *a3 = flt_A30634;
  }
  return result;
}
