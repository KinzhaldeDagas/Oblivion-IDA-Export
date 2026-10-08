Menu *__thiscall sub_5DD960(Menu *this)
{
  Menu::Menu(this); /*0x5dd963*/
  *((_DWORD *)this + 0xB) = 0; /*0x5dd96a*/
  *((_DWORD *)this + 0xA) = 0; /*0x5dd96d*/
  *((_DWORD *)this + 0xD) = 0; /*0x5dd970*/
  *((_DWORD *)this + 0xE) = 0; /*0x5dd973*/
  *((_DWORD *)this + 0xF) = 0; /*0x5dd976*/
  *((_DWORD *)this + 0x10) = 0; /*0x5dd979*/
  *((_DWORD *)this + 0x11) = 0; /*0x5dd97c*/
  this->__vftable = (MenuVtbl *)&VideoDisplayMenu::`vftable'; /*0x5dd97f*/
  return this; /*0x5dd987*/
}
