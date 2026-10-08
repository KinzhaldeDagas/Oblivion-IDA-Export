float *__thiscall sub_96F0E0(float *this, float a2, float a3, float a4, int a5)
{
  float v6; // [esp+0h] [ebp-8h]
  float v7; // [esp+4h] [ebp-4h]

  *(_DWORD *)this = &NiIntersector::`vftable'; /*0x96f0e5*/
  v7 = flt_A7DEB4; /*0x96f0f8*/
  *(this + 8) = flt_A7DEB4; /*0x96f0fc*/
  *(this + 9) = v7; /*0x96f102*/
  *(this + 0xA) = v7; /*0x96f109*/
  v6 = flt_A7DEB4; /*0x96f116*/
  *(this + 0xB) = flt_A7DEB4; /*0x96f119*/
  *(this + 0xC) = v6; /*0x96f120*/
  *(this + 0xD) = v6; /*0x96f126*/
  *((_DWORD *)this + 5) = a5; /*0x96f129*/
  *(this + 6) = 0.0; /*0x96f130*/
  *(this + 1) = a2; /*0x96f137*/
  *(this + 2) = a3; /*0x96f13e*/
  *(this + 3) = 1.0 / a3; /*0x96f145*/
  *(this + 4) = a4; /*0x96f14c*/
  *(this + 7) = flt_A7DEB4; /*0x96f155*/
  return this; /*0x96f158*/
}
