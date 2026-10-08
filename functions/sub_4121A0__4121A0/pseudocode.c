float *__thiscall sub_4121A0(float *this, float *a2, float *a3)
{
  *a2 = *this - *a3; /*0x4121ac*/
  a2[1] = *(this + 1) - a3[1]; /*0x4121b4*/
  a2[2] = *(this + 2) - a3[2]; /*0x4121bd*/
  return a2; /*0x4121c0*/
}
