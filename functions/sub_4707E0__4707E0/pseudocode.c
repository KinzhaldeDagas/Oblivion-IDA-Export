float *__thiscall sub_4707E0(float *this, float a2)
{
  float v3; // [esp+4h] [ebp+4h]

  v3 = 1.0 / a2;
  *this = *this * v3;
  *(this + 1) = *(this + 1) * v3;
  *(this + 2) = v3 * *(this + 2);
  return this;
}
