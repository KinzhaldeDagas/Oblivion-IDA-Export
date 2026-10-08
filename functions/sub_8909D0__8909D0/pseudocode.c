float *__thiscall sub_8909D0(float *this, int a2)
{
  *(_OWORD *)this = *(_OWORD *)a2; /*0x8909de*/
  *((_OWORD *)this + 1) = *(_OWORD *)(a2 + 0x10); /*0x8909e5*/
  *(this + 8) = *(float *)(a2 + 0x20); /*0x8909ec*/
  *(this + 9) = *(float *)(a2 + 0x24); /*0x8909f2*/
  *(this + 0xA) = *(float *)(a2 + 0x28); /*0x8909f8*/
  *(this + 0xB) = *(float *)(a2 + 0x2C); /*0x8909fe*/
  *(this + 0xC) = *(float *)(a2 + 0x30); /*0x890a04*/
  return this; /*0x890a09*/
}
