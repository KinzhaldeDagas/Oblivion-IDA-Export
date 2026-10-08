AlchemyMenu *__thiscall AlchemyMenu::AlchemyMenu(AlchemyMenu *this)
{
  AlchemyItem *v2; // eax
  AlchemyItem *v3; // eax
  _DWORD *v4; // eax

  Menu::Menu((Menu *)this); /*0x59307b*/
  *(_DWORD *)this = &AlchemyMenu::`vftable'; /*0x593084*/
  *((_DWORD *)this + 0x2A) = 0; /*0x59308a*/
  *((_DWORD *)this + 0x2B) = 0; /*0x593090*/
  *((_DWORD *)this + 0xA) = 0; /*0x593096*/
  *((_DWORD *)this + 0xB) = 0; /*0x593099*/
  *((_DWORD *)this + 0xC) = 0; /*0x59309c*/
  *((_DWORD *)this + 0xD) = 0; /*0x59309f*/
  *((_DWORD *)this + 0xE) = 0; /*0x5930a2*/
  *((_DWORD *)this + 0xF) = 0; /*0x5930a5*/
  *((_DWORD *)this + 0x10) = 0; /*0x5930a8*/
  *((_DWORD *)this + 0x2C) = 0; /*0x5930ab*/
  *((_DWORD *)this + 0x1A) = 0; /*0x5930b1*/
  *((_DWORD *)this + 0x11) = 0; /*0x5930b4*/
  *((_DWORD *)this + 0x2D) = 0; /*0x5930b7*/
  *((_DWORD *)this + 0x1B) = 0; /*0x5930bd*/
  *((_DWORD *)this + 0x12) = 0; /*0x5930c0*/
  *((_DWORD *)this + 0x2E) = 0; /*0x5930c3*/
  *((_DWORD *)this + 0x1C) = 0; /*0x5930c9*/
  *((_DWORD *)this + 0x13) = 0; /*0x5930cc*/
  *((_DWORD *)this + 0x2F) = 0; /*0x5930cf*/
  *((_DWORD *)this + 0x1D) = 0; /*0x5930d5*/
  *((float *)this + 0x23) = 0.0; /*0x5930d8*/
  *((_DWORD *)this + 0x14) = 0; /*0x5930e7*/
  *((_DWORD *)this + 0x15) = 0; /*0x5930ea*/
  *((_DWORD *)this + 0x16) = 0; /*0x5930ed*/
  *((_DWORD *)this + 0x17) = 0; /*0x5930f0*/
  *((_DWORD *)this + 0x18) = 0; /*0x5930f3*/
  *((_DWORD *)this + 0x19) = 0; /*0x5930f6*/
  *((_DWORD *)this + 0x1E) = 0; /*0x5930f9*/
  *((_DWORD *)this + 0x1F) = 0; /*0x5930fc*/
  *((_DWORD *)this + 0x20) = 0; /*0x5930ff*/
  *((_DWORD *)this + 0x21) = 0; /*0x593105*/
  *((_DWORD *)this + 0x24) = 0; /*0x59310b*/
  *((_BYTE *)this + 0xA6) = 0xFF; /*0x593111*/
  v2 = (AlchemyItem *)FormHeapAlloc(0x80u); /*0x593118*/
  if ( v2 ) /*0x59312b*/
    v3 = AlchemyItem::AlchemyItem(v2); /*0x59312f*/
  else
    v3 = 0; /*0x593136*/
  *((float *)this + 0x22) = 0.0; /*0x59313c*/
  *((float *)this + 0x26) = 0.0; /*0x593146*/
  *((_DWORD *)this + 0x25) = v3; /*0x59314c*/
  *((_DWORD *)this + 0x27) = 0; /*0x593152*/
  *((_BYTE *)this + 0xA4) = 0; /*0x593158*/
  v4 = (_DWORD *)FormHeapAlloc(0x28u); /*0x59315e*/
  if ( v4 ) /*0x593171*/
    *((_DWORD *)this + 0x28) = sub_57FE70(v4); /*0x59317a*/
  else
    *((_DWORD *)this + 0x28) = 0; /*0x593194*/
  return this; /*0x593182*/
}
