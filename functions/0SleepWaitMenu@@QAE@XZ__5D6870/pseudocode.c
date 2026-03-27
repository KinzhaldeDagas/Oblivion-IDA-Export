SleepWaitMenu *__thiscall SleepWaitMenu::SleepWaitMenu(SleepWaitMenu *this)
{
  Menu::Menu((Menu *)this);
  this->members.unk08 = 0;
  this->members.unk0C = 0;
  this->members.unk00 = 0;
  this->members.unk04 = 0;
  this->members.unk10 = 0;
  this->members.unk14 = 0;
  *((_DWORD *)this + 0x10) = 0;
  *((_DWORD *)this + 0x11) = 0;
  this->__ftable = (MenuVtbl *)&SleepWaitMenu::`vftable';
  *((_BYTE *)this + 0x4C) = 1;
  return this;
}
