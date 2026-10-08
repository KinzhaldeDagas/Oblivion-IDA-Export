Menu *__thiscall sub_595BE0(Menu *this)
{
  Menu::Menu(this); /*0x595be3*/
  *((_DWORD *)this + 0xA) = 0; /*0x595bea*/
  *((_DWORD *)this + 0xB) = 0; /*0x595bed*/
  this->__vftable = (MenuVtbl *)&BookMenu::`vftable'; /*0x595bf0*/
  return this; /*0x595bf8*/
}
