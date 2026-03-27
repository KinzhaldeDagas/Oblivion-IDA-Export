char __thiscall sub_4AED30(float *this, float a2)
{
  if ( a2 < 0.0 || a2 > 1.0 )
    return 0;
  *(this + 0x13) = a2;
  return 1;
}
