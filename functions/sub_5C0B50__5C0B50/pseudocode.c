Menu *__thiscall sub_5C0B50(Menu *this)
{
  int v2; // eax
  Menu *v3; // ecx

  Menu::Menu(this); /*0x5c0b53*/
  this->__vftable = (MenuVtbl *)&QuickKeysMenu::`vftable'; /*0x5c0b5a*/
  *((_DWORD *)this + 0xA) = 0; /*0x5c0b60*/
  *((_DWORD *)this + 0xB) = 0; /*0x5c0b63*/
  v2 = 0; /*0x5c0b66*/
  v3 = (Menu *)((char *)this + 0x30); /*0x5c0b68*/
  do /*0x5c0b81*/
  {
    v3->__vftable = 0; /*0x5c0b70*/
    byte_B3B418[v2++] = 0; /*0x5c0b72*/
    v3 = (Menu *)((char *)v3 + 4); /*0x5c0b7b*/
  }
  while ( v2 < 8 ); /*0x5c0b81*/
  *(_DWORD *)&byte_B3B418[0x18] = 0xFFFFFFFF; /*0x5c0b86*/
  *(_DWORD *)&byte_B3B418[0xC] = 0xFFFFFFFF; /*0x5c0b8b*/
  *(_DWORD *)&byte_B3B418[0x1C] = 0xFFFFFFFF; /*0x5c0b90*/
  *(_DWORD *)&byte_B3B418[0x10] = 0xFFFFFFFF; /*0x5c0b95*/
  *(_DWORD *)&byte_B3B418[0x20] = 0xFFFFFFFF; /*0x5c0b9a*/
  *(_DWORD *)&byte_B3B418[0x14] = 0xFFFFFFFF; /*0x5c0b9f*/
  byte_B3B418[8] = 0; /*0x5c0ba6*/
  return this; /*0x5c0bac*/
}
