// Oblivion ClassMenu constructor. Initializes custom-class selection state, including exactly seven staged major-skill AV slots and no minor-skill collection.
ClassMenu *__thiscall ClassMenu::ClassMenu(ClassMenu *this)
{
  Menu::Menu((Menu *)this); /*0x596f19*/
  *(_DWORD *)this = &ClassMenu::`vftable'; /*0x596f20*/
  *((_DWORD *)this + 0x21) = 0; /*0x596f2a*/
  *((_WORD *)this + 0x44) = 0; /*0x596f30*/
  *((_WORD *)this + 0x45) = 0; /*0x596f37*/
  *((_DWORD *)this + 0xA) = 0; /*0x596f3e*/
  *((_DWORD *)this + 0xB) = 0; /*0x596f41*/
  *((_DWORD *)this + 0xC) = 0; /*0x596f44*/
  *((_DWORD *)this + 0xD) = 0; /*0x596f47*/
  *((_DWORD *)this + 0xE) = 0; /*0x596f4a*/
  *((_DWORD *)this + 0xF) = 0; /*0x596f4d*/
  *((_DWORD *)this + 0x10) = TESDataHandler_LookupTESClassByFormID((void *)MEMORY[0xB37C88]); /*0x596f66*/
  *((_DWORD *)this + 0x17) = 0xFFFFFFFF; /*0x596f6c*/
  *((_DWORD *)this + 0x19) = 0xFFFFFFFF; /*0x596f6f*/
  *((_DWORD *)this + 0x18) = 0xFFFFFFFF; /*0x596f72*/
  *((_DWORD *)this + 0x11) = 0; /*0x596f75*/
  *((_DWORD *)this + 0x16) = 0; /*0x596f78*/
  *((_BYTE *)this + 0x54) = 0; /*0x596f7b*/
  *((_DWORD *)this + 0x1A) = 0xFFFFFFFF; /*0x596f7e*/
  *((_DWORD *)this + 0x1B) = 0xFFFFFFFF; /*0x596f81*/
  *((_DWORD *)this + 0x1C) = 0xFFFFFFFF; /*0x596f84*/
  *((_DWORD *)this + 0x1D) = 0xFFFFFFFF; /*0x596f87*/
  *((_DWORD *)this + 0x1E) = 0xFFFFFFFF; /*0x596f8a*/
  *((_DWORD *)this + 0x1F) = 0xFFFFFFFF; /*0x596f8d*/
  *((_DWORD *)this + 0x20) = 0xFFFFFFFF; /*0x596f90*/
  *((_DWORD *)this + 0x12) = 0xFFFFFFFF; /*0x596f96*/
  *((_DWORD *)this + 0x13) = 0xFFFFFFFF; /*0x596f99*/
  *((_DWORD *)this + 0x14) = 0xFFFFFFFF; /*0x596f9c*/
  return this; /*0x596fa1*/
}
