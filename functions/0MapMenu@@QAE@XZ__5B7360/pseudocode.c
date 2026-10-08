MapMenu *__thiscall MapMenu::MapMenu(MapMenu *this)
{
  _DWORD *v2; // eax

  Menu::Menu((Menu *)this); /*0x5b7389*/
  *(_DWORD *)this = &MapMenu::`vftable'; /*0x5b7390*/
  *((_DWORD *)this + 0x2C) = 0; /*0x5b739a*/
  *((_WORD *)this + 0x5A) = 0; /*0x5b73a0*/
  *((_WORD *)this + 0x5B) = 0; /*0x5b73a7*/
  *((float *)this + 0x22) = 0.0; /*0x5b73b0*/
  *((float *)this + 0x23) = 0.0; /*0x5b73b8*/
  *((_DWORD *)this + 0xA) = 0; /*0x5b73c3*/
  *((_DWORD *)this + 0xB) = 0; /*0x5b73c6*/
  *((_DWORD *)this + 0xC) = 0; /*0x5b73c9*/
  *((_DWORD *)this + 0xD) = 0; /*0x5b73cc*/
  *((_DWORD *)this + 0xE) = 0; /*0x5b73cf*/
  *((_DWORD *)this + 0xF) = 0; /*0x5b73d2*/
  *((_DWORD *)this + 0x10) = 0; /*0x5b73d5*/
  *((_DWORD *)this + 0x11) = 0; /*0x5b73d8*/
  *((_DWORD *)this + 0x12) = 0; /*0x5b73db*/
  *((_DWORD *)this + 0x13) = 0; /*0x5b73de*/
  *((_DWORD *)this + 0x14) = 0; /*0x5b73e1*/
  *((_DWORD *)this + 0x15) = 0; /*0x5b73e4*/
  *((_DWORD *)this + 0x16) = 0; /*0x5b73e7*/
  *((_DWORD *)this + 0x17) = 0; /*0x5b73ea*/
  *((_DWORD *)this + 0x18) = 0; /*0x5b73ed*/
  *((_DWORD *)this + 0x19) = 0; /*0x5b73f0*/
  *((_DWORD *)this + 0x1A) = 0; /*0x5b73f3*/
  *((_DWORD *)this + 0x1B) = 0; /*0x5b73f6*/
  *((_DWORD *)this + 0x1C) = 0; /*0x5b73f9*/
  *((_DWORD *)this + 0x1D) = 0; /*0x5b73fc*/
  *((_DWORD *)this + 0x1E) = 0; /*0x5b73ff*/
  *((_BYTE *)this + 0xDC) = 0; /*0x5b7402*/
  *((_BYTE *)this + 0x84) = 0xFF; /*0x5b7408*/
  *((_DWORD *)this + 0x31) = 0; /*0x5b740f*/
  *((_DWORD *)this + 0x34) = 0; /*0x5b7415*/
  *((_DWORD *)this + 0x38) = 0; /*0x5b741b*/
  *((_DWORD *)this + 0x3D) = 0; /*0x5b7421*/
  *((_DWORD *)this + 0x3E) = 0; /*0x5b7427*/
  *((_DWORD *)this + 0x3F) = 0; /*0x5b742d*/
  v2 = (_DWORD *)FormHeapAlloc(8u); /*0x5b7433*/
  if ( v2 ) /*0x5b743d*/
  {
    *v2 = 0; /*0x5b743f*/
    v2[1] = 0; /*0x5b7441*/
    *((_DWORD *)this + 0x32) = v2; /*0x5b7444*/
  }
  else
  {
    *((_DWORD *)this + 0x32) = 0; /*0x5b745e*/
  }
  return this; /*0x5b744c*/
}
