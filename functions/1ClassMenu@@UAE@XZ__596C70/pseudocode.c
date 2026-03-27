void __usercall ClassMenu::~ClassMenu(Menu *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  this->__vftable = (MenuVtbl *)&ClassMenu::`vftable';
  FormHeapFree(*((_DWORD *)this + 0x21));
  *((_DWORD *)this + 0x21) = 0;
  *((_WORD *)this + 0x45) = 0;
  *((_WORD *)this + 0x44) = 0;
  Menu::~Menu(this, a2, a3, a4);
}
