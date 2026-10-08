RechargeMenu *__thiscall RechargeMenu::RechargeMenu(RechargeMenu *this)
{
  Menu::Menu((Menu *)this); /*0x5ce683*/
  *((_DWORD *)this + 0xF) = 0; /*0x5ce68a*/
  *((_DWORD *)this + 0xE) = 0; /*0x5ce68d*/
  *((_DWORD *)this + 0xD) = 0; /*0x5ce690*/
  *((_DWORD *)this + 0xC) = 0; /*0x5ce693*/
  *((_DWORD *)this + 0xB) = 0; /*0x5ce696*/
  *((_DWORD *)this + 0xA) = 0; /*0x5ce699*/
  *((_DWORD *)this + 0x12) = 0; /*0x5ce69c*/
  *((_DWORD *)this + 0x11) = 0; /*0x5ce69f*/
  *((_DWORD *)this + 0x13) = 0; /*0x5ce6a2*/
  *(_DWORD *)this = &RechargeMenu::`vftable'; /*0x5ce6a5*/
  *((_BYTE *)this + 0x50) = 0xFF; /*0x5ce6ab*/
  return this; /*0x5ce6b1*/
}
