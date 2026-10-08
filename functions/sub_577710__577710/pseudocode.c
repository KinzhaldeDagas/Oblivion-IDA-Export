_DWORD *__thiscall sub_577710(_DWORD *this, int a2, int a3, int a4, int a5)
{
  *(this + 3) = 0; /*0x57773a*/
  *(this + 1) = 0; /*0x57773d*/
  *(this + 2) = 0; /*0x577740*/
  *this = &NiTList<FontManager::CharData *>::`vftable'; /*0x577743*/
  *(this + 4) = 0; /*0x57774d*/
  *(this + 9) = *(_DWORD *)(a3 + 0x18); /*0x577753*/
  *(this + 0xA) = a5; /*0x57775a*/
  *(this + 0xC) = a2; /*0x577762*/
  *(this + 5) = 0; /*0x577770*/
  *(this + 6) = 0; /*0x577773*/
  *(this + 7) = 0; /*0x577776*/
  *(this + 8) = a4; /*0x577779*/
  sub_5772A0(this, a3, 0); /*0x57777c*/
  return this; /*0x577783*/
}
