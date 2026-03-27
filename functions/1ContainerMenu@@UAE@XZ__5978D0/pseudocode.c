void __usercall ContainerMenu::~ContainerMenu(Menu *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  this->__vftable = (MenuVtbl *)&ContainerMenu::`vftable';
  sub_446C10((unsigned int ****)TESDataHandler);
  Menu::~Menu(this, a2, a3, a4);
}
