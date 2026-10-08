void __usercall ContainerMenu::~ContainerMenu(Menu *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  this->__vftable = (MenuVtbl *)&ContainerMenu::`vftable'; /*0x5978f8*/
  sub_446C10((unsigned int ****)g_TESDataHandler); /*0x59790c*/
  Menu::~Menu(this, a2, a3, a4); /*0x59791b*/
}
