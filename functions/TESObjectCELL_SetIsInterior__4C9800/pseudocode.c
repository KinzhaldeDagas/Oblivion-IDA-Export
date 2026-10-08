void __thiscall TESObjectCELL::SetIsInterior(TESObjectCELL *this, char a2)
{
  if ( a2 ) /*0x4c9805*/
    this->members.flags0 |= kFlags0_Interior; /*0x4c9807*/
  else
    this->members.flags0 &= ~kFlags0_Interior; /*0x4c980e*/
}
