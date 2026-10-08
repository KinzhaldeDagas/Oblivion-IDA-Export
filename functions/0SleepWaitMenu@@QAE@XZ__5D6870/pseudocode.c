SleepWaitMenu *__thiscall SleepWaitMenu::SleepWaitMenu(SleepWaitMenu *this)
{
  Menu::Menu((Menu *)this); /*0x5d6873*/
  this->members.unk08 = 0; /*0x5d687a*/
  this->members.unk0C = 0; /*0x5d687d*/
  this->members.unk00 = 0; /*0x5d6880*/
  this->members.unk04 = 0; /*0x5d6883*/
  this->members.unk10 = 0; /*0x5d6886*/
  this->members.unk14 = 0; /*0x5d6889*/
  *((_DWORD *)this + 0x10) = 0; /*0x5d688c*/
  *((_DWORD *)this + 0x11) = 0; /*0x5d688f*/
  this->__ftable = (MenuVtbl *)&SleepWaitMenu::`vftable'; /*0x5d6892*/
  *((_BYTE *)this + 0x4C) = 1; /*0x5d6898*/
  return this; /*0x5d689e*/
}
