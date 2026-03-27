_BYTE *__thiscall sub_42A700(_BYTE *this, int a2)
{
  *(this + 4) = 0x48;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraPoison::`vftable';
  *((_DWORD *)this + 3) = a2;
  return this;
}
