float *__thiscall sub_716E00(float *this, float *a2, float *a3)
{
  *this = *a2;
  *(this + 1) = a2[1];
  *(this + 2) = a2[2];
  *(this + 3) = a2[1] * a3[1] + *a2 * *a3 + a2[2] * a3[2];
  return this;
}
