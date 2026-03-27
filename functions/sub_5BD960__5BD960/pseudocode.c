Menu *__thiscall sub_5BD960(Menu *this)
{
  Menu::Menu(this);
  *((_DWORD *)this + 0xA) = 0;
  *((_DWORD *)this + 0xB) = 0;
  *((_DWORD *)this + 0xC) = 0;
  *((_DWORD *)this + 0xD) = 0;
  *((_DWORD *)this + 0xE) = 0;
  this->__vftable = (MenuVtbl *)&PauseMenu::`vftable';
  return this;
}
