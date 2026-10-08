void __usercall GenericMenu::~GenericMenu(Menu *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  this->__vftable = (MenuVtbl *)&GenericMenu::`vftable'; /*0x5a3c88*/
  InterfaceManager_GetSingleton(0, 1)->unk0B4 = *((void **)this + 0xA); /*0x5a3ca2*/
  Menu::~Menu(this, a2, a3, a4); /*0x5a3cb5*/
}
