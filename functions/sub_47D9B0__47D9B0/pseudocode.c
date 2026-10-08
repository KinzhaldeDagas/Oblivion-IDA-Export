float *__thiscall sub_47D9B0(float *this, float *a2, float *a3)
{
  *a2 = *a3 + *this; /*0x47d9bc*/
  a2[1] = a3[1] + *(this + 1); /*0x47d9c4*/
  a2[2] = a3[2] + *(this + 2); /*0x47d9cd*/
  return a2; /*0x47d9d0*/
}
