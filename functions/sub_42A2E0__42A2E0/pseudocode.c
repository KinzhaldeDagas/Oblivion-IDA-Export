_BYTE *__thiscall sub_42A2E0(_BYTE *this, int a2)
{
  *(this + 4) = 0x11;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraPersistentCell::`vftable';
  *((_DWORD *)this + 3) = a2;
  return this;
}
