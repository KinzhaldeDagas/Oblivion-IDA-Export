SaveMenu *__thiscall SaveMenu::SaveMenu(SaveMenu *this)
{
  Menu::Menu((Menu *)this);
  *(_DWORD *)this = &SaveMenu::`vftable';
  *((_DWORD *)this + 0x14) = 0;
  *((_WORD *)this + 0x2A) = 0;
  *((_WORD *)this + 0x2B) = 0;
  *((_DWORD *)this + 0xA) = 0;
  *((_DWORD *)this + 0xD) = 0;
  *((_DWORD *)this + 0xE) = 0;
  *((_DWORD *)this + 0xC) = 0;
  *((_DWORD *)this + 0xB) = 0;
  *((_DWORD *)this + 0x13) = 0;
  *((_DWORD *)this + 0x16) = 0;
  FormHeapFree(*((_DWORD *)this + 0x14));
  *((_DWORD *)this + 0x14) = 0;
  *((_WORD *)this + 0x2B) = 0;
  *((_WORD *)this + 0x2A) = 0;
  *((_BYTE *)this + 0x5C) = 0;
  return this;
}
