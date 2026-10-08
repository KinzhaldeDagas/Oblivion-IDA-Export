Menu *__thiscall InventoryMenu_constr(Menu *this)
{
  Menu::Menu(this); /*0x5a9b03*/
  *((float *)this + 0x12) = 0.0; /*0x5a9b0c*/
  *((_DWORD *)this + 0xA) = 0; /*0x5a9b0f*/
  *((float *)this + 0x13) = 0.0; /*0x5a9b12*/
  *((_DWORD *)this + 0xB) = 0; /*0x5a9b15*/
  *((_DWORD *)this + 0xC) = 0; /*0x5a9b18*/
  *((_DWORD *)this + 0xD) = 0; /*0x5a9b1b*/
  *((_DWORD *)this + 0xF) = 0; /*0x5a9b1e*/
  *((_DWORD *)this + 0x14) = 0; /*0x5a9b21*/
  BYTE1(dword_B3B0B4[0xC9]) = 0; /*0x5a9b24*/
  this->__vftable = (MenuVtbl *)&InventoryMenu::`vftable'; /*0x5a9b29*/
  *((_DWORD *)this + 0x10) = 0x1F; /*0x5a9b2f*/
  *((_BYTE *)this + 0x44) = 0xFF; /*0x5a9b36*/
  return this; /*0x5a9b3c*/
}
