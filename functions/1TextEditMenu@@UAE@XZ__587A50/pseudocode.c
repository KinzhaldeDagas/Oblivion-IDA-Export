void __usercall TextEditMenu::~TextEditMenu(Menu *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  this->__vftable = (MenuVtbl *)&TextEditMenu::`vftable'; /*0x587a78*/
  sub_57FEB0((_DWORD *)this + 0xD); /*0x587a89*/
  Menu::~Menu(this, a2, a3, a4); /*0x587a98*/
}
