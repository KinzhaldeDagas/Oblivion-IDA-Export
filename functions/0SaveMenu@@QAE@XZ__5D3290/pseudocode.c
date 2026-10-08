SaveMenu *__thiscall SaveMenu::SaveMenu(SaveMenu *this)
{
  Menu::Menu((Menu *)this); /*0x5d32b5*/
  *(_DWORD *)this = &SaveMenu::`vftable'; /*0x5d32bc*/
  *((_DWORD *)this + 0x14) = 0; /*0x5d32c2*/
  *((_WORD *)this + 0x2A) = 0; /*0x5d32c5*/
  *((_WORD *)this + 0x2B) = 0; /*0x5d32c9*/
  *((_DWORD *)this + 0xA) = 0; /*0x5d32cd*/
  *((_DWORD *)this + 0xD) = 0; /*0x5d32d0*/
  *((_DWORD *)this + 0xE) = 0; /*0x5d32d3*/
  *((_DWORD *)this + 0xC) = 0; /*0x5d32d6*/
  *((_DWORD *)this + 0xB) = 0; /*0x5d32d9*/
  *((_DWORD *)this + 0x13) = 0; /*0x5d32dc*/
  *((_DWORD *)this + 0x16) = 0; /*0x5d32df*/
  FormHeapFree(*((_DWORD *)this + 0x14)); /*0x5d32e6*/
  *((_DWORD *)this + 0x14) = 0; /*0x5d32eb*/
  *((_WORD *)this + 0x2B) = 0; /*0x5d32ee*/
  *((_WORD *)this + 0x2A) = 0; /*0x5d32f2*/
  *((_BYTE *)this + 0x5C) = 0; /*0x5d32f9*/
  return this; /*0x5d32fe*/
}
