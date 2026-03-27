_BYTE *__thiscall sub_429A80(_BYTE *this, int a2)
{
  *(this + 4) = 0x31;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraLock::`vftable';
  *((_DWORD *)this + 3) = a2;
  return this;
}
