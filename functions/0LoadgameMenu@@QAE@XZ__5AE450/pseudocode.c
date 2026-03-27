LoadgameMenu *__thiscall LoadgameMenu::LoadgameMenu(LoadgameMenu *this)
{
  Menu::Menu((Menu *)this);
  *(_DWORD *)this = &LoadgameMenu::`vftable';
  *((_DWORD *)this + 0x17) = 0;
  *((_WORD *)this + 0x30) = 0;
  *((_WORD *)this + 0x31) = 0;
  *((float *)this + 0x14) = 0.0;
  *((_DWORD *)this + 0xA) = 0;
  *((_DWORD *)this + 0xD) = 0;
  *((_DWORD *)this + 0xE) = 0;
  *((_DWORD *)this + 0xC) = 0;
  *((_DWORD *)this + 0xB) = 0;
  *((_DWORD *)this + 0x15) = 0;
  *((_DWORD *)this + 0x13) = 0;
  *((_DWORD *)this + 0x16) = 0;
  FormHeapFree(*((_DWORD *)this + 0x17));
  *((_DWORD *)this + 0x17) = 0;
  *((_WORD *)this + 0x31) = 0;
  *((_WORD *)this + 0x30) = 0;
  *((_BYTE *)this + 0x64) = 0;
  return this;
}
