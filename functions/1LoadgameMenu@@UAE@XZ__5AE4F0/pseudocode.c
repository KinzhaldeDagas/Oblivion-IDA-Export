void __usercall LoadgameMenu::~LoadgameMenu(Menu *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  this->__vftable = (MenuVtbl *)&LoadgameMenu::`vftable'; /*0x5ae514*/
  FormHeapFree(*((_DWORD *)this + 0x17)); /*0x5ae51e*/
  *((_DWORD *)this + 0x17) = 0; /*0x5ae52a*/
  *((_DWORD *)this + 0x18) = 0; /*0x5ae52d*/
  Menu::~Menu(this, a2, a3, a4); /*0x5ae53d*/
}
