HUDSubtitleMenu *__thiscall HUDSubtitleMenu::HUDSubtitleMenu(HUDSubtitleMenu *this)
{
  Menu::Menu((Menu *)this);
  *(_DWORD *)this = &HUDSubtitleMenu::`vftable';
  *((_DWORD *)this + 0xB) = 0;
  *((_DWORD *)this + 0xC) = 0;
  *((float *)this + 0xF) = 0.0;
  *((_DWORD *)this + 0xA) = 0;
  *((_DWORD *)this + 0xD) = 0;
  *((_DWORD *)this + 0x10) = 0;
  *((_BYTE *)this + 0x38) = 1;
  return this;
}
