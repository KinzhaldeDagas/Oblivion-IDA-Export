char __thiscall sub_4AED90(float *this, float a2)
{
  if ( a2 <= 0.0 || a2 > fCostant_100 ) /*0x4aedac*/
    return 0; /*0x4aedb8*/
  *(this + 0x15) = a2; /*0x4aedae*/
  return 1; /*0x4aedb3*/
}
