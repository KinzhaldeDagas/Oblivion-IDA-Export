float *__thiscall sub_714C60(float *this, float *a2, float *a3)
{
  *a2 = *a3 + *this; /*0x714c6c*/
  a2[1] = a3[1] + *(this + 1); /*0x714c74*/
  a2[2] = a3[2] + *(this + 2); /*0x714c7d*/
  a2[3] = a3[3] + *(this + 3); /*0x714c86*/
  return a2; /*0x714c89*/
}
