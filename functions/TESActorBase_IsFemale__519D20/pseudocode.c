int __thiscall TESActorBase_IsFemale(_BYTE *this)
{
  if ( *(this + 4) == 0x23 )
    return *(this + 0x28) & 1;
  else
    return 0xFFFFFFFF;
}
