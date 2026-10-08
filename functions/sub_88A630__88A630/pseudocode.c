float *__thiscall sub_88A630(float *this, int a2)
{
  *(_OWORD *)this = *(_OWORD *)a2; /*0x88a63e*/
  *(this + 4) = *(float *)(a2 + 0x10); /*0x88a644*/
  *(this + 5) = *(float *)(a2 + 0x14); /*0x88a64a*/
  *(this + 8) = *(float *)(a2 + 0x20); /*0x88a650*/
  return this; /*0x88a655*/
}
