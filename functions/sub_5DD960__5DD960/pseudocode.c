Menu *__thiscall sub_5DD960(Menu *this)
{
  Menu::Menu(this);
  *((_DWORD *)this + 0xB) = 0;
  *((_DWORD *)this + 0xA) = 0;
  *((_DWORD *)this + 0xD) = 0;
  *((_DWORD *)this + 0xE) = 0;
  *((_DWORD *)this + 0xF) = 0;
  *((_DWORD *)this + 0x10) = 0;
  *((_DWORD *)this + 0x11) = 0;
  this->__vftable = (MenuVtbl *)&VideoDisplayMenu::`vftable';
  return this;
}
