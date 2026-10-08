_DWORD *__thiscall sub_5765B0(_DWORD *this, int a2, _DWORD *a3, int a4, int a5)
{
  _DWORD *v6; // eax
  _DWORD *v7; // ecx

  *(this + 3) = 0; /*0x5765dc*/
  *(this + 1) = 0; /*0x5765df*/
  *(this + 2) = 0; /*0x5765e2*/
  *this = &NiTList<FontManager::TextLine *>::`vftable'; /*0x5765e5*/
  *(this + 5) = a3[6] + a3[7]; /*0x5765fd*/
  *(this + 6) = a4; /*0x576604*/
  *(this + 7) = a5; /*0x57660d*/
  *(this + 0xE) = a2; /*0x576610*/
  v6 = (_DWORD *)off_A68A64(); /*0x576613*/
  v6[2] = a3; /*0x576619*/
  *v6 = 0; /*0x57661c*/
  v6[1] = *(this + 2); /*0x576621*/
  v7 = (_DWORD *)*(this + 2); /*0x576624*/
  if ( v7 ) /*0x576629*/
    *v7 = v6; /*0x57662b*/
  else
    *(this + 1) = v6; /*0x57662f*/
  ++*(this + 3); /*0x576632*/
  *(this + 2) = v6; /*0x576636*/
  *(this + 8) = 0x23; /*0x576639*/
  a3[0xC] = this; /*0x576640*/
  *(this + 9) = 0; /*0x576643*/
  *(this + 0xA) = 0; /*0x576646*/
  *(this + 0xB) = 0; /*0x576649*/
  *(this + 0xC) = 0; /*0x57664c*/
  *(this + 0xD) = 0; /*0x57664f*/
  return this; /*0x576654*/
}
