double __cdecl sub_546CC0(float a1, float a2, int a3)
{
  double v3; // st7
  float v5; // [esp+8h] [ebp+8h]

  if ( a2 == 0.0 )
    v3 = 0.0;
  else
    v3 = a1 / a2;
  v5 = v3;
  return (float)((double)a3 * flt_B36D40 + flt_B36D38 + (1.0 - v5) * flt_B36D30);
}
