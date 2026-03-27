_BYTE *__thiscall sub_42A820(_BYTE *this)
{
  *(this + 4) = 0x4D;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraXTarget::`vftable';
  *((_DWORD *)this + 3) = 0;
  return this;
}
