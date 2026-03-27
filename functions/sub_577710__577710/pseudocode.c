_DWORD *__thiscall sub_577710(_DWORD *this, int a2, int a3, int a4, int a5)
{
  *(this + 3) = 0;
  *(this + 1) = 0;
  *(this + 2) = 0;
  *this = &NiTList<FontManager::CharData *>::`vftable';
  *(this + 4) = 0;
  *(this + 9) = *(_DWORD *)(a3 + 0x18);
  *(this + 0xA) = a5;
  *(this + 0xC) = a2;
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = a4;
  sub_5772A0(this, a3, 0);
  return this;
}
