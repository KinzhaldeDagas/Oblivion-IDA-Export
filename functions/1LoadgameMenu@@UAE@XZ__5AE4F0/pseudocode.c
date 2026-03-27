void __usercall LoadgameMenu::~LoadgameMenu(Menu *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  this->__vftable = (MenuVtbl *)&LoadgameMenu::`vftable';
  FormHeapFree(*((_DWORD *)this + 0x17));
  *((_DWORD *)this + 0x17) = 0;
  *((_WORD *)this + 0x31) = 0;
  *((_WORD *)this + 0x30) = 0;
  Menu::~Menu(this, a2, a3, a4);
}
