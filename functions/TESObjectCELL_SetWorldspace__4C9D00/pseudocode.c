void __thiscall TESObjectCELL::SetWorldspace(TESObjectCELL *this, TESWorldSpace *a2)
{
  if ( (this->members.flags0 & 1) == 0 ) /*0x4c9d04*/
    this->members.worldSpace = a2; /*0x4c9d0a*/
}
