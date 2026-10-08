// Sets or clears the TESClass playable flag; ClassMenu custom-class commit forces the chosen custom class playable.
void __thiscall TESClass_SetPlayable(TESClass *this, bool playable)
{
  if ( playable ) /*0x51bed5*/
    LOBYTE(this->members.classFlags) |= 1u; /*0x51bed7*/
  else
    LOBYTE(this->members.classFlags) &= ~1u; /*0x51bede*/
}
