float *__thiscall sub_8D2C90(float *this, float a2, float a3)
{
  double v3; // st7
  float *result; // eax

  v3 = a3 - a2;
  *this = a2;
  *(this + 1) = a3;
  *(this + 2) = v3;
  result = this;
  if ( v3 == *(float *)&SrcStr )
    *(this + 3) = *(float *)&SrcStr;
  else
    *(this + 3) = fConstant_1 / v3;
  return result;
}
