float *__thiscall sub_710490(float *this, float *a2, float *a3)
{
  *a2 = *a3 * *this + a3[3] * *(this + 3) + a3[6] * *(this + 6);
  a2[3] = *(this + 4) * a3[3] + *(this + 1) * *a3 + a3[6] * *(this + 7);
  a2[6] = *(this + 5) * a3[3] + *(this + 2) * *a3 + a3[6] * *(this + 8);
  a2[1] = a3[1] * *this + a3[4] * *(this + 3) + *(this + 6) * a3[7];
  a2[4] = a3[4] * *(this + 4) + a3[1] * *(this + 1) + a3[7] * *(this + 7);
  a2[7] = a3[4] * *(this + 5) + a3[1] * *(this + 2) + a3[7] * *(this + 8);
  a2[2] = a3[2] * *this + a3[5] * *(this + 3) + *(this + 6) * a3[8];
  a2[5] = a3[5] * *(this + 4) + a3[2] * *(this + 1) + a3[8] * *(this + 7);
  a2[8] = a3[5] * *(this + 5) + a3[2] * *(this + 2) + a3[8] * *(this + 8);
  return a2;
}
