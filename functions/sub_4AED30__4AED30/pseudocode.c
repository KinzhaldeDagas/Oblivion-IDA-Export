char __thiscall sub_4AED30(float *this, float a2)
{
  if ( a2 < 0.0 || a2 > 1.0 ) /*0x4aed4a*/
    return 0; /*0x4aed56*/
  *(this + 0x13) = a2; /*0x4aed4c*/
  return 1; /*0x4aed51*/
}
