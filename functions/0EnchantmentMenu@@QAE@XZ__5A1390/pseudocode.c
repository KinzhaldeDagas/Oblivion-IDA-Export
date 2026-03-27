EnchantmentMenu *__thiscall EnchantmentMenu::EnchantmentMenu(EnchantmentMenu *this)
{
  EnchantmentItem *v2; // eax
  EnchantmentItem *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // eax

  Menu::Menu((Menu *)this);
  *(_DWORD *)this = &EnchantmentMenu::`vftable';
  *((_DWORD *)this + 0xF) = 0;
  *((_DWORD *)this + 0x11) = 0;
  *((_DWORD *)this + 0x14) = 0;
  *((_DWORD *)this + 0x12) = 0;
  *((_DWORD *)this + 0x13) = 0;
  *((_DWORD *)this + 0x15) = 0;
  *((_DWORD *)this + 0x16) = 0;
  *((_DWORD *)this + 0x17) = 0;
  *((_DWORD *)this + 0x18) = 0;
  *((_DWORD *)this + 0x19) = 0;
  *((_DWORD *)this + 0x1A) = 0;
  *((_DWORD *)this + 0x1B) = 0;
  *((_DWORD *)this + 0x1C) = 0;
  *((_DWORD *)this + 0x1D) = 0;
  *((_DWORD *)this + 0x1E) = 0;
  *((_DWORD *)this + 0x1F) = 0;
  *((_DWORD *)this + 0x20) = 0;
  *((_DWORD *)this + 0x21) = 0;
  *((_DWORD *)this + 0xB) = 0;
  *((_DWORD *)this + 0xC) = 0;
  *((_DWORD *)this + 0xD) = 0;
  *((_BYTE *)this + 0x9C) = 1;
  *((_BYTE *)this + 0x9D) = 0;
  *((_DWORD *)this + 0x24) = 0;
  v2 = (EnchantmentItem *)FormHeapAlloc(0x44u);
  if ( v2 )
    v3 = EnchantmentItem::EnchantmentItem(v2);
  else
    v3 = 0;
  *((_DWORD *)this + 0xA) = v3;
  *((_DWORD *)this + 0x25) = 0;
  *((_DWORD *)this + 0x22) = 0;
  *((_DWORD *)this + 0x23) = 0;
  v4 = (_DWORD *)FormHeapAlloc(0x28u);
  if ( v4 )
    v5 = sub_57FE70(v4);
  else
    v5 = 0;
  *((_DWORD *)this + 0x26) = v5;
  *((_DWORD *)this + 0xE) = 0;
  return this;
}
