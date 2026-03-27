void __usercall MessageMenu::~MessageMenu(MessageMenu *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  *(_DWORD *)this = &MessageMenu::`vftable';
  InterfaceManager_GetSingleton(0, 1)->unk0B4 = *((void **)this + 0x17);
  Menu::~Menu((Menu *)this, a2, a3, a4);
}
