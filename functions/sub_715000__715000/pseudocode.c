float *__thiscall sub_715000(float *this, float *a2, float *a3)
{
  long double v4; // st7
  double v5; // st7
  float v6; // [esp+4h] [ebp-8h]
  float v7; // [esp+4h] [ebp-8h]
  float v8; // [esp+8h] [ebp-4h]
  float v9; // [esp+8h] [ebp-4h]
  float v10; // [esp+10h] [ebp+4h]

  v8 = *(this + 2) * *(this + 2) + *(this + 1) * *(this + 1) + *(this + 3) * *(this + 3);
  v9 = sqrt(v8);
  if ( flt_A7EAB0 <= (double)v9 )
  {
    v4 = *this;
    if ( v4 <= dbl_A3D360 )
    {
      v5 = flt_B3F9A4;
    }
    else if ( v4 >= 1.0 )
    {
      v5 = 0.0;
    }
    else
    {
      v6 = acos(v4);
      v5 = v6;
    }
    v7 = v5;
    *a2 = v7 + v7;
    v10 = 1.0 / v9;
    *a3 = *(this + 1) * v10;
    a3[1] = v10 * *(this + 2);
    a3[2] = v10 * *(this + 3);
    return a3;
  }
  else
  {
    *a2 = 0.0;
    *a3 = 0.0;
    a3[1] = 0.0;
    a3[2] = 0.0;
    return a3;
  }
}
