Menu *__thiscall sub_5BD580(Menu *this)
{
  Menu::Menu(this); /*0x5bd583*/
  *((_DWORD *)this + 0xF) = 0; /*0x5bd58a*/
  *((_DWORD *)this + 0xE) = 0; /*0x5bd58d*/
  *((_DWORD *)this + 0xD) = 0; /*0x5bd590*/
  *((_DWORD *)this + 0xC) = 0; /*0x5bd593*/
  *((_DWORD *)this + 0xB) = 0; /*0x5bd596*/
  *((_DWORD *)this + 0xA) = 0; /*0x5bd599*/
  this->__vftable = (MenuVtbl *)&OptionsMenu::`vftable'; /*0x5bd59c*/
  return this; /*0x5bd5a4*/
}
