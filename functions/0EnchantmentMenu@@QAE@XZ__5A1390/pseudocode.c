EnchantmentMenu *__thiscall EnchantmentMenu::EnchantmentMenu(EnchantmentMenu *this)
{
  EnchantmentItem *v2; // eax
  EnchantmentItem *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // eax

  Menu::Menu((Menu *)this); /*0x5a13bb*/
  *(_DWORD *)this = &EnchantmentMenu::`vftable'; /*0x5a13c8*/
  *((_DWORD *)this + 0xF) = 0; /*0x5a13ce*/
  *((_DWORD *)this + 0x11) = 0; /*0x5a13d1*/
  *((_DWORD *)this + 0x14) = 0; /*0x5a13d4*/
  *((_DWORD *)this + 0x12) = 0; /*0x5a13d7*/
  *((_DWORD *)this + 0x13) = 0; /*0x5a13da*/
  *((_DWORD *)this + 0x15) = 0; /*0x5a13dd*/
  *((_DWORD *)this + 0x16) = 0; /*0x5a13e0*/
  *((_DWORD *)this + 0x17) = 0; /*0x5a13e3*/
  *((_DWORD *)this + 0x18) = 0; /*0x5a13e6*/
  *((_DWORD *)this + 0x19) = 0; /*0x5a13e9*/
  *((_DWORD *)this + 0x1A) = 0; /*0x5a13ec*/
  *((_DWORD *)this + 0x1B) = 0; /*0x5a13ef*/
  *((_DWORD *)this + 0x1C) = 0; /*0x5a13f2*/
  *((_DWORD *)this + 0x1D) = 0; /*0x5a13f5*/
  *((_DWORD *)this + 0x1E) = 0; /*0x5a13f8*/
  *((_DWORD *)this + 0x1F) = 0; /*0x5a13fb*/
  *((_DWORD *)this + 0x20) = 0; /*0x5a13fe*/
  *((_DWORD *)this + 0x21) = 0; /*0x5a1404*/
  *((_DWORD *)this + 0xB) = 0; /*0x5a140a*/
  *((_DWORD *)this + 0xC) = 0; /*0x5a140d*/
  *((_DWORD *)this + 0xD) = 0; /*0x5a1410*/
  *((_BYTE *)this + 0x9C) = 1; /*0x5a1413*/
  *((_BYTE *)this + 0x9D) = 0; /*0x5a141a*/
  *((_DWORD *)this + 0x24) = 0; /*0x5a1420*/
  v2 = (EnchantmentItem *)FormHeapAlloc(0x44u); /*0x5a1426*/
  if ( v2 ) /*0x5a1439*/
    v3 = EnchantmentItem::EnchantmentItem(v2); /*0x5a143d*/
  else
    v3 = 0; /*0x5a1444*/
  *((_DWORD *)this + 0xA) = v3; /*0x5a144c*/
  *((_DWORD *)this + 0x25) = 0; /*0x5a144f*/
  *((_DWORD *)this + 0x22) = 0; /*0x5a1455*/
  *((_DWORD *)this + 0x23) = 0; /*0x5a145b*/
  v4 = (_DWORD *)FormHeapAlloc(0x28u); /*0x5a1461*/
  if ( v4 ) /*0x5a1474*/
    v5 = sub_57FE70(v4); /*0x5a1478*/
  else
    v5 = 0; /*0x5a147f*/
  *((_DWORD *)this + 0x26) = v5; /*0x5a1481*/
  *((_DWORD *)this + 0xE) = 0; /*0x5a1487*/
  return this; /*0x5a148c*/
}
