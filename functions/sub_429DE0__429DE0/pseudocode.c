_BYTE *__thiscall sub_429DE0(_BYTE *this, int a2)
{
  *(this + 4) = 0x26;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraOriginalReference::`vftable';
  *((_DWORD *)this + 3) = a2;
  return this;
}
