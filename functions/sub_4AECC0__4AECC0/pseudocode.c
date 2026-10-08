char __thiscall sub_4AECC0(_BYTE *this, unsigned __int8 a2)
{
  if ( a2 > 0x5Au || a2 > *(this + 0x3E) ) /*0x4aeccb*/
    return 0; /*0x4aecd5*/
  *(this + 0x3D) = a2; /*0x4aeccd*/
  return 1; /*0x4aecd2*/
}
