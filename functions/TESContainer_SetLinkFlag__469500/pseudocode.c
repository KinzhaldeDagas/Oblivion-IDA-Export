void __thiscall TESContainer_SetLinkFlag(_BYTE *this, char a2)
{
  if ( a2 )
    *(this + 4) |= 1u;
  else
    *(this + 4) &= ~1u;
}
