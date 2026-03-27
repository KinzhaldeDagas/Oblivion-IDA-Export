float *__thiscall sub_786ED0(float *this, float *a2, float *a3)
{
  *a2 = a3[4] * *(this + 1) + *a3 * *this + a3[8] * *(this + 2) + a3[0xC];
  a2[1] = a3[1] * *this + a3[5] * *(this + 1) + a3[9] * *(this + 2) + a3[0xD];
  a2[2] = a3[2] * *this + a3[6] * *(this + 1) + a3[0xA] * *(this + 2) + a3[0xE];
  return a2;
}
