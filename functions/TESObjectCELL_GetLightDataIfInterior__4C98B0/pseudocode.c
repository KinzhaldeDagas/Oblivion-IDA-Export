TESCELL_CoordOrLight __thiscall TESObjectCELL::GetLightDataIfInterior(TESObjectCELL *this)
{
  if ( (this->members.flags0 & kFlags0_Interior) != 0 ) /*0x4c98b4*/
    return this->members.coordOrLight; /*0x4c98b9*/
  else
    return 0; /*0x4c98b6*/
}
