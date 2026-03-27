Menu *__thiscall sub_5AC550(Menu *this)
{
  Menu::Menu(this);
  *((float *)this + 0xC) = 0.0;
  this->__vftable = (MenuVtbl *)&LevelUpMenu::`vftable';
  *((_DWORD *)this + 0xA) = 0;
  *((_DWORD *)this + 0xB) = 3;
  return this;
}
