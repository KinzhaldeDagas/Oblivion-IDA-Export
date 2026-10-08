void __thiscall sub_4C9D30(TESObjectCELL *this, UInt32 a2)
{
  TESCELL_CoordOrLight v2; // eax

  if ( (this->members.flags0 & 1) != 0 ) /*0x4c9d34*/
  {
    v2.lighting = (LightingData *)this->members.coordOrLight; /*0x4c9d36*/
    if ( v2.lighting ) /*0x4c9d3b*/
      v2.lighting->unk028 = a2; /*0x4c9d41*/
  }
}
