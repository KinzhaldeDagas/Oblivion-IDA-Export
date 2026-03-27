float *__thiscall sub_714C90(float *this, float *a2, float *a3)
{
  *a2 = *this - *a3;
  a2[1] = *(this + 1) - a3[1];
  a2[2] = *(this + 2) - a3[2];
  a2[3] = *(this + 3) - a3[3];
  return a2;
}
