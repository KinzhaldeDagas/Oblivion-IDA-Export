double __cdecl sub_546B20(float a1, float a2)
{
  double v2; // st7
  double v3; // st6
  double v4; // st7
  double result; // st7
  float v7; // [esp+Ch] [ebp+8h]
  float v8; // [esp+Ch] [ebp+8h]

  v2 = a1;
  if ( a2 <= (double)a1 )
  {
    a1 = a2;
    v3 = v2;
    v4 = a2;
  }
  else
  {
    v3 = a1;
    v4 = a2;
  }
  if ( v3 > v4 )
    v4 = v3;
  v7 = v4;
  result = a1;
  v8 = v7 - a1;
  if ( v8 > 0.0 )
    return (float)((double)GetRandomLargeInteger_(0) / dbl_A3D5A8 * v8 + a1);
  return result;
}
