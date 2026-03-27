Menu *__thiscall MagicPopupMenu_constr(Menu *this)
{
  DWORD TickCount; // eax

  Menu::Menu(this);
  this->__vftable = (MenuVtbl *)&MagicPopupMenu::`vftable';
  *((_DWORD *)this + 0xA) = 0;
  *((_DWORD *)this + 0xB) = 0;
  *((_DWORD *)this + 0xC) = 0;
  *((_DWORD *)this + 0xD) = 0;
  *((_DWORD *)this + 0xE) = 0;
  *((_DWORD *)this + 0xF) = 0;
  *((_DWORD *)this + 0x10) = 0;
  *((_DWORD *)this + 0x11) = 0;
  *((_DWORD *)this + 0x12) = 0;
  *((_DWORD *)this + 0x13) = 0;
  *((_DWORD *)this + 0x16) = 2;
  TickCount = GetTickCount();
  *((float *)this + 0x15) = 0.0;
  *((_DWORD *)this + 0x17) = TickCount;
  *((float *)this + 0x14) = 0.0;
  return this;
}
