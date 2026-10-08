int __thiscall TESActorBase_IsFemale(_BYTE *this)
{
  if ( *(this + 4) == 0x23 ) /*0x519d24*/
    return *(this + 0x28) & 1; /*0x519d2a*/
  else
    return 0xFFFFFFFF; /*0x519d2e*/
}
