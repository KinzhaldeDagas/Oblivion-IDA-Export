Menu *__thiscall sub_5C0B50(Menu *this)
{
  int v2; // eax
  Menu *v3; // ecx

  Menu::Menu(this);
  this->__vftable = (MenuVtbl *)&QuickKeysMenu::`vftable';
  *((_DWORD *)this + 0xA) = 0;
  *((_DWORD *)this + 0xB) = 0;
  v2 = 0;
  v3 = (Menu *)((char *)this + 0x30);
  do
  {
    v3->__vftable = 0;
    byte_B3B418[v2++] = 0;
    v3 = (Menu *)((char *)v3 + 4);
  }
  while ( v2 < 8 );
  dword_B3B430[0] = 0xFFFFFFFF;
  dword_B3B424[0] = 0xFFFFFFFF;
  dword_B3B434 = 0xFFFFFFFF;
  dword_B3B428 = 0xFFFFFFFF;
  dword_B3B438 = 0xFFFFFFFF;
  dword_B3B42C = 0xFFFFFFFF;
  byte_B3B420 = 0;
  return this;
}
