int __thiscall sub_8E7B20(float *this, _OWORD *a2, float *a3)
{
  int result; // eax

  sub_8E79A0((_OWORD *)this + 4, a2, a3); /*0x8e7b37*/
  result = hkMatrix3_SetFromQuaternion(this, a3); /*0x8e7b3f*/
  *((_OWORD *)this + 3) = *a2; /*0x8e7b47*/
  *((_OWORD *)this + 9) = 0; /*0x8e7b4f*/
  *(this + 0x28) = 1.0; /*0x8e7b56*/
  return result; /*0x8e7b60*/
}
