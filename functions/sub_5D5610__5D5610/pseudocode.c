Menu *__thiscall sub_5D5610(Menu *this)
{
  Menu::Menu(this);
  *((_DWORD *)this + 0xA) = 0;
  *((_DWORD *)this + 0xB) = 0;
  *((_DWORD *)this + 0xC) = 0;
  *((_DWORD *)this + 0x12) = 0;
  *((_DWORD *)this + 0x13) = 0;
  *((_DWORD *)this + 0xF) = 0;
  *((_DWORD *)this + 0x10) = 0;
  *((_DWORD *)this + 0x11) = 1;
  byte_B1475B = 1;
  this->__vftable = (MenuVtbl *)&SkillsMenu::`vftable';
  return this;
}
