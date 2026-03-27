Menu *__thiscall InventoryMenu_constr(Menu *this)
{
  Menu::Menu(this);
  *((float *)this + 0x12) = 0.0;
  *((_DWORD *)this + 0xA) = 0;
  *((float *)this + 0x13) = 0.0;
  *((_DWORD *)this + 0xB) = 0;
  *((_DWORD *)this + 0xC) = 0;
  *((_DWORD *)this + 0xD) = 0;
  *((_DWORD *)this + 0xF) = 0;
  *((_DWORD *)this + 0x14) = 0;
  byte_B3B3D9 = 0;
  this->__vftable = (MenuVtbl *)&InventoryMenu::`vftable';
  *((_DWORD *)this + 0x10) = 0x1F;
  *((_BYTE *)this + 0x44) = 0xFF;
  return this;
}
