BOOL __thiscall sub_89E910(_WORD *this)
{
  __int16 v1; // ax

  v1 = *(this + 6);
  return (v1 & 0x20) != 0 && (v1 & 0x40) == 0;
}
