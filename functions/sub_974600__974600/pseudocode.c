float *__thiscall sub_974600(float *this, int a2, int a3, float a4, float a5, float a6, int a7)
{
  sub_96F0E0(this, a4, a5, a6, a7); /*0x974622*/
  *((_DWORD *)this + 0xF) = a3; /*0x97462f*/
  *(_DWORD *)this = &NiBoxSphereIntersector::`vftable'; /*0x974632*/
  *((_DWORD *)this + 0xE) = a2; /*0x974638*/
  *(this + 0x10) = 1.0 / (*(float *)(a3 + 0x10) * *(float *)(a3 + 0x10)); /*0x974646*/
  *(this + 0x11) = flt_A7DEB4; /*0x97464f*/
  *(this + 0x12) = flt_A7DEB4; /*0x974658*/
  *(this + 0x13) = flt_A7DEB4; /*0x974661*/
  return this; /*0x974665*/
}
