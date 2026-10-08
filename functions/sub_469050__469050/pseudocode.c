BOOL __thiscall sub_469050(_WORD *this)
{
  __int16 v1; // ax

  v1 = *(this + 2); /*0x469050*/
  return (v1 & 0x40) != 0 || (char)v1 < 0 || (v1 & 0x100) != 0; /*0x46906f*/
}
