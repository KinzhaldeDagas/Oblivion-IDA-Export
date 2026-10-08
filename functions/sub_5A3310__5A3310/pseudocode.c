Menu *__thiscall sub_5A3310(Menu *this)
{
  Menu::Menu(this); /*0x5a3313*/
  *((_DWORD *)this + 0x12) = 0; /*0x5a331a*/
  *((_DWORD *)this + 0x11) = 0; /*0x5a331d*/
  *((_DWORD *)this + 0x10) = 0; /*0x5a3320*/
  *((_DWORD *)this + 0xF) = 0; /*0x5a3323*/
  *((_DWORD *)this + 0xE) = 0; /*0x5a3326*/
  *((_DWORD *)this + 0xD) = 0; /*0x5a3329*/
  *((_DWORD *)this + 0xC) = 0; /*0x5a332c*/
  *((_DWORD *)this + 0xB) = 0; /*0x5a332f*/
  *((_DWORD *)this + 0xA) = 0; /*0x5a3332*/
  this->__vftable = (MenuVtbl *)&GameplayMenu::`vftable'; /*0x5a3335*/
  return this; /*0x5a333d*/
}
