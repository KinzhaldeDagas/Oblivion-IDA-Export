_BYTE *__thiscall sub_429E40(_BYTE *this, int a2)
{
  *(this + 4) = 0x29;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraRank::`vftable';
  *((_DWORD *)this + 3) = a2;
  return this;
}
