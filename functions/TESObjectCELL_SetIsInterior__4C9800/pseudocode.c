void __thiscall TESObjectCELL::SetIsInterior(TESObjectCELL *this, char a2)
{
  if ( a2 )
    this->members.flags0 |= kFlags0_Interior;
  else
    this->members.flags0 &= ~kFlags0_Interior;
}
