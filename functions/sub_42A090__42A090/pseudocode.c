_BYTE *__thiscall sub_42A090(_BYTE *this, char a2)
{
  *(this + 4) = 0x55;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraQuickKey::`vftable';
  *(this + 0xC) = a2;
  return this;
}
