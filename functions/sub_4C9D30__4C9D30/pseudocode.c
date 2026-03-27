void __thiscall sub_4C9D30(TESObjectCELL *this, UInt32 a2)
{
  TESCELL_CoordOrLight v2; // eax

  if ( (this->members.flags0 & 1) != 0 )
  {
    v2.lighting = (LightingData *)this->members.coordOrLight;
    if ( v2.lighting )
      v2.lighting->unk028 = a2;
  }
}
