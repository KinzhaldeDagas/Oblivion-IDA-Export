SigilStoneMenu *__thiscall SigilStoneMenu::SigilStoneMenu(SigilStoneMenu *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax

  Menu::Menu((Menu *)this);
  *(_DWORD *)this = &SigilStoneMenu::`vftable';
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
  *((_DWORD *)this + 0xB) = 0;
  *((_BYTE *)this + 0x78) = 1;
  *((_DWORD *)this + 0x1B) = 0;
  *((_DWORD *)this + 0xA) = 0;
  *((_DWORD *)this + 0x1C) = 0;
  *((_DWORD *)this + 0x19) = 0;
  *((_DWORD *)this + 0x1A) = 0;
  v2 = (_DWORD *)FormHeapAlloc(0x28u);
  if ( v2 )
    v3 = sub_57FE70(v2);
  else
    v3 = 0;
  *((_DWORD *)this + 0x1D) = v3;
  *((_DWORD *)this + 0x1F) = 0;
  return this;
}
