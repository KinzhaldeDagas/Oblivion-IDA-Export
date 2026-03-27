float *__thiscall sub_498FE0(float *this, float *a2, float *a3)
{
  *a2 = a3[2] * *(this + 1) - a3[1] * *(this + 2);
  a2[1] = *(this + 2) * *a3 - *this * a3[2];
  a2[2] = a3[1] * *this - *a3 * *(this + 1);
  return a2;
}
