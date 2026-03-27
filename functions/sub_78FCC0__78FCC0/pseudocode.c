double __thiscall sub_78FCC0(float *this, float *a2)
{
  double v2; // st7
  float v4; // [esp+4h] [ebp+4h]
  float v5; // [esp+4h] [ebp+4h]

  v4 = a2[1] * *(this + 1) + *a2 * *this + a2[2] * *(this + 2);
  v2 = flt_A30634;
  if ( v4 < v2 || (v2 = 1.0, v4 > 1.0) )
  {
    v5 = v2;
    return (float)acos(v5);
  }
  else
  {
    return (float)acos(v4);
  }
}
