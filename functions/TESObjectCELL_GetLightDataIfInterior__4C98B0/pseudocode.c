TESCELL_CoordOrLight __thiscall TESObjectCELL::GetLightDataIfInterior(TESObjectCELL *this)
{
  if ( (this->members.flags0 & kFlags0_Interior) != 0 )
    return this->members.coordOrLight;
  else
    return 0;
}
