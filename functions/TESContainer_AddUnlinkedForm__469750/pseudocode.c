int __thiscall TESContainer_AddUnlinkedForm(_BYTE *this, int a2)
{
  if ( !a2 || (*(this + 4) & 1) != 0 )
    JUMPOUT(0x4697C0);
  if ( this == (_BYTE *)0xFFFFFFF8 )
    JUMPOUT(0x469784);
  return TESContainer_AddUnlinkedForm_::ContentLoop(a2);
}
