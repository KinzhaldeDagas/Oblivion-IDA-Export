Menu *__thiscall sub_5874A0(Menu *this)
{
  Menu::Menu(this);
  this->__vftable = (MenuVtbl *)&ControlsMenu::`vftable';
  _memset(this + 1, 0, 0x34);
  _memset((char *)this + 0x60, 0, 0x74);
  *((_DWORD *)this + 0x17) = 0xFF;
  *((_BYTE *)this + 0xD4) = 0;
  *((_DWORD *)this + 0x36) = 0;
  *((_BYTE *)this + 0xE4) = 0;
  return this;
}
