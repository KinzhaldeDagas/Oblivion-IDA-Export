TESObjectLAND *__thiscall sub_4CE3C0(TESObjectCELL *this)
{
  TESObjectLAND *v2; // eax
  TESObjectLAND *v3; // eax

  if ( (this->members.flags0 & 1) != 0 || (this->members.super.flags & 0x400) != 0 ) /*0x4ce3f1*/
    return 0; /*0x4ce445*/
  if ( !this->members.land ) /*0x4ce3f3*/
  {
    v2 = (TESObjectLAND *)FormHeapAlloc(0x28u); /*0x4ce3fb*/
    if ( v2 ) /*0x4ce411*/
      v3 = TESObjectLAND::TESObjectLAND(v2); /*0x4ce415*/
    else
      v3 = 0; /*0x4ce41c*/
    this->members.land = v3; /*0x4ce429*/
    sub_4BFDC0(v3, this); /*0x4ce42c*/
  }
  return this->members.land; /*0x4ce434*/
}
