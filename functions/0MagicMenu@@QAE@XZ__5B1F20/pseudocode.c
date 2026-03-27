MagicMenu *__thiscall MagicMenu::MagicMenu(MagicMenu *this)
{
  Menu::Menu((Menu *)this);
  *(_DWORD *)this = &MagicMenu::`vftable';
  *((_DWORD *)this + 0xE) = 0;
  *((_DWORD *)this + 0xF) = 0;
  *((_DWORD *)this + 0x10) = 0;
  *((_DWORD *)this + 0x11) = 0;
  *((float *)this + 0x16) = 0.0;
  *((_DWORD *)this + 0xA) = 0;
  *((_DWORD *)this + 0xB) = 0;
  *((_DWORD *)this + 0xC) = 0;
  *((_DWORD *)this + 0xD) = 0;
  *((_DWORD *)this + 0x12) = 0;
  *((_DWORD *)this + 0x15) = 0;
  *((_DWORD *)this + 0x14) = 7;
  return this;
}
