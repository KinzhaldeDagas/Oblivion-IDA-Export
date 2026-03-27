Menu *__thiscall sub_595BE0(Menu *this)
{
  Menu::Menu(this);
  *((_DWORD *)this + 0xA) = 0;
  *((_DWORD *)this + 0xB) = 0;
  this->__vftable = (MenuVtbl *)&BookMenu::`vftable';
  return this;
}
