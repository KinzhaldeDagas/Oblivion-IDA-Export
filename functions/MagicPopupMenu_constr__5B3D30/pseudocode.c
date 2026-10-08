Menu *__thiscall MagicPopupMenu_constr(Menu *this)
{
  DWORD TickCount; // eax

  Menu::Menu(this); /*0x5b3d33*/
  this->__vftable = (MenuVtbl *)&MagicPopupMenu::`vftable'; /*0x5b3d3a*/
  *((_DWORD *)this + 0xA) = 0; /*0x5b3d40*/
  *((_DWORD *)this + 0xB) = 0; /*0x5b3d43*/
  *((_DWORD *)this + 0xC) = 0; /*0x5b3d46*/
  *((_DWORD *)this + 0xD) = 0; /*0x5b3d49*/
  *((_DWORD *)this + 0xE) = 0; /*0x5b3d4c*/
  *((_DWORD *)this + 0xF) = 0; /*0x5b3d4f*/
  *((_DWORD *)this + 0x10) = 0; /*0x5b3d52*/
  *((_DWORD *)this + 0x11) = 0; /*0x5b3d55*/
  *((_DWORD *)this + 0x12) = 0; /*0x5b3d58*/
  *((_DWORD *)this + 0x13) = 0; /*0x5b3d5b*/
  *((_DWORD *)this + 0x16) = 2; /*0x5b3d5e*/
  TickCount = GetTickCount(); /*0x5b3d65*/
  *((float *)this + 0x15) = 0.0; /*0x5b3d6d*/
  *((_DWORD *)this + 0x17) = TickCount; /*0x5b3d70*/
  *((float *)this + 0x14) = 0.0; /*0x5b3d73*/
  return this; /*0x5b3d78*/
}
