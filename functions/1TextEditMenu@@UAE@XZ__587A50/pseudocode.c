void __usercall TextEditMenu::~TextEditMenu(Menu *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  this->__vftable = (MenuVtbl *)&TextEditMenu::`vftable';
  sub_57FEB0((_DWORD *)this + 0xD);
  Menu::~Menu(this, a2, a3, a4);
}
