_BYTE *__thiscall sub_42A5E0(_BYTE *this)
{
  *(this + 4) = 0x3F;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraEnableStateParent::`vftable';
  *((_DWORD *)this + 3) = 0;
  *(this + 0x10) = 0;
  return this;
}
