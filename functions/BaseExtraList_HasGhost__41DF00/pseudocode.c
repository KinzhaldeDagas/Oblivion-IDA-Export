bool __thiscall BaseExtraList_HasGhost(_BYTE *this)
{
  return (*(this + 0xC) & 0x20) != 0;
}
