_WORD *__thiscall sub_704100(_WORD *this)
{
  *(this + 2) = 0;
  *(_DWORD *)this = &NiTexturingProperty::Map::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *(this + 2) = *(this + 2) & 0xC000 | 0x3100;
  return this;
}
