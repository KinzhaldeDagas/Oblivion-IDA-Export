char __thiscall sub_4AED90(float *this, float a2)
{
  if ( a2 <= 0.0 || a2 > fCostant_100 )
    return 0;
  *(this + 0x15) = a2;
  return 1;
}
