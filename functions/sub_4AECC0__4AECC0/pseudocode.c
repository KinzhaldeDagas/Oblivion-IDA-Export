char __thiscall sub_4AECC0(_BYTE *this, unsigned __int8 a2)
{
  if ( a2 > 0x5Au || a2 > *(this + 0x3E) )
    return 0;
  *(this + 0x3D) = a2;
  return 1;
}
