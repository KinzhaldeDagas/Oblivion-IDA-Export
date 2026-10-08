Menu *__thiscall sub_5BD960(Menu *this)
{
  Menu::Menu(this); /*0x5bd963*/
  *((_DWORD *)this + 0xA) = 0; /*0x5bd96a*/
  *((_DWORD *)this + 0xB) = 0; /*0x5bd96d*/
  *((_DWORD *)this + 0xC) = 0; /*0x5bd970*/
  *((_DWORD *)this + 0xD) = 0; /*0x5bd973*/
  *((_DWORD *)this + 0xE) = 0; /*0x5bd976*/
  this->__vftable = (MenuVtbl *)&PauseMenu::`vftable'; /*0x5bd979*/
  return this; /*0x5bd981*/
}
