_DWORD *__thiscall sub_5765B0(_DWORD *this, int a2, _DWORD *a3, int a4, int a5)
{
  _DWORD *v6; // eax
  _DWORD *v7; // ecx

  *(this + 3) = 0;
  *(this + 1) = 0;
  *(this + 2) = 0;
  *this = &NiTList<FontManager::TextLine *>::`vftable';
  *(this + 5) = a3[6] + a3[7];
  *(this + 6) = a4;
  *(this + 7) = a5;
  *(this + 0xE) = a2;
  v6 = (_DWORD *)off_A68A64();
  v6[2] = a3;
  *v6 = 0;
  v6[1] = *(this + 2);
  v7 = (_DWORD *)*(this + 2);
  if ( v7 )
    *v7 = v6;
  else
    *(this + 1) = v6;
  ++*(this + 3);
  *(this + 2) = v6;
  *(this + 8) = 0x23;
  a3[0xC] = this;
  *(this + 9) = 0;
  *(this + 0xA) = 0;
  *(this + 0xB) = 0;
  *(this + 0xC) = 0;
  *(this + 0xD) = 0;
  return this;
}
