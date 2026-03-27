SpellMakingMenu *__thiscall SpellMakingMenu::SpellMakingMenu(SpellMakingMenu *this)
{
  SpellItem *v2; // eax
  SpellItem *v3; // eax
  _DWORD *v4; // eax

  Menu::Menu((Menu *)this);
  *(_DWORD *)this = &SpellMakingMenu::`vftable';
  *((_DWORD *)this + 0xA) = 0;
  *((_DWORD *)this + 0xB) = 0;
  *((_DWORD *)this + 0xC) = 0;
  *((_DWORD *)this + 0xD) = 0;
  *((_DWORD *)this + 0xE) = 0;
  *((_DWORD *)this + 0xF) = 0;
  *((_DWORD *)this + 0x10) = 0;
  *((_DWORD *)this + 0x11) = 0;
  *((_DWORD *)this + 0x12) = 0;
  *((_DWORD *)this + 0x13) = 0;
  *((_BYTE *)this + 0x6C) = 0;
  v2 = (SpellItem *)FormHeapAlloc(0x44u);
  if ( v2 )
    v3 = SpellItem::SpellItem(v2);
  else
    v3 = 0;
  *((float *)this + 0x19) = 0.0;
  *((float *)this + 0x1A) = 0.0;
  *((_DWORD *)this + 0x1D) = v3;
  *((_DWORD *)this + 0x17) = 0;
  *((_BYTE *)this + 0x60) = 0xFF;
  *((_DWORD *)this + 0x16) = 0;
  v4 = (_DWORD *)FormHeapAlloc(0x28u);
  if ( v4 )
    *((_DWORD *)this + 0x1C) = sub_57FE70(v4);
  else
    *((_DWORD *)this + 0x1C) = 0;
  return this;
}
