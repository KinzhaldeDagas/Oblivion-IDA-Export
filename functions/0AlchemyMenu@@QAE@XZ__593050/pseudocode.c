AlchemyMenu *__thiscall AlchemyMenu::AlchemyMenu(AlchemyMenu *this)
{
  AlchemyItem *v2; // eax
  AlchemyItem *v3; // eax
  _DWORD *v4; // eax

  Menu::Menu((Menu *)this);
  *(_DWORD *)this = &AlchemyMenu::`vftable';
  *((_DWORD *)this + 0x2A) = 0;
  *((_DWORD *)this + 0x2B) = 0;
  *((_DWORD *)this + 0xA) = 0;
  *((_DWORD *)this + 0xB) = 0;
  *((_DWORD *)this + 0xC) = 0;
  *((_DWORD *)this + 0xD) = 0;
  *((_DWORD *)this + 0xE) = 0;
  *((_DWORD *)this + 0xF) = 0;
  *((_DWORD *)this + 0x10) = 0;
  *((_DWORD *)this + 0x2C) = 0;
  *((_DWORD *)this + 0x1A) = 0;
  *((_DWORD *)this + 0x11) = 0;
  *((_DWORD *)this + 0x2D) = 0;
  *((_DWORD *)this + 0x1B) = 0;
  *((_DWORD *)this + 0x12) = 0;
  *((_DWORD *)this + 0x2E) = 0;
  *((_DWORD *)this + 0x1C) = 0;
  *((_DWORD *)this + 0x13) = 0;
  *((_DWORD *)this + 0x2F) = 0;
  *((_DWORD *)this + 0x1D) = 0;
  *((float *)this + 0x23) = 0.0;
  *((_DWORD *)this + 0x14) = 0;
  *((_DWORD *)this + 0x15) = 0;
  *((_DWORD *)this + 0x16) = 0;
  *((_DWORD *)this + 0x17) = 0;
  *((_DWORD *)this + 0x18) = 0;
  *((_DWORD *)this + 0x19) = 0;
  *((_DWORD *)this + 0x1E) = 0;
  *((_DWORD *)this + 0x1F) = 0;
  *((_DWORD *)this + 0x20) = 0;
  *((_DWORD *)this + 0x21) = 0;
  *((_DWORD *)this + 0x24) = 0;
  *((_BYTE *)this + 0xA6) = 0xFF;
  v2 = (AlchemyItem *)FormHeapAlloc(0x80u);
  if ( v2 )
    v3 = AlchemyItem::AlchemyItem(v2);
  else
    v3 = 0;
  *((float *)this + 0x22) = 0.0;
  *((float *)this + 0x26) = 0.0;
  *((_DWORD *)this + 0x25) = v3;
  *((_DWORD *)this + 0x27) = 0;
  *((_BYTE *)this + 0xA4) = 0;
  v4 = (_DWORD *)FormHeapAlloc(0x28u);
  if ( v4 )
    *((_DWORD *)this + 0x28) = sub_57FE70(v4);
  else
    *((_DWORD *)this + 0x28) = 0;
  return this;
}
