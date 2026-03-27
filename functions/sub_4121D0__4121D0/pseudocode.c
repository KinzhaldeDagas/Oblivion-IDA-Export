float *__thiscall sub_4121D0(float *this, float *a2)
{
  *this = *a2 + *this;
  *(this + 1) = a2[1] + *(this + 1);
  *(this + 2) = a2[2] + *(this + 2);
  return this;
}
