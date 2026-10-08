float *__thiscall sub_4707B0(float *this, float *a2, float a3)
{
  *a2 = *this * a3; /*0x4707c0*/
  a2[1] = *(this + 1) * a3; /*0x4707c7*/
  a2[2] = a3 * *(this + 2); /*0x4707cd*/
  return a2; /*0x4707d0*/
}
