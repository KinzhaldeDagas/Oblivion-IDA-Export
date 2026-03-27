TESObjectLAND *__thiscall sub_4CE3C0(TESObjectCELL *this)
{
  TESObjectLAND *v2; // eax
  TESObjectLAND *v3; // eax

  if ( (this->members.flags0 & 1) != 0 || (this->members.super.flags & 0x400) != 0 )
    return 0;
  if ( !this->members.land )
  {
    v2 = (TESObjectLAND *)FormHeapAlloc(0x28u);
    if ( v2 )
      v3 = TESObjectLAND::TESObjectLAND(v2);
    else
      v3 = 0;
    this->members.land = v3;
    sub_4BFDC0(v3, this);
  }
  return this->members.land;
}
