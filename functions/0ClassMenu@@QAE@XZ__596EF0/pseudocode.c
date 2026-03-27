ClassMenu *__thiscall ClassMenu::ClassMenu(ClassMenu *this)
{
  Menu::Menu((Menu *)this);
  *(_DWORD *)this = &ClassMenu::`vftable';
  *((_DWORD *)this + 0x21) = 0;
  *((_WORD *)this + 0x44) = 0;
  *((_WORD *)this + 0x45) = 0;
  *((_DWORD *)this + 0xA) = 0;
  *((_DWORD *)this + 0xB) = 0;
  *((_DWORD *)this + 0xC) = 0;
  *((_DWORD *)this + 0xD) = 0;
  *((_DWORD *)this + 0xE) = 0;
  *((_DWORD *)this + 0xF) = 0;
  *((_DWORD *)this + 0x10) = TESDataHandler_LookupTESClassByFormID((void *)iPlayerCustomClass);
  *((_DWORD *)this + 0x17) = 0xFFFFFFFF;
  *((_DWORD *)this + 0x19) = 0xFFFFFFFF;
  *((_DWORD *)this + 0x18) = 0xFFFFFFFF;
  *((_DWORD *)this + 0x11) = 0;
  *((_DWORD *)this + 0x16) = 0;
  *((_BYTE *)this + 0x54) = 0;
  *((_DWORD *)this + 0x1A) = 0xFFFFFFFF;
  *((_DWORD *)this + 0x1B) = 0xFFFFFFFF;
  *((_DWORD *)this + 0x1C) = 0xFFFFFFFF;
  *((_DWORD *)this + 0x1D) = 0xFFFFFFFF;
  *((_DWORD *)this + 0x1E) = 0xFFFFFFFF;
  *((_DWORD *)this + 0x1F) = 0xFFFFFFFF;
  *((_DWORD *)this + 0x20) = 0xFFFFFFFF;
  *((_DWORD *)this + 0x12) = 0xFFFFFFFF;
  *((_DWORD *)this + 0x13) = 0xFFFFFFFF;
  *((_DWORD *)this + 0x14) = 0xFFFFFFFF;
  return this;
}
