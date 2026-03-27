Menu *__thiscall sub_5C04F0(Menu *this)
{
  Menu::Menu(this);
  *((float *)this + 0x15) = 0.0;
  *((_DWORD *)this + 0xB) = 0;
  *((_DWORD *)this + 0xA) = 0;
  *((_DWORD *)this + 0xC) = 0;
  *((_DWORD *)this + 0xD) = 0;
  *((_DWORD *)this + 0xE) = 0;
  *((_DWORD *)this + 0xF) = 0;
  *((_DWORD *)this + 0x14) = 0;
  this->__vftable = (MenuVtbl *)&QuantityMenu::`vftable';
  *((_DWORD *)this + 0x10) = 1;
  return this;
}
