Menu *__thiscall sub_5D5610(Menu *this)
{
  Menu::Menu(this); /*0x5d5613*/
  *((_DWORD *)this + 0xA) = 0; /*0x5d561a*/
  *((_DWORD *)this + 0xB) = 0; /*0x5d561d*/
  *((_DWORD *)this + 0xC) = 0; /*0x5d5620*/
  *((_DWORD *)this + 0x12) = 0; /*0x5d5623*/
  *((_DWORD *)this + 0x13) = 0; /*0x5d5626*/
  *((_DWORD *)this + 0xF) = 0; /*0x5d5629*/
  *((_DWORD *)this + 0x10) = 0; /*0x5d562c*/
  *((_DWORD *)this + 0x11) = 1; /*0x5d5634*/
  byte_B1475B = 1; /*0x5d5637*/
  this->__vftable = (MenuVtbl *)&SkillsMenu::`vftable'; /*0x5d563c*/
  return this; /*0x5d5644*/
}
