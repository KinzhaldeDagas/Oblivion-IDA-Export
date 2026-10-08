char __thiscall sub_4AED60(float *this, float a2)
{
  if ( a2 < 0.0 || a2 > 1.0 ) /*0x4aed7a*/
    return 0; /*0x4aed86*/
  *(this + 0x14) = a2; /*0x4aed7c*/
  return 1; /*0x4aed81*/
}
