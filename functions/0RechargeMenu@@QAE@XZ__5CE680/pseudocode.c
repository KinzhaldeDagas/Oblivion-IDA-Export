RechargeMenu *__thiscall RechargeMenu::RechargeMenu(RechargeMenu *this)
{
  Menu::Menu((Menu *)this);
  *((_DWORD *)this + 0xF) = 0;
  *((_DWORD *)this + 0xE) = 0;
  *((_DWORD *)this + 0xD) = 0;
  *((_DWORD *)this + 0xC) = 0;
  *((_DWORD *)this + 0xB) = 0;
  *((_DWORD *)this + 0xA) = 0;
  *((_DWORD *)this + 0x12) = 0;
  *((_DWORD *)this + 0x11) = 0;
  *((_DWORD *)this + 0x13) = 0;
  *(_DWORD *)this = &RechargeMenu::`vftable';
  *((_BYTE *)this + 0x50) = 0xFF;
  return this;
}
