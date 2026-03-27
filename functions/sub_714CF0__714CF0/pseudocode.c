float *__thiscall sub_714CF0(float *this, float *a2, float *a3)
{
  *a2 = *a3 * *this - a3[1] * *(this + 1) - a3[2] * *(this + 2) - a3[3] * *(this + 3);
  a2[1] = *(this + 1) * *a3 + a3[1] * *this + a3[3] * *(this + 2) - *(this + 3) * a3[2];
  a2[2] = *(this + 2) * *a3 + a3[2] * *this + a3[1] * *(this + 3) - a3[3] * *(this + 1);
  a2[3] = *(this + 3) * *a3 + a3[3] * *this + *(this + 1) * a3[2] - a3[1] * *(this + 2);
  return a2;
}
