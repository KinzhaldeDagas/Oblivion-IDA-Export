float *__thiscall sub_4121D0(float *this, float *a2)
{
  *this = *a2 + *this; /*0x4121da*/
  *(this + 1) = a2[1] + *(this + 1); /*0x4121e2*/
  *(this + 2) = a2[2] + *(this + 2); /*0x4121eb*/
  return this; /*0x4121ee*/
}
