float *__thiscall sub_70FCC0(float *this, float *a2, float *a3, float *a4)
{
  *this = *a2;
  *(this + 3) = a2[1];
  *(this + 6) = a2[2];
  *(this + 1) = *a3;
  *(this + 4) = a3[1];
  *(this + 7) = a3[2];
  *(this + 2) = *a4;
  *(this + 5) = a4[1];
  *(this + 8) = a4[2];
  return this;
}
