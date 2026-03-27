float *__thiscall sub_714C60(float *this, float *a2, float *a3)
{
  *a2 = *a3 + *this;
  a2[1] = a3[1] + *(this + 1);
  a2[2] = a3[2] + *(this + 2);
  a2[3] = a3[3] + *(this + 3);
  return a2;
}
