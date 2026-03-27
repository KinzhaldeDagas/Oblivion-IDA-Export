MapMenu *__thiscall MapMenu::MapMenu(MapMenu *this)
{
  _DWORD *v2; // eax

  Menu::Menu((Menu *)this);
  *(_DWORD *)this = &MapMenu::`vftable';
  *((_DWORD *)this + 0x2C) = 0;
  *((_WORD *)this + 0x5A) = 0;
  *((_WORD *)this + 0x5B) = 0;
  *((float *)this + 0x22) = 0.0;
  *((float *)this + 0x23) = 0.0;
  *((_DWORD *)this + 0xA) = 0;
  *((_DWORD *)this + 0xB) = 0;
  *((_DWORD *)this + 0xC) = 0;
  *((_DWORD *)this + 0xD) = 0;
  *((_DWORD *)this + 0xE) = 0;
  *((_DWORD *)this + 0xF) = 0;
  *((_DWORD *)this + 0x10) = 0;
  *((_DWORD *)this + 0x11) = 0;
  *((_DWORD *)this + 0x12) = 0;
  *((_DWORD *)this + 0x13) = 0;
  *((_DWORD *)this + 0x14) = 0;
  *((_DWORD *)this + 0x15) = 0;
  *((_DWORD *)this + 0x16) = 0;
  *((_DWORD *)this + 0x17) = 0;
  *((_DWORD *)this + 0x18) = 0;
  *((_DWORD *)this + 0x19) = 0;
  *((_DWORD *)this + 0x1A) = 0;
  *((_DWORD *)this + 0x1B) = 0;
  *((_DWORD *)this + 0x1C) = 0;
  *((_DWORD *)this + 0x1D) = 0;
  *((_DWORD *)this + 0x1E) = 0;
  *((_BYTE *)this + 0xDC) = 0;
  *((_BYTE *)this + 0x84) = 0xFF;
  *((_DWORD *)this + 0x31) = 0;
  *((_DWORD *)this + 0x34) = 0;
  *((_DWORD *)this + 0x38) = 0;
  *((_DWORD *)this + 0x3D) = 0;
  *((_DWORD *)this + 0x3E) = 0;
  *((_DWORD *)this + 0x3F) = 0;
  v2 = (_DWORD *)FormHeapAlloc(8u);
  if ( v2 )
  {
    *v2 = 0;
    v2[1] = 0;
    *((_DWORD *)this + 0x32) = v2;
  }
  else
  {
    *((_DWORD *)this + 0x32) = 0;
  }
  return this;
}
