char __thiscall sub_4AECE0(_BYTE *this, unsigned __int8 a2)
{
  if ( a2 > 0x5Au || a2 < *(this + 0x3D) ) /*0x4aeceb*/
    return 0; /*0x4aecf5*/
  *(this + 0x3E) = a2; /*0x4aeced*/
  return 1; /*0x4aecf2*/
}
