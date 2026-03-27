float *__thiscall sub_43F320(float *this, float *a2)
{
  *this = *this - *a2;
  *(this + 1) = *(this + 1) - a2[1];
  *(this + 2) = *(this + 2) - a2[2];
  return this;
}
