SpellMakingMenu *__thiscall SpellMakingMenu::SpellMakingMenu(SpellMakingMenu *this)
{
  SpellItem *v2; // eax
  SpellItem *v3; // eax
  _DWORD *v4; // eax

  Menu::Menu((Menu *)this); /*0x5d73eb*/
  *(_DWORD *)this = &SpellMakingMenu::`vftable'; /*0x5d73f8*/
  *((_DWORD *)this + 0xA) = 0; /*0x5d73fe*/
  *((_DWORD *)this + 0xB) = 0; /*0x5d7401*/
  *((_DWORD *)this + 0xC) = 0; /*0x5d7404*/
  *((_DWORD *)this + 0xD) = 0; /*0x5d7407*/
  *((_DWORD *)this + 0xE) = 0; /*0x5d740a*/
  *((_DWORD *)this + 0xF) = 0; /*0x5d740d*/
  *((_DWORD *)this + 0x10) = 0; /*0x5d7410*/
  *((_DWORD *)this + 0x11) = 0; /*0x5d7413*/
  *((_DWORD *)this + 0x12) = 0; /*0x5d7416*/
  *((_DWORD *)this + 0x13) = 0; /*0x5d7419*/
  *((_BYTE *)this + 0x6C) = 0; /*0x5d741c*/
  v2 = (SpellItem *)FormHeapAlloc(0x44u); /*0x5d741f*/
  if ( v2 ) /*0x5d7432*/
    v3 = SpellItem::SpellItem(v2); /*0x5d7436*/
  else
    v3 = 0; /*0x5d743d*/
  *((float *)this + 0x19) = 0.0; /*0x5d7443*/
  *((float *)this + 0x1A) = 0.0; /*0x5d744a*/
  *((_DWORD *)this + 0x1D) = v3; /*0x5d744d*/
  *((_DWORD *)this + 0x17) = 0; /*0x5d7450*/
  *((_BYTE *)this + 0x60) = 0xFF; /*0x5d7453*/
  *((_DWORD *)this + 0x16) = 0; /*0x5d7457*/
  v4 = (_DWORD *)FormHeapAlloc(0x28u); /*0x5d745a*/
  if ( v4 ) /*0x5d746d*/
    *((_DWORD *)this + 0x1C) = sub_57FE70(v4); /*0x5d7476*/
  else
    *((_DWORD *)this + 0x1C) = 0; /*0x5d748d*/
  return this; /*0x5d747b*/
}
