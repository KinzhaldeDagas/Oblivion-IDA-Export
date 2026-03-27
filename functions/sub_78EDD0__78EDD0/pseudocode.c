float *__thiscall sub_78EDD0(float *this, float *a2, float *a3)
{
  *a2 = a3[3] * *(this + 1) + *a3 * *this + a3[6] * *(this + 2);
  a2[1] = a3[4] * *(this + 1) + a3[1] * *this + *(this + 2) * a3[7];
  a2[2] = a3[5] * *(this + 1) + *this * a3[2] + a3[8] * *(this + 2);
  a2[3] = a3[3] * *(this + 4) + *(this + 3) * *a3 + a3[6] * *(this + 5);
  a2[4] = a3[4] * *(this + 4) + a3[1] * *(this + 3) + a3[7] * *(this + 5);
  a2[5] = *(this + 3) * a3[2] + a3[5] * *(this + 4) + a3[8] * *(this + 5);
  a2[6] = *(this + 7) * a3[3] + *a3 * *(this + 6) + a3[6] * *(this + 8);
  a2[7] = a3[1] * *(this + 6) + *(this + 7) * a3[4] + *(this + 8) * a3[7];
  a2[8] = a3[5] * *(this + 7) + *(this + 6) * a3[2] + a3[8] * *(this + 8);
  return a2;
}
