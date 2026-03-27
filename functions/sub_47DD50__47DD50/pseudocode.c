float *__thiscall sub_47DD50(float *this, float *a2)
{
  double v3; // rt0

  v3 = hkFactor;
  *this = *a2 * v3;
  *(this + 1) = a2[1] * v3;
  *(this + 2) = v3 * a2[2];
  *(this + 3) = 0.0;
  return this;
}
