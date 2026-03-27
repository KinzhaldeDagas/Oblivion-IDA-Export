double __thiscall sub_8A2C00(float *this)
{
  long double v1; // st7
  bool v2; // c0
  double v3; // st7
  float v5; // [esp+0h] [ebp-4h]
  float v6; // [esp+0h] [ebp-4h]
  float v7; // [esp+0h] [ebp-4h]
  float v9; // [esp+0h] [ebp-4h]

  v5 = fabs(*(this + 3));
  v1 = v5;
  v6 = fabs(v5);
  if ( v6 < (double)fConstant_1 )
  {
    v9 = acos(v1);
    return (float)(v9 + v9);
  }
  else
  {
    v2 = v1 > 0.0;
    v3 = 0.0;
    if ( !v2 )
      v3 = flt_A9740C;
    v7 = v3;
    return (float)(v7 + v7);
  }
}
