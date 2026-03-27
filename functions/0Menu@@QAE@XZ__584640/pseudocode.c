Menu *__thiscall Menu::Menu(Menu *this)
{
  this->__vftable = (MenuVtbl *)&Menu::`vftable';
  this->members.unk08 = 0;
  this->members.unk0C = 0;
  this->members.tile = 0;
  this->members.unk10 = 0;
  this->members.unk14 = 0;
  this->members.unk24 = 4;
  LOBYTE(this->members.unk1C) = 1;
  this->members.unk18 = 0;
  return this;
}
