LoadgameMenu *__thiscall LoadgameMenu::LoadgameMenu(LoadgameMenu *this)
{
  Menu::Menu((Menu *)this); /*0x5ae475*/
  *(_DWORD *)this = &LoadgameMenu::`vftable'; /*0x5ae47c*/
  *((_DWORD *)this + 0x17) = 0; /*0x5ae482*/
  *((_WORD *)this + 0x30) = 0; /*0x5ae485*/
  *((_WORD *)this + 0x31) = 0; /*0x5ae489*/
  *((float *)this + 0x14) = 0.0; /*0x5ae48f*/
  *((_DWORD *)this + 0xA) = 0; /*0x5ae492*/
  *((_DWORD *)this + 0xD) = 0; /*0x5ae495*/
  *((_DWORD *)this + 0xE) = 0; /*0x5ae498*/
  *((_DWORD *)this + 0xC) = 0; /*0x5ae49b*/
  *((_DWORD *)this + 0xB) = 0; /*0x5ae49e*/
  *((_DWORD *)this + 0x15) = 0; /*0x5ae4a1*/
  *((_DWORD *)this + 0x13) = 0; /*0x5ae4a4*/
  *((_DWORD *)this + 0x16) = 0; /*0x5ae4a7*/
  FormHeapFree(*((_DWORD *)this + 0x17)); /*0x5ae4ae*/
  *((_DWORD *)this + 0x17) = 0; /*0x5ae4b3*/
  *((_WORD *)this + 0x31) = 0; /*0x5ae4b6*/
  *((_WORD *)this + 0x30) = 0; /*0x5ae4ba*/
  *((_BYTE *)this + 0x64) = 0; /*0x5ae4c1*/
  return this; /*0x5ae4c6*/
}
