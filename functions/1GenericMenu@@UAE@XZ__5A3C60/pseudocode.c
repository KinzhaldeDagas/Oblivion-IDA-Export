void __usercall GenericMenu::~GenericMenu(Menu *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  this->__vftable = (MenuVtbl *)&GenericMenu::`vftable';
  InterfaceManager_GetSingleton(0, 1)->unk0B4 = *((void **)this + 0xA);
  Menu::~Menu(this, a2, a3, a4);
}
