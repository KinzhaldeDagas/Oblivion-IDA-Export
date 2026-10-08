void __thiscall TESContainer_SetLinkFlag(_BYTE *this, char a2)
{
  if ( a2 ) /*0x469505*/
    *(this + 4) |= 1u; /*0x469507*/
  else
    *(this + 4) &= ~1u; /*0x46950e*/
}
