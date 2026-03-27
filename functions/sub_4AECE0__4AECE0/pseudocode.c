char __thiscall sub_4AECE0(_BYTE *this, unsigned __int8 a2)
{
  if ( a2 > 0x5Au || a2 < *(this + 0x3D) )
    return 0;
  *(this + 0x3E) = a2;
  return 1;
}
