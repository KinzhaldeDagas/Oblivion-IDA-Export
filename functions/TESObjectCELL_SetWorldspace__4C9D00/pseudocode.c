void __thiscall TESObjectCELL::SetWorldspace(TESObjectCELL *this, TESWorldSpace *a2)
{
  if ( (this->members.flags0 & 1) == 0 )
    this->members.worldSpace = a2;
}
