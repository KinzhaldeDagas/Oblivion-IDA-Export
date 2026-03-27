double __thiscall sub_499020(float *this)
{
  double v1; // st7
  bool v2; // c0
  bool v3; // c3
  double result; // st7
  float v5; // [esp+4h] [ebp-4h]
  float v6; // [esp+4h] [ebp-4h]
  float v7; // [esp+4h] [ebp-4h]

  v5 = *(this + 1) * *(this + 1) + *this * *this;
  v6 = sqrt(v5);
  v1 = flt_A372CC;
  v2 = v6 < v1;
  v3 = v6 == v1;
  result = v6;
  if ( v2 || v3 )
  {
    *this = 0.0;
    *(this + 1) = 0.0;
    return (float)0.0;
  }
  else
  {
    v7 = 1.0 / result;
    *this = *this * v7;
    *(this + 1) = v7 * *(this + 1);
  }
  return result;
}
