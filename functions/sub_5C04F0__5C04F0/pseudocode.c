Menu *__thiscall sub_5C04F0(Menu *this)
{
  Menu::Menu(this); /*0x5c04f3*/
  *((float *)this + 0x15) = 0.0; /*0x5c04fc*/
  *((_DWORD *)this + 0xB) = 0; /*0x5c04ff*/
  *((_DWORD *)this + 0xA) = 0; /*0x5c0502*/
  *((_DWORD *)this + 0xC) = 0; /*0x5c0505*/
  *((_DWORD *)this + 0xD) = 0; /*0x5c0508*/
  *((_DWORD *)this + 0xE) = 0; /*0x5c050b*/
  *((_DWORD *)this + 0xF) = 0; /*0x5c050e*/
  *((_DWORD *)this + 0x14) = 0; /*0x5c0511*/
  this->__vftable = (MenuVtbl *)&QuantityMenu::`vftable'; /*0x5c0514*/
  *((_DWORD *)this + 0x10) = 1; /*0x5c051a*/
  return this; /*0x5c0523*/
}
