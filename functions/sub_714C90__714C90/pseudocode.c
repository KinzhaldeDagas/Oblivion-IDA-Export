float *__thiscall sub_714C90(float *this, float *a2, float *a3)
{
  *a2 = *this - *a3; /*0x714c9c*/
  a2[1] = *(this + 1) - a3[1]; /*0x714ca4*/
  a2[2] = *(this + 2) - a3[2]; /*0x714cad*/
  a2[3] = *(this + 3) - a3[3]; /*0x714cb6*/
  return a2; /*0x714cb9*/
}
